/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:05:30 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/22 08:58:51 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack< T, std::deque<T> >
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		
		iterator begin()
		{
			return (this->c.begin());
		}
		
		iterator end()
		{
			return (this->c.end());
		}
};