//
// Created by alexc on 12/3/2019.
//

#include "Person.h"

bool operator<(const Person& p1, const Person& p2)
{
    if(p1.lastName == p2.lastName)
        return (p1.firstName < p2.firstName) ? true : false;
    return (p1.lastName < p2.lastName) ? true : false;
}
// operator == for person class
bool operator==(const Person& p1, const Person& p2)
{
    return (p1.lastName == p2.lastName &&
            p1.firstName == p2.firstName ) ? true : false;
}
