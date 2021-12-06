/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:44:17 by jandre            #+#    #+#             */
/*   Updated: 2021/12/06 16:39:10 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "-----------TEST DOG CAT AS ANIMAL IF NO LEAK-----------" << std::endl << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();
   
    std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    std::cout << meta->get_type() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    k->makeSound();
    delete meta;
    delete j;
    delete i;
    delete k;
    
    std::cout << std::endl << "-----------TEST ARRAY AND DESTRUCT-----------" << std::endl << std::endl;
    int num_animals = 10;
	int index = 0;
	Animal *animals[num_animals];
	for ( ; index < num_animals / 2; index++)
    {   
        std::cout << index << " : ";
		animals[index] = new Dog;
    }
	for ( ; index < num_animals; index++)
    {
        std::cout << index << " : ";
		animals[index] = new Cat;
    }
	for (index = 0; index < num_animals; index++)
    {
        std::cout << index << " : ";
		delete animals[index];
    }

    std::cout << std::endl << "-----------TEST DEEP COPY-----------" << std::endl << std::endl;
    Dog *toutou1 = new Dog();
    Dog *toutou2 = new Dog();
    Cat *matou1 = new Cat();
    Cat *matou2 = new Cat();
    
    std::cout << "IDEA 1 TOUTOU1 : " << toutou1->get_idea(0) << std::endl;
    std::cout << "IDEA 1 TOUTOU2 : " << toutou2->get_idea(0) << std::endl;    
    *toutou2 = *toutou1;
    std::cout << "IDEA 1 AFTER COPY TOUTOU1 : " << toutou1->get_idea(0) << std::endl;
    std::cout << "IDEA 1 AFTER COPY TOUTOU2 : " << toutou2->get_idea(0) << std::endl;
    std::cout << "IDEA 1 MATOU1 : " << matou1->get_idea(0) << std::endl;
    std::cout << "IDEA 1 MATOU2 : " << matou2->get_idea(0) << std::endl;    
    *matou2 = *matou1;
    std::cout << "IDEA 1 AFTER COPY MATOU1 : " << matou1->get_idea(0) << std::endl;
    std::cout << "IDEA 1 AFTER COPY MATOU2 : " << matou2->get_idea(0) << std::endl;
    delete(toutou2);    
    delete(toutou1);
    delete(matou1);    
    delete(matou2);
    return (0);
}