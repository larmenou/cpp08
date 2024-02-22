/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:16:52 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/22 12:11:58 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <stdexcept>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _v;

	public:
		Span();
		Span(Span const & copy);
		Span & operator=(Span const & copy);
		Span(unsigned int N);
		~Span();

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void fillMyVector(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		void printV();
};

std::vector<int> addMultipleNumber(int min, int max, unsigned int count);