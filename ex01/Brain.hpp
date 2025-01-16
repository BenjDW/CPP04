/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 05:17:17 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/16 12:14:00 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implémentez une classe Brain (cerveau) contenant un tableau de 100 std::string
// appelé ideas (idées).

// Ainsi, les classes Dog et Cat auront un attribut privé Brain*.
// À la construction, les classes Dog et Cat créeront leur Brain avec new Brain();
// À la destruction, les classes Dog et Cat devront delete leur Brain.
// Dans votre fonction main, créez et remplissez un tableau d’objets Animal dont la
// moitié est composée d’objets Dog et l’autre moitié d’objets Cat. À la fin de l’exécution
// du programme, parcourez ce tableau afin de delete chaque Animal. Vous devez delete
// directement les chiens et les chats en tant qu’Animal. Les destructeurs correspondants
// doivent être appelés dans le bon ordre.

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
		// Brain(/* args */);
		Brain(const Brain &cpy);
		~Brain();
		Brain	&operator=(const Brain cpy);
		std::string	ideas[100];
	private:

};

Brain::Brain()
{
	for (int i = 0; i < 50; i++)
        ideas[i] = "Doggo";
	for (int i = 50; i < 100; i++)
		ideas[i] = "kitty";
}

Brain::~Brain()
{
}

#endif