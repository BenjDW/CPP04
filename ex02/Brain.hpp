/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 05:17:17 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 05:41:58 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(std::string name);
		Brain(const Brain &cpy);
		~Brain();
		Brain	&operator=(const Brain cpy);
		std::string	ideas[100];
	private:

};

#endif