#include <string>
#include <iostream>

class Animal
{
    public:
        virtual void say() = 0;
        virtual void play() = 0;
        friend std::ostream& operator<< 
            (std::ostream& out, const Animal& animal);
        std::string getSpecies() const ;
        std::string getBreed() const ;
        std::string getName() const ;
        int getAge() const ;
        Animal* operator=(Animal& animal);

    protected:
        std::string breed;
        std::string voice;
        std::string name;
        std::string species;
        int age;
};

class Cat : public Animal
{
    public:
        void say() override;
        void play() override;
    private:

};