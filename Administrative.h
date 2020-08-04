//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
private:
  double monthlySalary;
public:
  Administrative();
  Administrative(double _monthlySalary);
  Administrative(string _firstName, string _lastName, int _documentld, double _monthlySalary);
  double getMonthlySalary();
  void setMonthlySalary(double _monthlySalary);
  double salary();
  string toString();
};


#endif //LAB02_OOP_ADMINISTRATIVE_H
