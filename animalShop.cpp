#include <vector>
#include "animal.h"
#include "animalShop.h"

Animal* AnimalShop::get()
{
    Animal *anm = new Animal;
    anm = animals.back();
    animals.pop_back();
}