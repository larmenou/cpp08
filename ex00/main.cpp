/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:16:03 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/22 12:40:48 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	srand((unsigned int)time(NULL));
	{	
		int to_find = 50;
		std::vector<int> v(100, 0);

		for (unsigned int i = 0; i < v.size(); i++)
		{
			v[i] = 1 + (rand() % v.size());
		}
		
		try
		{
			std::cout << "vector: " << easyfind(v, to_find) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << ": number not found" << std::endl;
		}
		
	}

	{	
		int to_find = 50;
		std::list<int> l;

		for (unsigned int i = 0; i < 100; i++)
		{
			l.push_back(1 + (rand() % 100));
		}

		try
		{
			std::cout << "list: " << easyfind(l, to_find) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << ": number not found" << std::endl;
		}
	}

	return (0);
}