#include "parse_xml.hpp"


ParseXml::ParseXml(const std::string& fileName) : m_filename (fileName) {}



std::vector<Data> ParseXml::Parse()
{
    pugi::xml_document doc;
	std::vector<Data> datas;
	
	// load the XML file
	if (!doc.load_file((const char*)m_filename.c_str()))
		throw std::invalid_argument("error 0001");


	// reading CATALOG
	pugi::xml_node node =  doc.child("CATALOG");
	if(!node)
	{
		std::cout << "CATALOG doesnt exist" << std::endl;
		throw std::invalid_argument("error 0002");	
	}

	for(pugi::xml_node cd : node)
	{
		Data data {};
		for (const pugi::xml_node& child: cd.children())
        {
			std::string tag_name = child.name();
			
			if( tag_name == "TITLE" ) data.m_title = child.child_value();
			else if( tag_name == "ARTIST" ) data.m_artist = child.child_value();
			else if( tag_name == "COMPANY" ) data.m_company = child.child_value();
			else if( tag_name == "COUNTRY" ) data.m_country = child.child_value();
			else if( tag_name == "PRICE" ) data.m_price = std::stof(child.child_value());
			else if( tag_name == "YEAR" ) data.m_year = std::stoi(child.child_value());
            
			
			//cout << x << "->" << x.length() << std::endl;
        }
		datas.push_back(data);
	
	}

	return datas;
}