/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:38:35 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/15 00:32:59 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"

class Cat : Animal
{
	public:
		Cat();
		Cat(std::string name);
		Cat(const Animal &cpy);
		~Cat();
		Cat	&operator=(const Cat &cpy);
		void	makeSound();
	private:
};

void	Cat::makeSound()
{
	std::cout << "miaou miaou mia mia ou miaou" << std::endl;
	std::cout << "aka asoutaie pendant l'exam final" << std::endl;
}

Cat::Cat() : Animal("Cat")
{
	// this->type = "Cat";
}

Cat::~Cat()
{
}

#endif