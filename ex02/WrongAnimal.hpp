/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 04:30:37 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/18 08:45:00 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& cpy);
		virtual ~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal cpy);
		virtual std::string	getType() const;
		void	makeSound() const;
	protected:
		std::string	type;
};

#endif