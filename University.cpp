//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(const string &name, Professor *professor, Administrative *administrative,
                       const vector<Professor> &professorList, const vector<Administrative> &administrativeList) : name(
        name), professor(professor), administrative(administrative), professorList(professorList), administrativeList(
        administrativeList) {}

University::University(const string &name) : name(name) {}

University::University() {}

University::~University() {

}

const string &University::getName() const {
    return name;
}

void University::setName(const string &name) {
    University::name = name;
}

Professor *University::getProfessor() const {
    return professor;
}

void University::setProfessor(Professor *professor) {
    University::professor = professor;
}

Administrative *University::getAdministrative() const {
    return administrative;
}

void University::setAdministrative(Administrative *administrative) {
    University::administrative = administrative;
}

const vector<Professor> &University::getProfessorList() const {
    return professorList;
}

void University::addProfessor(const vector<Professor> &professorList) {
    University::professorList = professorList;
}

const vector<Administrative> &University::getAdministrativeList() const {
    return administrativeList;
}

void University::addAdministrative(const vector<Administrative> &administrativeList) {
    University::administrativeList = administrativeList;
}
