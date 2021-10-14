/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:44:54 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 10:30:54 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <limits.h>

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

static int	ft_is_printable_char(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// CHAR
Converter::operator char()
{
	char c = 0;
	if (_str.length() == 1)
	{
		c = _str[0];
		if (ft_is_printable_char(c))
			std::cout << "[" << _str << "]" << " as a char: " << c << std::endl;
		else
			std::cout << "[" << _str << "]" << " as a char: " << "Non displayable" << std::endl;
		return (c);
	}
	else
	{
		int	d = 0;
		try
		{
			d = stoi(_str);
		}
		catch (const std::invalid_argument& ia){
			std::cout << "[" << _str << "] as a char: ";
			ft_msg("Impossible: invalid argument");
			return (0);
		}
		catch (const std::out_of_range& oor) {
			std::cout << "[" << _str << "] as a char : ";
			ft_msg("Impossible: out of range");
			return (0);
		}
		if (d < CHAR_MIN || d > CHAR_MAX)
		{
			std::cout << "[" << _str << "] as a char : ";
			ft_msg("Impossible: out of range");
			return (0);
		}
		c = static_cast<char>(d);
		if (ft_is_printable_char(c))
			std::cout << "[" << _str << "]" << " as a char: " << c << std::endl;
		else
			std::cout << "[" << _str << "]" << " as a char: " << "Non displayable" << std::endl;
		return (c);
	}
}

// INT
Converter::operator int()
{
	int	d = 0;

	try
	{
		d = stoi(_str);
	}
	catch (const std::invalid_argument& ia){
		std::cout << "[" << _str << "] as an int: ";
		ft_msg("Impossible: invalid argument");
		return (0);
	}
	catch (const std::out_of_range& oor) {
		std::cout << "[" << _str << "] as an int : ";
		ft_msg("Impossible: out of int range");
		return (0);
	}
	std::cout << "[" << _str << "]" << " as an int: " << d << std::endl;
	return (d);
}

// FLOAT
Converter::operator float()
{
	float	f = 0;
	try
	{
		f = stof(_str);
		std::cout << "[" << _str << "] as a float: " << f << "f" << std::endl;
	}
	catch (const std::invalid_argument& ia){
		std::cout << "[" << _str << "] as a float: ";
		ft_msg("Impossible: invalid argument");
		return (f);
	}
	catch (const std::out_of_range& oor) {
		std::cout << "[" << _str << "] as a float: ";
		ft_msg("Impossible: out of float range");
		return (f);
	}
	return (f);
}

// DOUBLE
Converter::operator double()
{
	double	d = 0;
	try
	{
		d = stod(_str);
		std::cout << "[" << _str << "] as a double: " << d << std::endl;
	}
	catch (const std::invalid_argument& ia){
		std::cout << "[" << _str << "] as a double: ";
		ft_msg("Impossible: invalid argument");
		return (d);
	}
	catch (const std::out_of_range& oor) {
		std::cout << "[" << _str << "] as a double: ";
		ft_msg("Impossible: out of double range");
		return (d);
	}
	return (d); //to test
}