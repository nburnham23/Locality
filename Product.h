//
// Created by Noah Burnham on 10/18/24.
//

#ifndef LOCALITY_PRODUCT_H
#define LOCALITY_PRODUCT_H


#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class Product{
private:
    string name;
    double price;
    string description;

public:
    // Default Constructor
    Product();
    // Constructor
    Product(string name, double price, string description);

    // Getters
    string getName();
    double getPrice();
    string getDescription();

    // Setters
    void setName(string name);
    void setPrice(double price);
    void setDescription(string Description);

    /**
     * the isExpensive method determines if a product is "expensive".
     * A product is considered expensive if the price is greater than 20
     * @return a boolean representing whether or not the Product is expensive.
     */
    bool isExpensive();

    // Overloaded operators
    friend ostream& operator << (ostream& outs, Product product){
        outs << "Product name: " << product.name << endl;
        outs << "Price: $" << product.price << endl;
        outs << "Description: " << product.description << endl;
        if(product.isExpensive()){
            outs << "Expensive!" << endl;
        }
    };
};


#endif //LOCALITY_PRODUCT_H
