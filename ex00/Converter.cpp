/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:44:54 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/13 16:50:11 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

// ----------------------------- CANONIC METHODS -------------------------------
static	void ft_msg(std::string msg)
{
	std::cout << msg << std::endl;
}

Converter::Converter()
{
	ft_msg("A Converter has been constructed");
}

Converter::~Converter()
{
	ft_msg("A Converter has been destroyed");
}

Converter::Converter(Converter const & ref)
{
	ft_msg("A Converter has been constructed from copy");
	ft_msg("Nothing to copy here");
}

Converter &	Converter::operator=(Converter const & ref)
{
	(void)ref;
	ft_msg("Nothing to assign here");
}

// ------------------------------ CONVERSION METHODS ----------------------------