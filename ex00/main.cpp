/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:40:59 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 10:09:07 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Converter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments\n";
		return (0);
	}
	std::cout << std::fixed << std::setprecision(1); // Precision = 1
	std::string	argument = argv[1];
	Converter	converter(argument);

	char		c;
	int			n;
	float		f;
	double		d;

	c = converter;
	n = converter;
	f = converter;
	d = converter;

	return (0);
}