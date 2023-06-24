#pragma once

#include <iostream>

class Data
{
private:
    std::string m_title;
    std::string m_artist;
    std::string m_company;
    std::string m_country;
    double m_price;
    unsigned short m_year;

public:
    //setters
    void setTitle(const std::string &title)     { m_title = title; }
    void setArtist(const std::string &artist)   { m_artist = artist; }
    void setCompany(const std::string &company) { m_company = company; }
    void setCountry(const std::string &country) { m_country = country; }
    void setPrice(double price)           { m_price = price; }
    void setYear(unsigned short year)     { m_year = year; }

    //getters
    std::string getTitle() const  { return m_title;}
    std::string getArtist() const { return m_artist;}
    std::string getCompany() const { return m_company;}
    std::string getCountry() const { return m_country;}
    double getPrice() const  { return m_price;}
    unsigned short getYear() const   { return m_year;}

public:
    Data() = default;

    Data(std::string title, std::string artist, std::string company,
         std::string country, double price, unsigned short year);
};
