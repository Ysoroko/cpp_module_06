/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:48:05 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 10:51:04 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	public:
		Data();
		~Data();
		Data(std::string value);
		Data(Data const & ref);
		Data & operator=(Data const & ref);

		std::string getValue( void ) const;
	private:
		std::string _value;
};

#endif