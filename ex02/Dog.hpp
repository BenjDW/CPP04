/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:30:57 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 05:39:00 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog &cpy);
		~Dog();
		Dog	&operator=(const Dog &cpy);
		std::string	getBrainIdea(int index) const;
		virtual void	makeSound() const;
	private:
		Brain*	tekno_sar;
};

#endif