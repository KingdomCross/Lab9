/*
 * Alex Chheng
 * CECS 282, Lab 9
 */
#include "Person.h"
#include "Person.cpp"
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    Person pers1("Deauville", "William");
    Person pers2("McDonald", "Stacey");
    Person pers3("Bartoski", "Peter");
    Person pers4("KuangThu", "Bruce");
    Person pers5("Wellington", "John");
    Person pers6("McDonald", "Amanda");
    Person pers7("Fredericks", "Roger");
    Person pers8("McDonald", "Stacey");
    // multiset of persons
    multiset< Person, less<Person> > persSet;
    // iterator to a multiset of persons
    multiset<Person, less<Person> >::iterator iter;
    return 0;
}