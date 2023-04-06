#include <string>
#include <iostream>
#include <vector>
#include "animal.h"

const unsigned int CELL_COUNT = 32;

class AnimalShop
{
    public:
        AnimalShop(std::string& name);
        Animal* get();
        bool put(Animal*);
        Animal* operator[](int index);
        void operator<<(Animal* animal);
        bool operator==(AnimalShop* shop);
        Animal* getAnimal(int cageNum);
        int getTaken();
        void operator()();
    private:
        std::vector <Animal*> animals;
        std::string shopName;
};