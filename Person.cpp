
//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"


Person::Person() {

}

Person::Person(const string &firstName, const string &lastName, int documentld) : firstName(firstName),
                                                                                  lastName(lastName),
                                                                                  documentld(documentld) {}

Person::~Person() {

}

const string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const string &firstName) {
    Person::firstName = firstName;
}

const string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const string &lastName) {
    Person::lastName = lastName;
}

int Person::getDocumentld() const {
    return documentld;
}

void Person::setDocumentld(int documentld) {
    Person::documentld = documentld;
}

string Person::toString() {
    stringstream s;
    s << "The first name is: " << this->firstName << endl;
    s << "The last name is: " << this->lastName << endl;
    s << "The Doc ID is: " << this->documentld << endl;
    return s.str();
}



