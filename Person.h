//
// Created by alexc on 12/3/2019.
//

#ifndef LAB9_PERSON_H
#define LAB9_PERSON_H

// uses a multiset to hold person objects
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

    void display() const   // display person's data
    {
        cout << endl << lastName << ",\t" << firstName;
    }

    void compareOperation(string s1, string s2);
};


#endif //LAB9_PERSON_H
