#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {}

PmergeMe&   PmergeMe::operator=(const PmergeMe& other) {}

PmergeMe::~PmergeMe() {}

bool    PmergeMe::isPositifNb(cont std::string& s) {
    if (s.empty())
        return false;
    for (int i = 0; i < s.size(); ++i)
        if (!isdigit(s[i]))
            return false;
    return true;
}

void    PmergeMe::parseInput(int argc, char **argv)
{
    if (argc < 2)
        throw   std::runtime_error("no imput");

    for (int i = 1; i < argc; ++i) {
        std::string token(argv[i]);

        if (!isPositifNb())
            throw std::runtime_error("invalid input");

        long    val = std::atol(token.c_str());
        if (val <= 0 || val > INT_MAX)
            throw std::runtime_error("overflow range");

        _deque.push_back(static_cast<int>(val));
        _list.push_back(static_cast<int>(val));
    }
}

template <typename T>
void    PmergeMe::printContainer(const T& c, const std::string& prefix) {
    std::cout << prefix;
    typename t::const_iterator it;
    for (it = c.begin(); it != c.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void    PmergeMe::sortAndDisplay() {
    printContainer(_deque, "before: ");

    std::list<int>  l = _list;
    std::deque<int> d = _deque;

    clock_t startD = clock();
    forJohnsonDeque(d);
    clock_t endD = clock();
    double timeD = (double)(endD - startD) / CLOC_PER_SEC * 1e6;

    clock_t startL = clock();
    forJohnsonList(l);
    clock_t endL = clock();
    double timeL = (double)(endL - startL) / CLOC_PER_SEC * 1e6;

    printContainer(d, "afther: ")

    std::cout << "Time to process a range of " << _deque.size() << " std::deque: " << timeDeque << " us " << std::endl;
}
