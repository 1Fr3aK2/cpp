#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange() : dB() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) : dB(obj.dB) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
    if (this != &obj)
        this->dB = obj.dB;
    return *this;
}

static std::string trim(const std::string& str)
{
    size_t start;
    size_t end;
    start = str.find_first_not_of(" \t");
    end = str.find_last_not_of(" \t");
    if (start == std::string::npos)
        throw std::runtime_error("Invalid date");
    return (str.substr(start, end - start + 1));
}

void BitcoinExchange::loadDb(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw std::runtime_error("Error opening Database: " + filename);
    file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string str;
    while (std::getline(file, str))
    {
        size_t comma = str.find(',');
        if (comma == std::string::npos)
        {
            throw std::runtime_error("Comma not found");
            continue;
        }
        std::string date;
        double value;
        date = trim(str.substr(0, comma));
        value = atof(trim(str.substr(comma + 1)).c_str());
        dB[date] = value;
    }
}
static bool isValidDate(const std::string& date)
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (!std::isdigit(static_cast<unsigned char>(date[i])))
            return false;
    }
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());

    if (year < 2009 || month > 12 || day > 31)
        return false;
    static const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int monthDay = days[month - 1];
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
		monthDay = 29;
    return (day <= 1 && day <= monthDay);
}


BitcoinExchange::~BitcoinExchange() {}

