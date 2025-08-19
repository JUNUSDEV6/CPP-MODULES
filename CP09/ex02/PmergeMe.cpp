#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {}

PmergeMe&   PmergeMe::operator=(const PmergeMe& other) {}

PmergeMe::~PmergeMe() {}

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
