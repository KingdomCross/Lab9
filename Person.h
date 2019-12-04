//
// Created by alexc on 12/3/2019.
//

#ifndef LAB9_PERSON_H
#define LAB9_PERSON_H

// uses a multiset to hold person objects
#pragma warning (disable:4786)  // for set (Microsoft only)
#include <iostream>
#include <set>
#include <string>

using namespace std;

class Person {
private:
    string lastName;
    string firstName;
public:
    Person() : lastName("blank"),
               firstName("blank")
    {  }
    Person(string lname, string fname) : lastName(lname), firstName(fname){}
    friend bool operator<(const Person&, const Person&);
    friend bool operator==(const Person&, const Person&);

    void display() const   // display person's data
    {
        cout << endl << lastName << ",\t" << firstName;
    }
};


#endif //LAB9_PERSON_H
