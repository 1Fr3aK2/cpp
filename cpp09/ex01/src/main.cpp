#include <RPN.hpp>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        return -1;
    }
    RPN rpn;
    if (!rpn.isValid(argv[1]))
    {
        std::cerr << "Error: Invalid input" << std::endl;
        return -1;
    }
    int total = rpn.math(argv[1]);
    if (total == -1)
        return -1;
    std::cout << total << std::endl;
    return 0;
}