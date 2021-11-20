/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Clkuznie <clkuznie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:50:35 by Clkuznie          #+#    #+#             */
/*   Updated: 2021/11/15 18:08:44 by Clkuznie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>
# include <vector>

template< typename T >
void
easyfind(
    T & container
    , int toFind)
{
    typename T::iterator foundInt;
    
    if ((foundInt = std::find(container.begin(), container.end(), toFind)) != container.end()) {
        std::cout << "Value first appear at index: " << foundInt - container.begin() << "\n";
    } else {
        std::cerr << "Value not found\n";
    }
}

#endif
