#ifndef PMERGEME_HPP
#define PMERGEME_HPP

class   PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe&   operator=(const PmergeMe& other);
        ~PmergeMe();

        void    parseInput(int argc, char **argv);
        void    sortAndDisplay();

    private:
        std::list<int>  _list;
        std::deque<int> _deque;

        void    forJohnsonDeque(std::deque<int>& d);
        void    forJohnsonList(std::list<int>& i);
        
        template    <typename T>
        void    printContainer(const T& c, const std::string& prefix);

        bool    isPositifNb(const std::string& s);
};

#endif