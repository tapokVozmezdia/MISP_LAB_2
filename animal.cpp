#include <iostream>
#include "animalShop.h"

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

void Cat::say()
{
    std::cout << voice << "!" << std::endl;
}
void Cat::play()
{
    std::cout << "It's playtime for " << name << std::endl;
}