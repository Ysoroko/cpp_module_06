/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:40:59 by ysoroko           #+#    #+#             */
/*   Updated: 2021/10/14 11:08:37 by ysoroko          ###   ########.fr       */
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
	Data	data1("my data");

	// serialize
	uintptr_t	test = serialize(&data1);

	// deserialize
	Data	*data2 = deserialize(test);
	std::cout << std::endl << std::endl;

	// Result should be the same!
	// (Serialization/deserialization keep the same value inside data and same address)

	std::cout << "ADRESSES COMPARED:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Data1 address: "<< &data1 << std::endl;
	std::cout << "Data2 address: "<< data2 << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "VALUES INSIDE DATA COMPARED:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Data1 value: " << data1.getValue() << std::endl;
	std::cout << "Data2 value: " << (*data2).getValue() << std::endl;
	std::cout << std::endl << std::endl;

	return (0);
}