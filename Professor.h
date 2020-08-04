//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {

  public:

  double monthlySalary;
  double commissionRate;

  private:

  Professor();
  Professor(double, double);
  virtual ~Professor();
  getMonthlySalary();
  setMonthlySalary(double);
  getCommissionRate();
  setCommissionRate(double);


};

#endif //LAB02_OOP_PROFESSOR_H
