#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <sstream>
#include <string>
#include <exception>
#include <map>
#include <fstream> 
#include <limits>
#include <cstdlib>
#include <cctype> 


class BitcoinExchange
{
    private:
        std::map<std::string, double> dB;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        
        void loadDb(const std::string& file);
        void processInput(const std::string& filename);
        ~BitcoinExchange();

};



#endif