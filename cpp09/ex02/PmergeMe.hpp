/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:32:48 by vnaslund          #+#    #+#             */
/*   Updated: 2024/02/03 19:01:55 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <ctime>
# include <vector>
# include <list>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& other);
        PmergeMe&    operator=(const PmergeMe& other);

		void	sortVector(int argc, char **argv);
		void	sortList(int argc, char **argv);

		class InvalidArgument: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif