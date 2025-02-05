/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 04:33:40 by bde-wits          #+#    #+#             */
/*   Updated: 2025/02/05 08:36:13 by bde-wits         ###   ########.fr       */
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

#endif