#include <iostream>
#include <vector>
#include "parse_xml.hpp"
#include "data.hpp"
#include "create_html.hpp"



int main(int argc , char* argv[])
{
	if(argc != 2)
    {
        std::cout << "you have to select the xml file" << std::endl;
        return 0;
    }


    std::string filename = argv[1];
	ParseXml parser(filename);
	std::cout << "Parsing xml started..." << std::endl;
	std::vector<Data> records = parser.Parse();
	std::cout << "Parsing xml done." << std::endl;

	std::cout << "creating hml started..." << std::endl;
	CreateHtml ch(records , filename);
	ch.create();
	std::cout << "creating hml done." << std::endl;
	std::cout << "html file is ready." << std::endl;

	return 0;
}