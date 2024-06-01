#include "test4.h"
#include "test4.cpp"
#include <string>
#include <iostream>

using namespace std;

int main(){ 
    Dog dog; 
    Cat cat;
    Cow cow;
    
    Animal* animals[] = {&dog, &cat, &cow};
 
    for(Animal* animal : animals) {
        animal->speak();
    }

    return 0;
}