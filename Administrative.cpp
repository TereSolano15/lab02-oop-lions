//
// Created by Maikol Guzman on 8/2/20.
//
#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative(){
monthlySalary = 0.0;
}
Administrative::Administrative(double _monthlySalary){
monthlySalary=_monthlySalary;
}
Administrative::Administrative(string _firstName, string _lastName, int _documentld, double _monthlySalary)
 {

}
double Administrative::getMonthlySalary(){
  return monthlySalary; 
}
void Administrative::setMonthlySalary(double _monthlySalary){
  monthlySalary = _monthlySalary;
}
double Administrative::salary(){

}
string Administrative::toString(){
stringstream s;
Person::toString();
s<<"Salario: "<< monthlySalary<<endl;
return s.str();
}