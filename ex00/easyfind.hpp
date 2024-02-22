/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:58:12 by larmenou          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:05 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <stdexcept>

template <typename T>
int easyfind(T cont, int to_find)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), to_find);
	if (it == cont.end())
		throw (std::out_of_range("\033[1;31mError:\033[0m Iterator out of range"));
	return (*it);
}