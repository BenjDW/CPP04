/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:30:57 by bde-wits          #+#    #+#             */
/*   Updated: 2025/02/05 08:37:00 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string name);
		Dog(const Animal &cpy);
		~Dog();
		Dog	&operator=(const Dog cpy);
		virtual void	makeSound() const;
	private:
};

#endif