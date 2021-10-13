/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:44:27 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/13 17:11:13 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>

class Converter
{
	public:
		// Canonic class methods
		Converter();
		Converter(std::string str);
		~Converter();
		Converter(Converter const & ref);
		Converter &	operator=(Converter const & ref);

		// Getter
		std::string getStr( void ) const;

		// Conversions
		operator char();
		operator int();
		operator float();
		operator double();

	private:
		std::string	_str;

};
#endif