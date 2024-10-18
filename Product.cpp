//
// Created by Noah Burnham on 9/13/24.
//
#include <string>
#include <iostream>
#include <iomanip>
#include "Product.h"
using namespace std;

Product::Product() {
    name = "";
    price = 0;
    description = "";
}
Product::Product(string name, double price, string description) {
    this->name = name;
    this->price = price;
    this->description = description;
}

string Product::getName(){
    return name;
}

double Product::getPrice(){
    return price;
}

string Product::getDescription() {
    return description;
}

void Product::setName(string name){
    this->name = name;
}

void Product::setPrice(double price){
    this->price = price;
}

void Product::setDescription(string Description) {
    this->description = description;
}

bool Product::isExpensive() {
    if(price > 20){
        return true;
    }else{
        return false;
    }
}