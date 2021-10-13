/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:40:59 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/13 17:13:28 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Converter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments\n";
		return (0);
	}

	std::string	argument = argv[1];
	Converter	converter(argument);
	//char		c;
	//int			n;
	//float		f;
	//double		d;

	float	f;
	f = converter;

	return (0);
}