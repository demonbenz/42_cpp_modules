/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/04 16:35:18 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define	BRAIN_HPP

#include <string>

class	Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		virtual ~Brain();

		//copy constructor and operator overload funct
		Brain(Brain const & rhs);
		Brain & operator=(Brain const & rhs);

		//getter and setter
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
};

#endif
