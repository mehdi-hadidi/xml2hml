#pragma once

#include <fstream>
#include <vector>
#include "data.hpp"
#include "html_const.hpp"


class CreateHtml
{
    private:
        std::string m_filename;
        std::vector<Data>& m_data;

    public:
        CreateHtml(std::vector<Data>& data , const std::string& filename);
        void create();

};