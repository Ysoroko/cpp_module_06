/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:26:17 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 11:30:51 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

static void ft_msg(std::string msg)
{
	std::cout << msg << std::endl;
}

Base::Base()
{
	ft_msg("A Data has been contructed by default");
}

Base::~Base()
{
	ft_msg("A Data has been destroyed");
}


Base::Base(Base const & ref)
{
	(void)ref;
	ft_msg("A Data has been contructed by copy");
}

Base & Base::operator=(Base const & ref)
{
	(void)ref;
	ft_msg("Assignement operator called");
	return (*this);
}