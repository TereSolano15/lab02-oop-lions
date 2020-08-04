//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
private:
  double monthySalary;
public:
  Administrative();
  Administrative(double _monthlySalary);
  Administrative(const firstName, string lastName, int documentld, double _monthlySalary);
  double getMonthlySalary();
  void setMonthlySalary();
  

};


#endif //LAB02_OOP_ADMINISTRATIVE_H
