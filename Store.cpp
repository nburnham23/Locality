//
// Created by Noah Burnham on 9/15/24.
//
#include "Store.h"
#include <sstream>
using namespace std;

Store::Store() {
    name = "";
    city = "";
    zipcode = 0;
}

Store::Store(string name, string city, int zipcode) {
    this->name = name;
    this->city = city;
    this->zipcode = zipcode;
}

string Store::getName(){
    return name;
}

string Store::getCity(){
    return city;
}

int Store::getZipcode(){
    return zipcode;
}

void Store::setName(string name){
    this->name = name;
}

void Store::setCity(string city){
    this->city = city;
}

void Store::setZipcode(int zipcode){
    this->zipcode = zipcode;
}

string Store::createID() {
    stringstream ss;
    string returnVal;
    string stringZipCode = to_string(zipcode);
    ss << name;
    ss >> returnVal;
    ss << city;
    ss >> returnVal;
    ss << stringZipCode;
    ss >> returnVal;
    return returnVal;
}