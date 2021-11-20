/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:08:27 by psemsari          #+#    #+#             */
/*   Updated: 2021/11/10 00:04:26 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

Span::Span(unsigned int N)
{
	_N = N;
}

Span::Span(Span const & src)
{
	_data = src._data;
	_N = src._N;
}

Span & Span::operator=(Span const & rhs)
{
	if (&rhs != this)
	{
		_data = rhs._data;
		_N = rhs._N;
	}
	return (*this);
}

Span::~Span()
{
}

unsigned int Span::get_N() const
{
	return (_N);
}

void Span::set_N(unsigned int N)
{
	_N = N;
}

void Span::addNumber(int number)
{
	if (_data.size() == _N)
		throw MaxNumberException();
	_data.push_back(number);
}

void Span::addNumber(int from, int to)
{
	if (from > to)
		throw FromSup();
	for (; from <= to; from++)
	{
		if (_data.size() == _N)
			throw MaxNumberException();
		_data.push_back(from);
	}
}

int Span::shortestSpan() const
{
	if (_data.size() == 0)
		throw NotEnoughtNumbers();
	std::vector<int> tmp(this->_data);
	std::sort(tmp.begin(), tmp.end());
	int max = tmp[tmp.size() - 1] - tmp[0];
	for (size_t i = 0; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < max)
			max = tmp[i + 1] - tmp[i];
	}
	return (max);
}

int Span::longestSpan() const
{
	if (_data.size() == 0)
		throw NotEnoughtNumbers();
	std::vector<int> tmp(this->_data);
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

char const *Span::NotEnoughtNumbers::what() const throw()
{
	return ("not enought number in span class");
}

char const *Span::MaxNumberException::what() const throw()
{
	return ("already max number in span class");
}

char const *Span::FromSup::what() const throw()
{
	return ("first arg must be inferior to second arg");
}
