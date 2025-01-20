/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:39:31 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 06:39:19 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    // Animal animal; // ne dois pas fonctionne , class abstraite
	Cat cat;
	Dog dog;

	std::cout << "Cat type: " << cat.getType() << std::endl;
	std::cout << "Dog type: " << dog.getType() << std::endl;

	cat.makeSound();
	dog.makeSound();

	Animal* animal1 = new Cat();
	Animal* animal2 = new Dog();

	std::cout << "Animal 1 type: " << animal1->getType() << std::endl;
	std::cout << "Animal 2 type: " << animal2->getType() << std::endl;

    animal1->makeSound();
    animal2->makeSound();

	delete animal1;
	delete animal2;

	return 0;
}