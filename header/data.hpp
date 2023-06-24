#pragma once

#include <iostream>

class Data
{
public:
    std::string m_title;
    std::string m_artist;
    std::string m_company;
    std::string m_country;
    double m_price;
    unsigned short m_year;




public:
    Data() = default;
    
    Data(std::string title, std::string artist, std::string company, 
         std::string country, double price, unsigned short year);
};
