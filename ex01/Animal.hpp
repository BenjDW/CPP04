/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:26:44 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/18 03:31:47 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Pour chaque exercice, veuillez fournir les tests les plus complets possible.
// Les constructeurs et les destructeurs de chaque classe doivent afficher des messages qui
// leur sont propres. N’utilisez pas le même message pour toutes les classes.

// Commencez par implémenter une classe simple de base Animal. Elle possède un attribut protégé :
// • std::string type;
// Implémentez une classe Dog (chien) qui hérite de Animal.
// Implémentez une classe Cat (chat) qui hérite de Animal.

// Ces deux classes dérivées doivent initialiser leur type en fonction de leur nom. Ainsi,
// le type de Dog sera “Dog”, et celui de Cat sera “Cat”. Le type de la classe Animal peut
// être laissé vide ou initialisé avec la valeur de votre choix.
// Chaque animal doit être capable d’utiliser la fonction membre :
// makeSound()
// Elle affichera un son cohérent (les chats n’aboient pas).

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& cpy);
		virtual ~Animal();
		Animal	&operator=(const Animal cpy);
		virtual std::string	getType() const;
		virtual void	makeSound() const;
	protected:
		std::string	type;
};

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "bzz bzz bzzzz bzzzz bzz bzz bzzzz bzzzz bzzz bzz bzzz bzzzz" << std::endl;
}

Animal::Animal()
{
	this->type = "petit scarabé";
}

Animal::Animal(std::string typ)
{
	this->type = typ;
}

Animal&	Animal::operator=(const Animal cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "copy ANIMAL constructor called" << std::endl;
	this->type = cpy.type;
}

Animal::~Animal()
{
}

#endif