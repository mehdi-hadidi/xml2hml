#include "parse_xml.hpp"


ParseXml::ParseXml(const std::string& fileName) : m_filename (fileName) {}



std::vector<Data> ParseXml::Parse()
{
    pugi::xml_document doc;
	std::vector<Data> datas;
	
	// load the XML file
	if (!doc.load_file((const char*)m_filename.c_str()))
		throw std::invalid_argument("error 0001 - filename dosn't exist");


	// reading CATALOG
	pugi::xml_node node =  doc.child("CATALOG");
	if(!node)
	{
		throw std::invalid_argument("error 0002 - CATALOG doesnt exist");	
	}

	for(pugi::xml_node cd : node)
	{
		Data data {};
		for (const pugi::xml_node& child: cd.children())
        {
			std::string tag_name = child.name();
			
			if( tag_name == HEADER_TITLE ) data.setTitle( child.child_value() );
			else if( tag_name == HEADER_ARTIST ) data.setArtist( child.child_value() );
			else if( tag_name == HEADER_COMPANY ) data.setCompany(  child.child_value() );
			else if( tag_name == HEADER_COUNTRY ) data.setCountry( child.child_value() );
			else if( tag_name == HEADER_PRICE ) data.setPrice( std::stof(child.child_value()) );
			else if( tag_name == HEADER_YEAR ) data.setYear(  std::stoi(child.child_value()) );
            
        }

		datas.push_back(data);
	
	}

	return datas;
}