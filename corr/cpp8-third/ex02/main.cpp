/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Clkuznie <clkuznie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:09:32 by Clkuznie          #+#    #+#             */
/*   Updated: 2021/11/15 18:24:19 by Clkuznie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    CLEAR_STDOUT
    START_INFO
    WAIT_INPUT

    {
        MutantStack<int> mstack;
        std::vector<int> witness;

        mstack.push(5);
        mstack.push(17);
        witness.push_back(5);
        witness.push_back(17);

        std::cout << mstack.top() << '\n';
        std::cout << witness.back() << '\n';

        mstack.pop();
        witness.erase(witness.end() - 1);

        std::cout << mstack.size() << '\n';
        std::cout << witness.size() << '\n';
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        
        witness.push_back(3);
        witness.push_back(5);
        witness.push_back(737);
        //[...]
        witness.push_back(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        std::vector<int>::iterator w_it = witness.begin();
        
        ++it;
        --it;
        ++w_it;
        --w_it;
        while (it != ite)
        {
            std::cout << *it << " | " << *w_it << '\n';
            ++it;
            ++w_it;
        }
        std::stack<int> s(mstack);
    }

    NEXT_TEST
    {
        MutantStack<int> mstack;
        std::vector<int> witness;

        for (size_t i = 0; i < 100; i++) {
            mstack.push(i);
            witness.push_back(i);
        }

        std::cout << mstack.size() << '\n';
        std::cout << witness.size() << '\n';

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        std::vector<int>::iterator w_it = witness.begin();
        std::vector<int>::iterator w_ite = witness.end();

        std::cout << ite - it << " | " << w_ite - w_it << '\n';
        std::cout << *(it + 7) << " | " << *(w_it + 7) << '\n';
        std::cout << *(ite - 25) << " | " << *(w_ite - 25) << '\n';
        std::cout << *it << " | " << *w_it << '\n';
    }

    return 0;
}
