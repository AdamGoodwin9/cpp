/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:05:22 by psemsari          #+#    #+#             */
/*   Updated: 2021/11/09 17:54:33 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	//my tests

	Span *span = new Span(0);

	try
	{
		span->addNumber(8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete span;

	span = new Span(5);
	span->addNumber(8);
	span->addNumber(500);
	span->addNumber(96);
	span->addNumber(600);
	span->addNumber(-4545);
	std::cout << "shortest: " << span->shortestSpan() << " longest: " << span->longestSpan() << std::endl;
	try
	{
		span->addNumber(8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete span;

	span = new Span(1);
	try
	{
		span->addNumber(-1, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "shortest: " << span->shortestSpan() << " longest: " << span->longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete span;
	return 0;
}
