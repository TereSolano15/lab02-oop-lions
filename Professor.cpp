//
// Created by Maikol Guzman on 8/2/20.
//
/*#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

//constructors

Professor::Professor(){

  this->monthlySalary = 0.0;
  this->commissionRate = 0.0;

}

Professor::Professor(string firstName, string lastName, int documentId, double monthlySalary, double commissionRate) : Person(firstName, lastName, documentId)
{

  this->monthlySalary = monthlySalary;
  this->commissionRate = commissionRate;

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

}

string Professor::toString(){

  stringstream s;

  s<< "\t" << Person::toString();
  s<<" \t monthly Salary: " << this->monthlySalary << endl;
  s<<" \t commission Rate: "<< this->commissionRate << endl;
  s<<" \t new salary whith commission rate: " << salary();

  return s.str();
}


*/




