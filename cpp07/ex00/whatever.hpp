/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:39:28 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/28 16:45:22 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T& a, T& b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T&	max(const T& a, const T& b)
{
	if (a >= b)
		return (a);
	else
		return (b); 
}

template<typename T>
const T&	min(const T& a, const T& b)
{
	if (a <= b)
		return (a);
	else
		return (b); 
}

#endif