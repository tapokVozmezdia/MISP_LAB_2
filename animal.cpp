#include <iostream>
#include "animalShop.h"

Cat::Cat(std::string breed)
{
    voice = "meow";
    species = "cat";
    this->breed = breed;
}

Dog::Dog(std::string breed)
{
    voice = "woof";
    species = "dog";
    this->breed = breed;
}

std::string Animal::getSpecies() const 
{
    return species;
}

std::string Animal::getBreed() const 
{
    return breed;
}

std::string Animal::getName() const 
{
    return name;
}

int Animal::getAge() const 
{
    return age;
}

std::ostream& operator<< (std::ostream& out, const Animal& animal)
{
    out << "Name: " << animal.getName() << "\nSpecies: " << animal.getSpecies() << 
    "\nBreed: " << animal.getBreed() << "\nAge: " << animal.getAge();
    return out;
}

Animal* Animal::operator=(Animal& animal)
{
    this -> name = animal.getName();
    this -> species = animal.getSpecies();
    this -> breed = animal.getBreed();
    this -> age = animal.getAge();
    return this;
}

void Cat::say()
{
    std::cout << voice << "!" << std::endl;
}
void Cat::play()
{
    std::cout << "It's playtime for " << name << std::endl;
}

void Dog::say()
{
    std::cout << voice << "!" << std::endl;
}
void Dog::play()
{
    std::cout << "It's playtime for " << name << std::endl;
}