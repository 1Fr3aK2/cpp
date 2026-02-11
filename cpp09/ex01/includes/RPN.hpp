#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
#include <string>
#include <algorithm>

class RPN
{
    public:
        RPN();
        RPN(const RPN& obj);
        RPN& operator=(const RPN& obj);
        bool isValid(const std::string& str);
        int math(const std::string& str);
        ~RPN();
};



#endif