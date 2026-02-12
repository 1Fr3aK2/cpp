#include <PmergeMe.hpp>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        return -1;
    }
    try
    {
        PmergeMe program(argv);
        program.process();
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    return 0;
}
