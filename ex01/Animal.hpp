/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:26:44 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 05:44:37 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#endif