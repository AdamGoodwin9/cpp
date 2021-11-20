/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:23:21 by psemsari          #+#    #+#             */
/*   Updated: 2021/11/09 23:53:46 by psemsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iterator>
# include <algorithm>
# include <exception>

class NoElementFind: public std::exception
{
	virtual char const *what() const throw()
	{
		return ("no element find");
	}
};

template<typename T>
int easyfind(const T &container, int to_search)
{
	typename T::const_iterator it;

	it = std::find(container.begin(), container.end(), to_search);
	if (it == container.end())
		throw NoElementFind();
	return (*it);
}

#endif
