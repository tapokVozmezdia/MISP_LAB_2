#include <vector>
#include "animalShop.h"
#include <iostream>

AnimalShop::AnimalShop(std::string& name)
{
    this->shopName = name;
}

Animal* AnimalShop::get()
{
    Animal* nAn = animals.back();
    animals.pop_back();
    return nAn;
}
bool AnimalShop::put(Animal* animal)
{
    if (animals.size() >= CELL_COUNT)
    {
        std::cout << "There is no more free cells in the shop, sorry!" << std::endl;
        return false;
    }
    else
    {
        animals.push_back(animal);
        return true;
    }
    return false;
}

Animal* AnimalShop::operator[](int index)
{
    return animals[index];
}

void AnimalShop::operator<<(Animal* animal)
{
    if (animals.size() >= CELL_COUNT)
    {
        std::cout << "There is no more free cells in the shop, sorry!" << std::endl;
        return;
    }
    animals.push_back(animal);
}

int AnimalShop::getTaken()
{
    return animals.size();
}

Animal* AnimalShop::getAnimal(int cageNum)
{
    return animals[cageNum];
}

bool AnimalShop::operator==(AnimalShop* shop)
{
    if (animals.size() != shop->getTaken())
    {
        return false;
    }
    for (int i = 0; i < animals.size(); ++i)
    {
        if (this->getAnimal(i)->getAge() != shop->getAnimal(i)->getAge() ||
            this->getAnimal(i)->getSpecies() != shop->getAnimal(i)->getSpecies() ||
            this->getAnimal(i)->getBreed() != shop->getAnimal(i)->getBreed() ||
            this->getAnimal(i)->getName() != shop->getAnimal(i)->getName())
        {
            return false;
        }
    }
    return true;
}

void AnimalShop::operator()()
{
    std::cout << "Shop name: " << shopName;
    for (int i = 0; i < animals.size(); ++i)
    {
        std::cout << animals[i];
    }
    std::cout <<"Free cells: " << CELL_COUNT - animals.size() << std::endl;
}