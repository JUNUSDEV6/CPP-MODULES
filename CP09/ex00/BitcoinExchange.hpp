/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:50:14 by yohanafi          #+#    #+#             */
/*   Updated: 2025/08/09 12:59:37 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <limits>

class BitcoinExchange
{
    private:
        std::map<std::string, double> _database;
        
        void loadDatabase(const std::string& filename);
        bool isValidDate(const std::string& date);
        bool isValidValue(const std::string& valueStr, double& value);
        std::string findClosestDate(const std::string& date);
        void processLine(const std::string& line);
        std::string trim(const std::string& str);
        
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        ~BitcoinExchange();
        
        void processFile(const std::string& filename);
};

#endif