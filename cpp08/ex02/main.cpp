/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:45:35 by vnaslund          #+#    #+#             */
/*   Updated: 2024/02/04 18:41:37 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop(); // Removes the top element (17)

    std::cout << "Stack size after pop: " << mstack.size() << std::endl; // Should print 1
	std::cout << "Top element after pop: " << mstack.top() << std::endl;
	
    // Adding more elements
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Iterating over the stack elements using the iterators
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator end = mstack.end();
    std::cout << "Stack elements: ";
    while (it != end)
	{
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

	while (!mstack.empty()) 
		mstack.pop();
    std::cout << "Stack size after clearing: " << mstack.size() << std::endl;

    // Testing swapping stacks
    MutantStack<int> anotherStack;
    anotherStack.push(100);
    anotherStack.push(200);
    mstack.swap(anotherStack);
	
	it = mstack.begin();
    end = mstack.end();
    std::cout << "Swapped stack elements: ";
    while (it != end)
	{
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    return (0);
}
