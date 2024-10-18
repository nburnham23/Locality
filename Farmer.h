//
// Created by Noah Burnham on 9/13/24.
//

#ifndef LOCALITY_FARMER_H
#define LOCALITY_FARMER_H
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <iostream>
#include "Product.h"
using namespace std;

class Farmer{
private:
    string name;
    string city;
    int zipCode;
    Product product;
public:
    Farmer(string name, string city, int zipCode, Product product);

    // Getters
    string getName();
    string getCity();
    int getZipCode();
    Product getProduct();

    // Setters
    void setName(string name);
    void setCity(string city);
    void setZipCode(int zipCode);
    void setProduct(Product product);

    /**
     * The inVermont method determines if a Farmer is located in Vermont, based off their zipcode.
     * It checks the first two digits to see if they are 0 and 5. If yes, the Farmer is in Vermont.
     * @return a boolean representing if the Farmer is in Vermont.
     */
    bool inVermont();

    // Overloaded operators
    friend ostream& operator << (ostream& outs, Farmer farmer){
        outs << "Farmer's name: " << farmer.name << endl;
        outs << "City: " << farmer.city << endl;
        outs << "Zipcode: " << farmer. zipCode << endl;
        outs << "Product: " << farmer.product << endl;
        outs << "Farmer in VT? " << farmer.inVermont() << endl;
    }

};
#endif //LOCALITY_FARMER_H