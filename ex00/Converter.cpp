/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:44:54 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/13 17:15:23 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

static	void ft_msg(std::string msg)
{
	std::cout << msg << std::endl;
}

// ----------------------------- CANONIC METHODS ------------------------------

Converter::Converter() : _str("Default")
{
	ft_msg("A Converter has been constructed by default");
}

Converter::Converter(std::string str) : _str(str)
{
	ft_msg("A Converter has been constructed");
}

Converter::~Converter()
{
	ft_msg("A Converter has been destroyed");
}

Converter::Converter(Converter const & ref)
{
	_str = ref.getStr();
	ft_msg("A Converter has been constructed from copy");
}

Converter &	Converter::operator=(Converter const & ref)
{
	_str = ref.getStr();
	ft_msg("Assignement operator called");
	return (*this);
}

// ------------------------------------- GETTER -------------------------------

std::string Converter::getStr( void ) const
{
	return (this->_str);
}

// ------------------------------ CONVERSION METHODS --------------------------

// CHAR
Converter::operator char()
{
	std::cout << "[" << _str << "]" << "as a char: " << std::endl;
	return (stoi(_str)); //to test
}

// INT
Converter::operator int()
{
	std::cout << "[" << _str << "]" << "as an int: " << std::endl;
	return (stoi(_str)); //to test
}

// FLOAT
Converter::operator float()
{
	float	f;
	try
	{
		f = stof(_str);
		std::cout << "[" << _str << "] as a float: " << f << std::endl;
	}
	catch (const std::invalid_argument& ia){
		std::cout << "[" << _str << "] as a float: ";
		ft_msg("Impossible: invalid argument");
	}
	catch (const std::out_of_range& oor) {
		std::cout << "[" << _str << "] as a float: ";
		ft_msg("Impossible: out of float range");
	}
	return (f);
}

// DOUBLE
Converter::operator double()
{
	std::cout << "[" << _str << "]" << "as a double: " << std::endl;
	return (stof(_str)); //to test
}