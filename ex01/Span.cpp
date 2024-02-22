/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:16:54 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:57 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N)
{
	_N = N;
}

Span::Span(Span const & copy)
{
	*this = copy;
}

Span & Span::operator=(Span const & copy)
{
	*this = copy;
	return (*this);
}

Span::~Span()
{}

void Span::addNumber(int number)
{
	if (_v.size() < _N)
	{
		_v.push_back(number);
	}
	else
		throw (std::out_of_range("\033[1;31mError:\033[0m Index out of range"));
}

int Span::shortestSpan()
{
	int shortest;

	if (_v.size() < 2)
	{
		throw (std::length_error("\033[1;31mError:\033[0m Vector too small"));
	}
	
	shortest = std::abs(_v[0] - _v[1]);

	for (unsigned int i = 0; i < _v.size() - 1; i++)
	{
		for (unsigned int j = i + 1; j < _v.size(); j++)
		{
			if (std::abs(_v[i] - _v[j]) < shortest)
				shortest = std::abs(_v[i] - _v[j]);
		}
	}
	return (shortest);
}

int Span::longestSpan()
{
	int longest;

	if (_v.size() < 2)
	{
		throw (std::length_error("\033[1;31mError:\033[0m Vector too small"));
	}
	
	longest = std::abs(_v[0] - _v[1]);

	for (unsigned int i = 0; i < _v.size() - 1; i++)
	{
		for (unsigned int j = i + 1; j < _v.size(); j++)
		{
			if (std::abs(_v[i] - _v[j]) > longest)
				longest = std::abs(_v[i] - _v[j]);
		}
	}
	return (longest);
}

void Span::fillMyVector(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator it;
	for (it = begin; it != end; it++)
		addNumber(*it);
}

void Span::printV()
{
	std::vector<int>::iterator it;

	for (it = _v.begin(); it != _v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

std::vector<int> addMultipleNumber(int min, int max, unsigned int count)
{
	std::vector<int> v;

	srand((unsigned int)time(NULL));
	
	for (int i = min; i <= max; ++i)
		v.push_back(i);

	std::random_shuffle(v.begin(), v.end());

	v.resize(count);
	return (v);
}

