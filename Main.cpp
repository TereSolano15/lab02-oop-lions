//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {

Person* p1 = new Professor("Mike", "Guzman", 123456789, 2000000.00, 0.05);

Person* p2 = new Professor("Pedro", "Sanchez", 1286608618, 1050000, 0.05);

Person* a1 = new Administrative("Marta","Rojas", 272923934, 800000.00);

Person* a2 = new Administrative("Andrea","Jaramillo", 272923933, 500000.00);



cout<<p1->toString()<<endl;
cout<<p2->toString()<<endl;
cout<<a1->toString()<<endl;
cout<<a2->toString()<<endl;

delete p1;
delete p2;
delete a1;
delete a2;

}

