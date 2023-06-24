#include "data.hpp"

 Data::Data(std::string title, std::string artist, std::string company, 
         std::string country, double price, unsigned short year):m_title{title},
                                                                 m_artist{artist},
                                                                 m_company{company},
                                                                 m_country{country},
                                                                 m_price(price),
                                                                 m_year{year}   
    {
        
    }    