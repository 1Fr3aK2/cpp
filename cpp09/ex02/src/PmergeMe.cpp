#include <PmergeMe.hpp>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& obj) 
{
    *this = obj;
}

PmergeMe::PmergeMe(char **argv) 
{
    for (int i = 1; argv[i]; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (!isdigit(argv[i][j]))
                throw std::runtime_error("Error: Invalid input");
        }
        long number = std::atol(argv[i]);
        if (number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min())
            throw std::runtime_error("Error: number bigger ou lower than expected");
        Vec.push_back(number);
        Deq.push_back(number);
    }
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj)
{
    (void)obj;
    return *this;
}

void PmergeMe::printVector(const std::vector<int>& vec, const std::string& msg) const
{
    std::cout << msg;
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::printDeque(const std::deque<int>& deq, const std::string& msg) const
{
    std::cout << msg;
    for (size_t i = 0; i < deq.size(); ++i)
        std::cout << deq[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::mergeVector(const std::vector<int>&left, const std::vector<int>&right, std::vector<int>&result)
{
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    while(i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
            result[k++] = left[i++];
        else
            result[k++] = right[j++];
    }
    while (i < left.size())
        result[k++] = left[i++];

    while (j < right.size())
        result[k++] = right[j++];
}

void PmergeMe::mergeSortVector(std::vector<int>& arr)
{
    if (arr.size() <= 1)
        return;
    size_t mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());
    mergeSortVector(left);
    mergeSortVector(right);
    mergeVector(left, right, arr);
}

void PmergeMe::mergeDeque(const std::deque<int>& left,
                          const std::deque<int>& right,
                          std::deque<int>& result)
{
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    while(i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
            result[k++] = left[i++];
        else
            result[k++] = right[j++];
    }
    while (i < left.size())
        result[k++] = left[i++];

    while (j < right.size())
        result[k++] = right[j++];
}

void PmergeMe::mergeSortDeque(std::deque<int>& arr)
{
    if (arr.size() <= 1)
        return;
    size_t mid = arr.size() / 2;
    std::deque<int> left(arr.begin(), arr.begin() + mid);
    std::deque<int> right(arr.begin() + mid, arr.end());
    mergeSortDeque(left);
    mergeSortDeque(right);
    mergeDeque(left, right, arr);
}

int PmergeMe::binarySearchVector(const std::vector<int>& arr, int value)
{
    int left = 0;
    int right = arr.size();

    while (left < right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int PmergeMe::binarySearchDeque(const std::deque<int>& arr, int value)
{
    int left = 0;
    int right = arr.size();
    while (left < right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

std::vector<size_t> PmergeMe::generateJacobsthalOrder(size_t size)
{
    std::vector<size_t> jacob;
    std::vector<size_t> order;

    jacob.push_back(0);
    jacob.push_back(1);
    while (jacob.back() < size)
    {
        size_t next = jacob[jacob.size()-1] + 2 * jacob[jacob.size()-2];
        jacob.push_back(next);
    }
    for (size_t i = 2; i < jacob.size(); i++)
    {
        size_t start = jacob[i];
        size_t end = jacob[i-1];
        if (start > size) start = size;
        for (size_t j = start; j > end; j--)
            order.push_back(j-1);
    }
    return order;
}

void PmergeMe::fordJohnsonVector(std::vector<int>& container)
{
    if (container.size() <= 1)
        return;

    std::vector<int> mainChain;
    std::vector<int> pending;
    size_t i = 0;
    while (i+1 < container.size())
    {
        if (container[i] > container[i+1])
        {
            mainChain.push_back(container[i]);
            pending.push_back(container[i+1]);
        }
        else
        {
            mainChain.push_back(container[i+1]);
            pending.push_back(container[i]);
        }
        i += 2;
    }
    if (i < container.size())
        mainChain.push_back(container[i]);
    mergeSortVector(mainChain);
    std::vector<size_t> order = generateJacobsthalOrder(pending.size());
    for (size_t j = 0; j < order.size(); j++)
    {
        int value = pending[order[j]];
        int pos = binarySearchVector(mainChain, value);
        mainChain.insert(mainChain.begin() + pos, value);
    }
    container = mainChain;
}


void PmergeMe::fordJohnsonDeque(std::deque<int>& container)
{
    if (container.size() <= 1)
        return;
    std::deque<int> mainChain;
    std::deque<int> pending;
    size_t i = 0;
    while (i+1 < container.size())
    {
        if (container[i] > container[i+1])
        {
            mainChain.push_back(container[i]);
            pending.push_back(container[i+1]);
        }
        else
        {
            mainChain.push_back(container[i+1]);
            pending.push_back(container[i]);
        }
        i += 2;
    }
    if (i < container.size())
        mainChain.push_back(container[i]);
    mergeSortDeque(mainChain);
    std::vector<size_t> order = generateJacobsthalOrder(pending.size());
    for (size_t j = 0; j < order.size(); j++)
    {
        int value = pending[order[j]];
        int pos = binarySearchDeque(mainChain, value);
        mainChain.insert(mainChain.begin() + pos, value);
    }
    container = mainChain;
}


void PmergeMe::process()
{
    printVector(Vec, "Before: ");
    clock_t startVec = clock();
    fordJohnsonVector(Vec);
    clock_t endVec = clock();
    printVector(Vec, "After: ");
    double timeVec = (double)(endVec - startVec) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << Vec.size()
              << " elements with std::vector : " << timeVec << " us" << std::endl;
    clock_t startDeq = clock();
    fordJohnsonDeque(Deq);
    clock_t endDeq = clock();
    double timeDeq = (double)(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << Deq.size()
              << " elements with std::deque  : " << timeDeq << " us" << std::endl;
}

PmergeMe::~PmergeMe() {}

