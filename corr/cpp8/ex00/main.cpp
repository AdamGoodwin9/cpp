/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:23:26 by psemsari          #+#    #+#             */
/*   Updated: 2021/11/09 23:56:57 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main()
{
	std::list<int> type_list;
	type_list.push_back(40);
	type_list.push_back(88);
	type_list.push_back(50);
	type_list.push_back(20);
	try {
		std::cout << easyfind(type_list, 88) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << easyfind(type_list, 1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::vector<int> type_vector;
	type_vector.push_back(40);
	type_vector.push_back(88);
	type_vector.push_back(50);
	type_vector.push_back(20);
	try {
		std::cout << easyfind(type_vector, 88) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << easyfind(type_vector, 1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
