/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:08:32 by psemsari          #+#    #+#             */
/*   Updated: 2021/11/10 00:03:02 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <iterator>
# include <algorithm>
# include <vector>
# include <math.h>
# include <functional>

class	Span
{
	private:
		unsigned int _N;
		std::vector<int> _data;
	public:
		Span(unsigned int N = 0);
		Span(Span const & src);
		Span & operator=(Span const & rhs);
		~Span();

		unsigned int 	get_N() const;
		void			set_N(unsigned int N);

		void			addNumber(int number);
		void			addNumber(int from, int to);

		int				shortestSpan() const;
		int				longestSpan() const;

	class NotEnoughtNumbers : public std::exception
	{
		public:
			virtual char const * what() const throw();
	};

	class MaxNumberException : public std::exception
	{
		public:
			virtual char const * what() const throw();
	};

	class FromSup : public std::exception
	{
		public:
			virtual char const * what() const throw();
	};

};

#endif
