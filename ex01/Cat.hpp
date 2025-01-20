/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:38:35 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 05:41:27 by bde-wits         ###   ########.fr       */
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

#endif