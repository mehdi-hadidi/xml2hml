#pragma once

#include <vector>
#include <pugixml.hpp>
#include "data.hpp"

class ParseXml
{
    private:
        std::string m_filename;
    public:
        ParseXml(const std::string& filename);
        std::vector<Data> Parse();    
};