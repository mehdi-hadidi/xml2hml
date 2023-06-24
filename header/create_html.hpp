#pragma once

#include <fstream>
#include <vector>
#include "data.hpp"
#include "html_const.hpp"

// This file has been used for creating html file based on xml file
class CreateHtml
{
    private:
        std::string m_filename;     // html file name
        std::vector<Data>& m_data;  // I guess we can use RVALUE REFERENCE for this part

    public:
        CreateHtml(std::vector<Data>& data , const std::string& filename); // I guess we can use RVALUE REFERENCE for this part and we can use std::move MAYBE!
        void create();

};