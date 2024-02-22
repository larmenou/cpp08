/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:55:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/22 12:54:43 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		/* 
			Rise exception: out of range
		 */
		Span sp = Span(5);
		
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(4);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		/* 
			Rise exception: length error
		 */
		Span sp = Span(5);
		
		try
		{
			sp.addNumber(6);
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		/* 
			No error : Subject test
		 */	
		std::cout << "\x1B[33mSubject test: expected output: 2 and 14\033[0m" << std::endl;
		Span sp = Span(5);
		
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "My Vector :";
			sp.printV();

			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		/* 
			Short example for show that everything is working correctly
		 */
		Span sp = Span(10);
		std::vector<int> v;
		
		try
		{
			v = addMultipleNumber(-30, 30, 10);

			sp.fillMyVector(v.begin(), v.end());
			
			std::cout << "My Vector :";
			sp.printV();

			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		/* 
			Bigger example for addMultipleNumber
		 */
		Span sp = Span(10000);
		std::vector<int> v;
		
		try
		{
			v = addMultipleNumber(-100000, 100000, 10000);

			sp.fillMyVector(v.begin(), v.end());

			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;

			
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	return (0);
}