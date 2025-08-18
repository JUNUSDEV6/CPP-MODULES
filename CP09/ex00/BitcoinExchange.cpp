#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    loadDatabase("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
    : _database(other._database)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        _database = other._database;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::loadDatabase(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open database file." << std::endl;
        return;
    }
    
    std::string line;
    bool firstLine = true;
    
    while (std::getline(file, line))
    {
        // Skip header line
        if (firstLine)
        {
            firstLine = false;
            continue;
        }
        
        size_t commaPos = line.find(',');
        if (commaPos == std::string::npos)
            continue;
            
        std::string date = line.substr(0, commaPos);
        std::string priceStr = line.substr(commaPos + 1);
        
        double price = std::atof(priceStr.c_str());
        _database[date] = price;
    }
    file.close();
}

std::string BitcoinExchange::trim(const std::string& str)
{
    size_t start = str.find_first_not_of(" \t\n\r");
    if (start == std::string::npos)
        return "";
    
    size_t end = str.find_last_not_of(" \t\n\r");
    return str.substr(start, end - start + 1);
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
    if (date.length() != 10)
        return false;
    
    if (date[4] != '-' || date[7] != '-')
        return false;
    
    // Check if all other characters are digits
    for (size_t i = 0; i < date.length(); ++i)
    {
        if (i == 4 || i == 7)
            continue;
        if (!std::isdigit(date[i]))
            return false;
    }
    
    // Extract year, month, day
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());
    
    // Basic validation
    if (year < 1000 || year > 9999)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    
    // Month-specific day validation
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    if (month == 2)
    {
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (day > (isLeap ? 29 : 28))
            return false;
    }
    
    return true;
}

bool BitcoinExchange::isValidValue(const std::string& valueStr, double& value)
{
    char* endPtr;
    value = std::strtod(valueStr.c_str(), &endPtr);
    
    // Check if conversion was successful and entire string was consumed
    if (endPtr == valueStr.c_str() || *endPtr != '\0')
        return false;
    
    // Check range
    if (value < 0)
        return false;
    if (value > 1000)
        return false;
    
    return true;
}

std::string BitcoinExchange::findClosestDate(const std::string& date)
{
    std::map<std::string, double>::const_iterator it = _database.lower_bound(date);
    
    // If exact match found
    if (it != _database.end() && it->first == date)
        return it->first;
    
    // If we need to go to the previous date (lower date)
    if (it != _database.begin())
    {
        --it;
        return it->first;
    }
    
    // No valid date found
    return "";
}

void BitcoinExchange::processLine(const std::string& line)
{
    if (line.empty())
        return;
    
    size_t pipePos = line.find(" | ");
    if (pipePos == std::string::npos)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return;
    }
    
    std::string dateStr = trim(line.substr(0, pipePos));
    std::string valueStr = trim(line.substr(pipePos + 3));
    
    // Validate date
    if (!isValidDate(dateStr))
    {
        std::cout << "Error: bad input => " << dateStr << std::endl;
        return;
    }
    
    // Validate value
    double value;
    if (!isValidValue(valueStr, value))
    {
        if (valueStr.find('-') != std::string::npos || value < 0)
            std::cout << "Error: not a positive number." << std::endl;
        else
            std::cout << "Error: too large a number." << std::endl;
        return;
    }
    
    // Find closest date in database
    std::string closestDate = findClosestDate(dateStr);
    if (closestDate.empty())
    {
        std::cout << "Error: no valid date found in database." << std::endl;
        return;
    }
    
    // Calculate and display result
    double rate = _database[closestDate];
    double result = value * rate;
    
    std::cout << dateStr << " => " << value << " = " << result << std::endl;
}

void BitcoinExchange::processFile(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }
    
    std::string line;
    bool firstLine = true;
    
    while (std::getline(file, line))
    {
        // Skip header line
        if (firstLine)
        {
            firstLine = false;
            continue;
        }
        
        processLine(line);
    }
    
    file.close();
}