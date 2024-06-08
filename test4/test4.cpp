#include "test4.h"
#include <iostream>

Dog::Dog()
{    
}

void Dog::speak()
{
    std::cout << "woof" << std::endl;

}

Cat::Cat()
{
}

void Cat::speak()
{
    std::cout << "meow" << std::endl;
}

Cow::Cow()
{
}

void Cow::speak()
{
    std::cout << "moo" << std::endl;
}

void Animal::speak()
{
    std::cout << "speaking" << std::endl;
}