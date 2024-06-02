# include "classes.h"

#include <iostream>
#include <string>


class Person {
public:
    std::string name;
    int age;
};

void BasicClass::basicMain() {
    Person person1{
        "Antonio",
        19,
    };

    Person person2;
    person2.name = "Valeria";
    person2.age = 53;

    std::cout << "My name is " << person1.name << "and I have " << person1.age << " years old!" << std::endl;
    std::cout << "My name is " << person2.name << "and I have " << person2.age << " years old!" << std::endl;
}
