#include <string>
#include <iostream>
#include <vector>
#include "animal.h"

class AnimalShop
{
    public:
        Animal* get();
    private:
        std::vector <Animal*> animals;

};