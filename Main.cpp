//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {
Person* p1 = new Professor("Mike", "Guzman", 123456789, 2000000.00, 0.5);
cout << p1->toString();
    delete  p1;
}

