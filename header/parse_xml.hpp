#pragma once

#include <vector>
#include <pugixml.hpp>
#include "data.hpp"
#include "html_const.hpp"

// this class has been used for parsing xml
class ParseXml
{
    private:
        std::string m_filename; // name of xml file
    public:
        ParseXml(const std::string& filename);
        std::vector<Data> Parse();    
};