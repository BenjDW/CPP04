/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:38:35 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/18 08:10:24 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat &cpy);
		~Cat();
		Cat	&operator=(const Cat &cpy);
		std::string	getBrainIdea(int index) const;
		void	makeSound() const;
	private:
		Brain*	tekno_sar;
};

// std::string Cat::getBrainIdea(int index) const
// {
//     if (tekno_sar && index < 100)
//         return (tekno_sar->ideas[index]);
//     return "Invalid index or Brain is not initialized";
// }

// void	Cat::makeSound() const
// {
// 	std::cout << "miaou miaou mia mia ou miaou" << std::endl;
// 	std::cout << "aka asoutaie pendant l'exam final" << std::endl;
// }

// Cat	&Cat::operator=(const Cat &cpy)
// {
// 	std::cout << "Copy assignment operator called" << std::endl;
// 	this->type = cpy.type;
// 	if (this->tekno_sar)
// 		delete(this->tekno_sar);
// 	// this->tekno_sar = cpy.tekno_sar;
// 	tekno_sar = new Brain();
// 	return (*this);
// }

// Cat::Cat(const Cat &cpy) : Animal("Cat")
// {
// 	std::cout << "copy CAT constructor called" << std::endl;
// 	this->tekno_sar = new Brain(*cpy.tekno_sar);
// }

// Cat::Cat(std::string name) : Animal(name)
// {
// 	this->tekno_sar = new Brain();
// }

// Cat::Cat() : Animal("Cat")
// {
// 	this->tekno_sar = new Brain();
// }

// Cat::~Cat()
// {
// 	delete(tekno_sar);
// }

#endif