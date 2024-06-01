#ifndef HEADER_H
#define HEADER_H

class Animal {
public:
    Animal();
    virtual void speak();
    
};

class Dog : public Animal{
public:
    Dog();
    void speak() override;

};

class Cat : public Animal{
public:
    Cat();
   void speak() override;
};

class Cow : public Animal{
public:
    Cow();
    void speak() override;
};
#endif 