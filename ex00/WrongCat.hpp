/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 04:33:40 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/18 08:18:58 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define	WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string name);
		WrongCat(const WrongAnimal &cpy);
		~WrongCat();
		WrongCat	&operator=(const WrongCat cpy);
		void	makeSound() const;
	private:
};

// WrongCat&	WrongCat::operator=(const WrongCat cpy)
// {
// 	std::cout << "Copy assignment operator called" << std::endl;
// 	this->type = cpy.type;
// 	return (*this);
// }

// WrongCat::WrongCat(const WrongAnimal &cpy)
// {
// 	std::cout << "copy constructor called" << std::endl;
// 	*this = cpy;
// }

// void	WrongCat::makeSound() const
// {
// 	std::cout << "Wrong meow meow meow" << std::endl;
// 	std::cout << "aka asoutaie pendant l'exam final" << std::endl;
// }

// WrongCat::WrongCat(std::string name) : WrongAnimal (name)
// {
// }

// WrongCat::WrongCat() : WrongAnimal("WrongCat")
// {
// 	// this->type = "WrongCat";
// }

// WrongCat::~WrongCat()
// {
// }

#endif