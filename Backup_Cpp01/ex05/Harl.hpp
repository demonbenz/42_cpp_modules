/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:14:54 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/20 20:39:11 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>
#include<string>

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define PURPLE 	"\033[0;35m"
#define RESET	"\033[0m"

class	Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl( void );
		~Harl( void );
		
		void	complain(std::string level);
		std::string	strUpper(std::string str);
};

#endif
