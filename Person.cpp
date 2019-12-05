//
// Created by alexc on 12/3/2019.
//

#include "Person.h"

void compareOperation(string s1, string s2) {
    // returns a value < 0 (s1 is smaller then s2)
    if ((s1.compare(s2)) < 0)
        cout << s1 << " is smaller than " << s2 << endl;

    // returns 0(s1, is being comapared to itself)
    if ((s1.compare(s1)) == 0)
        cout << s1 << " is equal to " << s1 << endl;
    else
        cout << "Strings didn't match ";
}