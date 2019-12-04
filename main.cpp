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

    persSet.insert(pers1);    // put persons in multiset
    persSet.insert(pers2);
    persSet.insert(pers3);
    persSet.insert(pers4);
    persSet.insert(pers5);
    persSet.insert(pers6);
    persSet.insert(pers7);
    persSet.insert(pers8);

    cout << "\nNumber of entries = " << persSet.size();

    iter = persSet.begin();   // display contents of multiset
    while( iter != persSet.end() )
        (*iter++).display();
    // get last and first name
    string searchLastName, searchFirstName;
    cout << "\n\nEnter last name of person to search for: ";
    cin >> searchLastName;
    cout << "Enter first name: ";
    cin >> searchFirstName;
    // create person with this name
    Person searchPerson(searchLastName, searchFirstName);

    // get count of such persons
    int cntPersons = persSet.count(searchPerson);
    cout << "Number of persons with this name = " << cntPersons;

    // display all matches
    iter = persSet.lower_bound(searchPerson);
    while( iter != persSet.upper_bound(searchPerson) )
        (*iter++).display();
    cout << endl;

    return 0;
}