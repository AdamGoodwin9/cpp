/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:03:00 by psemsari          #+#    #+#             */
/*   Updated: 2021/11/09 23:26:41 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	private:
	public:
		MutantStack(void): std::stack<T>() {}
		MutantStack(const MutantStack& src): std::stack<T>(src) {}
		MutantStack &operator=(const MutantStack& rhs)
		{
			if ( this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}
		virtual	~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator	iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin(void) { return this->c.begin(); };
		iterator	end(void) { return this->c.end(); };
		const_iterator	begin(void) const { return this->c.begin(); };
		const_iterator	end(void) const { return this->c.end(); };
};

#endif
