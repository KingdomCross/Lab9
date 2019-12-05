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
    multiset<Person, less<> > persSet;
    // iterator to a multiset of persons
    multiset<Person, less<> >::iterator iter;

    persSet.insert(pers1);    // put persons in multiset
    persSet.insert(pers2);
    persSet.insert(pers3);
    persSet.insert(pers4);
    persSet.insert(pers5);
    persSet.insert(pers6);
    persSet.insert(pers7);
    persSet.insert(pers8);

    cout << "\nNumber of entries = " << persSet.size();

    return 0;
}