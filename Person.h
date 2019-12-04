//
// Created by alexc on 12/3/2019.
//

#ifndef LAB9_PERSON_H
#define LAB9_PERSON_H

#include <iostream>
#include <set>

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
