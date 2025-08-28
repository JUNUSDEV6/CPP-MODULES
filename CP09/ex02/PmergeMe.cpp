#include "PmergeMe.hpp"


// ----------------- Constructors & Destructor -----------------
PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) : _list(other._list), _deque(other._deque) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        _deque = other._deque;
        _list = other._list;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

// ----------------- Ford–Johnson List -----------------
void PmergeMe::forJohnsonList(std::list<int>& lst) {
    if (lst.size() <= 1)
        return;

    std::list<int> little;
    std::list<int> big;

    std::list<int>::iterator it = lst.begin();
    while (it != lst.end()) {
        int a = *it;
        ++it;
        if (it != lst.end()) {
            int b = *it;
            ++it;
            if (a < b) {
                little.push_back(a);
                big.push_back(b);
            } else {
                little.push_back(b);
                big.push_back(a);
            }
        } else {
            little.push_back(a);
        }
    }

    forJohnsonList(big);

    for (std::list<int>::iterator pit = little.begin(); pit != little.end(); ++pit) {
        int val = *pit;
        size_t left = 0;
        size_t right = big.size();

        while (left < right) {
            size_t mid = (left + right) / 2;
            std::list<int>::iterator midIt = big.begin();
            std::advance(midIt, mid);

            if (val < *midIt)
                right = mid;
            else
                left = mid + 1;
        }

        std::list<int>::iterator insertPos = big.begin();
        std::advance(insertPos, left);
        big.insert(insertPos, val);
    }

    lst = big;
}

// ----------------- Ford–Johnson Deque -----------------
static int binarySearchPos(const std::deque<int>& d, int value) {
    size_t left = 0;
    size_t right = d.size();

    while (left < right) {
        size_t mid = (left + right) / 2;
        if (value < d[mid])
            right = mid;
        else
            left = mid + 1;
    }
    return static_cast<int>(left);
}

void PmergeMe::forJohnsonDeque(std::deque<int>& d) {
    if (d.size() <= 1)
        return;

    std::deque<int> little;
    std::deque<int> big;

    size_t n = d.size();
    for (size_t i = 0; i + 1 < n; i += 2) {
        int a = d[i];
        int b = d[i + 1];

        if (a < b) {
            little.push_back(a);
            big.push_back(b);
        } else {
            little.push_back(b);
            big.push_back(a);
        }
    }

    bool odd = (n % 2 != 0);
    int rest = 0;
    if (odd)
        rest = d.back();

    forJohnsonDeque(big);

    for (size_t i = 0; i < little.size(); i++) {
        int pos = binarySearchPos(big, little[i]);
        big.insert(big.begin() + pos, little[i]);
    }

    if (odd) {
        int pos = binarySearchPos(big, rest);
        big.insert(big.begin() + pos, rest);
    }

    d = big;
}

// ----------------- Input Parsing -----------------
bool PmergeMe::isPositifNb(const std::string& s) {
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.size(); ++i)
        if (!isdigit(s[i]))
            return false;
    return true;
}

void PmergeMe::parseInput(int argc, char **argv) {
    if (argc < 2)
        throw std::runtime_error("no input");

    for (int i = 1; i < argc; ++i) {
        std::string token(argv[i]);

        if (!isPositifNb(token))
            throw std::runtime_error("invalid input");

        long val = std::atol(token.c_str());
        if (val <= 0 || val > INT_MAX)
            throw std::runtime_error("overflow range");

        _deque.push_back(static_cast<int>(val));
        _list.push_back(static_cast<int>(val));
    }
}

// ----------------- Printing -----------------
template <typename T>
void PmergeMe::printContainer(const T& c, const std::string& prefix) {
    std::cout << prefix;
    for (typename T::const_iterator it = c.begin(); it != c.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

// ----------------- Sorting & Display -----------------
void PmergeMe::sortAndDisplay() {
    printContainer(_deque, "Before: ");

    std::list<int> l = _list;
    std::deque<int> d = _deque;

    clock_t startD = clock();
    forJohnsonDeque(d);
    clock_t endD = clock();
    double timeD = (double)(endD - startD) / CLOCKS_PER_SEC * 1e6;

    clock_t startL = clock();
    forJohnsonList(l);
    clock_t endL = clock();
    double timeL = (double)(endL - startL) / CLOCKS_PER_SEC * 1e6;

    printContainer(d, "After: ");

    std::cout << "Time to process a range of " << _deque.size()
              << " elements with std::deque: " << timeD << " us" << std::endl;

    std::cout << "Time to process a range of " << _list.size()
              << " elements with std::list: " << timeL << " us" << std::endl;
}
