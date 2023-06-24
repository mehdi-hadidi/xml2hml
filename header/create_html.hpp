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
        std::vector<Data>& m_data;  // records of file

    public:
        CreateHtml(std::vector<Data>& data , const std::string& filename);
        void create();

};