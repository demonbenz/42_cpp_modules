/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:32:30 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/06 11:05:33 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP
#include<iostream>
#include<iomanip>
#include<string>
#include"Contact.hpp"

class	PhoneBook
{
    private:
        int _index;
        int _i;
        Contact  _contact[8];

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    add(void);
        void    search(void);       
};

#endif
