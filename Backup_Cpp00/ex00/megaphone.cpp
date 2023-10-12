/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:14:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/13 16:22:06 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBREAKABLE FEEDBACK NOISE *";
	}
	i = 1;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				argv[i][j] -= 32;
			}
			j++;
		}
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
*/

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBREAKABLE FEEDBACK NOISE *";
	}
	i = 1;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			argv[i][j] = std::toupper(argv[i][j]);
			j++;
		}
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
