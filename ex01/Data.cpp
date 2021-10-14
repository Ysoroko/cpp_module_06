/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:51:13 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 11:02:42 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

static void ft_msg(std::string msg)
{
	std::cout << msg << std::endl;
}

Data::Data()
{
	this->_value = "Default";
	ft_msg("A Data has been contructed by default");
}

Data::~Data()
{
	ft_msg("A Data has been destroyed");
}

Data::Data(std::string value) : _value(value)
{
	ft_msg("A Data has been contructed");
}

Data::Data(Data const & ref) : _value(ref.getValue())
{
	ft_msg("A Data has been contructed by copy");
}

Data & Data::operator=(Data const & ref)
{
	this->_value = ref.getValue();
	ft_msg("Assignement operator called");
	return (*this);
}

std::string Data::getValue( void ) const
{
	return (_value);
}