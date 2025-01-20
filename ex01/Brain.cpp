/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 08:11:04 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 05:44:06 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 50; i++)
        ideas[i] = "Doggo";
	for (int i = 50; i < 100; i++)
		ideas[i] = "kitty";
}

Brain::Brain(std::string name)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = name;
}

Brain::Brain(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = cpy.ideas[i];
}

Brain& Brain::operator=(const Brain cpy)
{
    if (this != &cpy)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = cpy.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
	std::cout << "destroy brain class" << std::endl;
}