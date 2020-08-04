
//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person(){
 this->firstName="Sin definir";
 this->lastName="Sin definir";
 this->documentld=0;
}

Person::Person(string firstName, string lastName, int documentld){
  this->firstName=firstName;
  this->lastName=lastName;
  this->documentld=documentld;
}

Person::~Person(){}

void Person::setFirstName(string firstName){
  this->firstName = firstName;
}

string Person::getFisrtNme(){
  return this->firstName;
}

void Person::setLastName(string lastName){
  this->lastName = lastName;
}

string Person::getLastName(){
  return this->lastName;
}

void Person::setDocumentld(int documentld){
  this->documentld = documentld;
}

int Person::getDocumentld(){
  return this->documentld;
}

string Person::toString(){
  stringstream s;
  s << "The first name is: " << this->firstName;
  s << "The last name is: " << this->lastName;
  s << "The document is: " << this->documentld;
}