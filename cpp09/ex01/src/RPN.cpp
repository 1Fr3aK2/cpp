#include <RPN.hpp>

RPN::RPN() {}

RPN::RPN(const RPN &obj)
{
	*this = obj;
}
RPN &RPN::operator=(const RPN &obj)
{
	(void)obj;
	return (*this);
}

bool	isOperator(char c)
{
	return (c == '+' || c == '*' || c == '-' || c == '/');
}

bool	isNumber(const std::string &str)
{
	size_t	i;

	if (str.empty())
		return (false);
	i = 0;
	if (isOperator(str[i]))
		i++;
	if (i == str.size())
		return (false);
	for (; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}
/* bool isNumber(const std::string& str)
{
    if (str.empty())
        return false;

    for (size_t i = 0; i < str.size(); i++)
    {
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return false;
    }
    return true;
} */

bool RPN::isValid(const std::string &str)
{
	if (str.empty())
		return (false);
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(static_cast<unsigned char>(str[i])) && !isOperator(str[i])
			&& str[i] != ' ')
			return (false);
	}
	return (true);
}

int RPN::math(const std::string &str)
{
	int	right;
	int	left;

	std::stack<int> stack;
	std::istringstream input(str);
	std::string token;
	while (input >> token)
	{
		if (isNumber(token))
			stack.push(std::atoi(token.c_str()));
		else if (token.size() == 1 && isOperator(token[0]))
		{
			if (stack.size() < 2)
			{
				std::cerr << "Not enough numbers in the stack to the the math" << std::endl;
				return (-1);
			}
			right = stack.top();
			stack.pop();
			left = stack.top();
			stack.pop();
			if (token[0] == '+')
				stack.push(left + right);
			else if (token[0] == '-')
				stack.push(left - right);
			else if (token[0] == '*')
				stack.push(left * right);
			else if (token[0] == '/')
			{
				if (right == 0)
				{
					std::cerr << "Impossible to divide by 0" << std::endl;
					return (-1);
				}
				else
					stack.push(left / right);
			}
			else
			{
				std::cerr << "Invalid operator" << std::endl;
				return (-1);
			}
		}
	}
	if (stack.size() != 1)
	{
		std::cerr << "Invalid expression" << std::endl;
		return (-1);
	}
	return (stack.top());
}

RPN::~RPN() {}