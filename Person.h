//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
#include <iostream>
#include <sstream>
using namespace std;

/**
 * Abstract Class of Person
 */
class Person {
private:
  string firstName;
  string lastName;
  int documentld;

public:
  Person();
  Person(string firstName, string lastName, int documentld);
  ~Person();
  void setFirstName(string firstName);
  string getFisrtNme();
  void setLastName(string lastName);
  string getLastName();
  void setDocumentld(int documentld);
  int getDocumentld();
  virtual double salary() = 0;
  virtual string toString();
};


#endif //LAB02_OOP_PERSON_H
