
// Created by Maikol Guzman on 8/2/20.

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

//constructors

Professor::Professor(){

  this->monthlySalary = 0.0;
  this->commissionRate = 0.0;

}

Professor::Professor(double monthlySalary, double commissionRate){

  this->monthlySalary = monthlySalary;
  this->commissionRate = commissionRate;

}

Professor::Professor(string _firstName, string _lastName , int _documentld, double monthlySalary, double commissionRate){

  

}

//sets and gets

double Professor:: getMonthlySalary(){

  return monthlySalary;

}

void Professor::setMonthlySalary(double monthlySalary){

  this->monthlySalary = monthlySalary;

}

double Professor::getCommissionRate(){

  return commissionRate;

}

void Professor::setCommissionRate(double commissionRate){

  this->commissionRate = commissionRate;

}

//methods

double Professor::salary(){
return 0.0;
}

string Professor::toString(){

  stringstream s;

  s<< "\t" << Person::toString();
  s<<" \t monthly Salary: " << monthlySalary << endl;
  s<<" \t commission Rate: "<< commissionRate << endl;
  s<<" \t new salary whith commission rate: " << salary();

  return s.str();
}







