/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 08:45:49 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/22 13:05:39 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
	{	
		std::cout << "\033[33mMutantStack:\033[0m" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		
		std::cout << "top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "size: " << mstack.size() << std::endl;
		
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}

	std::cout << std::endl;

	{	
		std::cout << "\033[33mList:\033[0m" << std::endl;
		std::list<int> l;

		l.push_back(5);
		l.push_back(17);
		
		std::cout << "top: " << l.back() << std::endl;

		l.pop_back();

		std::cout << "size: " << l.size() << std::endl;
		
		l.push_back(3);
		l.push_back(5);
		l.push_back(737);
		//[...]
		l.push_back(0);
		
		std::list<int>::iterator it = l.begin();
		std::list<int>::iterator ite = l.end();
		
		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::list<int> s(l);
	}

	std::cout << std::endl;

	{	
		std::cout << "\033[33mVector:\033[0m" << std::endl;
		std::vector<int> v;

		v.push_back(5);
		v.push_back(17);
		
		std::cout << "top: " << v.back() << std::endl;

		v.pop_back();

		std::cout << "size: " << v.size() << std::endl;
		
		v.push_back(3);
		v.push_back(5);
		v.push_back(737);
		//[...]
		v.push_back(0);
		
		std::vector<int>::iterator it = v.begin();
		std::vector<int>::iterator ite = v.end();
		
		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::vector<int> s(v);
	}
	
	
	return 0;
}