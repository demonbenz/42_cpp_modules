/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedFile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:39:19 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/18 13:36:47 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDFILE_HPP
#define SEDFILE_HPP
#include <iostream>
#include <string>
#include <fstream>

class SedFile
{
private:
    /* data */
    std::string _filename;
    std::string _data;
    
public:
    SedFile(std::string filename);
    ~SedFile();

    std::string readFile(std::string filename);
    std::string  findAndReplace(std::string data, std::string s1, std::string s2);
    void    writeFile(std::string filename, std::string data);
    std::string getName();
    std::string getData();
};

#endif
