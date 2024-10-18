//
// Created by Noah Burnham on 9/13/24.
//
#include "Farmer.h"
#include <string>
#include <iostream>
using namespace std;

Farmer::Farmer(string name, string city, int zipCode, Product product) {
    this->name = name;
    this->city = city;
    this->zipCode = zipCode;
    this->product = product;
}

string Farmer::getName() {
    return name;
}

string Farmer::getCity(){
    return city;
}

int Farmer::getZipCode() {
    return zipCode;
}

Product Farmer::getProduct(){
    return product;
}

void Farmer::setName(string name){
    this->name = name;
}

void Farmer::setCity(string city){
    this->city = city;
}

void Farmer::setZipCode(int zipCode){
    this->zipCode = zipCode;
}

void Farmer::setProduct(Product product){
    this->product = product;
}

bool Farmer::inVermont() {
    string stringZipCode = to_string(zipCode);
    if(stringZipCode[0] == 0 && stringZipCode[1] == 5){
        cout << "This is a local farmer!" << endl;
        return true;
    }else{
        return false;
    }
}