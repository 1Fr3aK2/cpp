#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include "limits"

class PmergeMe
{
private:
    std::vector<int> Vec;
    std::deque<int>  Deq;

    void fordJohnsonVector(std::vector<int>& container);
    void fordJohnsonDeque(std::deque<int>& container);

    void mergeSortVector(std::vector<int>& arr);
    void mergeVector(const std::vector<int>& left,
                     const std::vector<int>& right,
                     std::vector<int>& result);

    void mergeSortDeque(std::deque<int>& arr);
    void mergeDeque(const std::deque<int>& left,
                    const std::deque<int>& right,
                    std::deque<int>& result);

    int binarySearchVector(const std::vector<int>& arr, int value);
    int binarySearchDeque(const std::deque<int>& arr, int value);

    std::vector<size_t> generateJacobsthalOrder(size_t size);

    void printVector(const std::vector<int>& vec, const std::string& msg) const;
    void printDeque(const std::deque<int>& deq, const std::string& msg) const;

public:
    PmergeMe();
	PmergeMe(char **argv);
	PmergeMe(const PmergeMe &obj);
	PmergeMe &operator=(const PmergeMe &obj);
	~PmergeMe();
    void process();
};

#endif
