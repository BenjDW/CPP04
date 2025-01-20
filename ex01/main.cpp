/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:39:31 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 05:42:44 by bde-wits         ###   ########.fr       */
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
    std::cout << "Creating original cat...\n";
    Dog originalCat;
    originalCat.getBrainIdea(0) = "Chase the laser pointer";
    originalCat.getBrainIdea(1) = "Climb the curtain";

    std::cout << "Original cat ideas:\n";
    std::cout << "Idea 1: " << originalCat.getBrainIdea(0) << std::endl;
    std::cout << "Idea 2: " << originalCat.getBrainIdea(1) << std::endl;

    std::cout << "\nCopying original cat into copiedCat...\n";
    Dog copiedCat = originalCat;

    std::cout << "Copied cat ideas:\n";
    std::cout << "Idea 1: " << copiedCat.getBrainIdea(0) << std::endl;
    std::cout << "Idea 2: " << copiedCat.getBrainIdea(1) << std::endl;

    copiedCat.getBrainIdea(0) = "Sleep on the sofa";
    copiedCat.getBrainIdea(1) = "Steal food from the table";

    std::cout << "\nModified copied cat ideas:\n";
    std::cout << "Idea 1: " << copiedCat.getBrainIdea(0) << std::endl;
    std::cout << "Idea 2: " << copiedCat.getBrainIdea(50) << std::endl;

    std::cout << "\nOriginal cat ideas remain unchanged:\n";
    std::cout << "Idea 1: " << originalCat.getBrainIdea(0) << std::endl;
    std::cout << "Idea 2: " << originalCat.getBrainIdea(99) << std::endl;

    std::cout << "\nTesting assignment operator...\n";
    Dog anotherCat;
    anotherCat = originalCat;

    std::cout << "Another cat ideas after assignment:\n";
    std::cout << "Idea 1: " << anotherCat.getBrainIdea(0) << std::endl;
    std::cout << "Idea 2: " << anotherCat.getBrainIdea(1) << std::endl;

    std::cout << "\nEnd of main. Destructors will be called...\n";
    return 0;
}