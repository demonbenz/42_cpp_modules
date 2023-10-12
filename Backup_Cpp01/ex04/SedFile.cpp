/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedFile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:38:48 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/25 15:19:29 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedFile.hpp"

SedFile::SedFile(std::string filename) : _filename(filename)
{
    std::cout << "Constructor is create." << std::endl;
    this->_data = readFile(this->_filename);
}
SedFile::~SedFile()
{
    std::cout << "Destructor is destroy." << std::endl;
}
std::string SedFile::readFile(std::string filename)
{
    char    ch;
    std::string data;
    
    data = "";
    std::ifstream   ifs(filename.c_str(), std::ifstream::in);
    if(!ifs.good() || !ifs.is_open())
    {
        std::cerr << "File cannot open" << std::endl;
        ifs.close();
        return("");
    }
    else
    {
        while(ifs)
        {
            ifs.get(ch);
            data.push_back(ch);
        }
    ifs.close();
    return(data);
    }
}
std::string  SedFile::findAndReplace(std::string data, std::string s1, std::string s2)
{
    std::string newData;
    std::string sub;
    size_t  found;
    size_t  first;

    newData = "";
    if (s1.length() == 0 || s2.length() == 0)
        return(data);
    found = data.find(s1, 0);
    if(found == std::string::npos)
        return(data);
    
    found = 0; 
    while(1)
    {
        first = found;
        found = data.find(s1, first);
        if (found == std::string::npos)
            break;
        sub = data.substr(first, found - first);
        newData += sub;
        newData += s2;
        found += s1.length(); 
    }
    if(first < data.length())
    {
        sub = data.substr(first);
        newData += sub;
    }
    
   return(newData); 
}
void    SedFile::writeFile(std::string filename, std::string data)
{
   std::ofstream    ofs(filename,  std::ofstream::trunc | std::ofstream::out);
    ofs << data;
    ofs.close();
}
std::string SedFile::getName()
{
    return(this->_filename);
}
std::string SedFile::getData()
{
    return(this->_data);
}

