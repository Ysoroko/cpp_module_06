/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:40:59 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 11:04:55 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdint.h> // for uintptr_t
#include "Data.hpp"

/*
**	uintptr_t:
**	"An unsigned integer type with the property that any valid pointer to void
**	can be converted to this type, then converted back to pointer to void,
**	and the result will compare equal to the original pointer"
*/

// Data to uintptr_t
static uintptr_t serialize(Data* ptr)
{
	return	(reinterpret_cast<uintptr_t>(ptr));
}

// Uintptr_t to data
static Data* deserialize(uintptr_t raw)
{
	return	(reinterpret_cast<Data *>(raw));
}

int	main( void )
{
	Data	data("my data");

	// serialize
	uintptr_t	test = serialize(&data);

	// deserialize
	Data	*data2 = deserialize(test);

	// Result should be the same!
	// (Serialization/deserialization keep the same value inside data)
	std::cout << "Data1 value: " << data.getValue() << std::endl;
	std::cout << "Data2 value: " << (*data2).getValue() << std::endl;

	return (0);
}