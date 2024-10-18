//
// Created by Noah Burnham on 10/18/24.
//

#ifndef LOCALITY_STORE_H
#define LOCALITY_STORE_H


#include <string>
#include <iostream>
using namespace std;

class Store {
private:
    string name;
    string city;
    int zipcode;
public:
    Store();
    Store(string name, string city, int zipcode);

    // Getters
    string getName();
    string getCity();
    int getZipcode();

    // Setters
    void setName(string name);
    void setCity(string city);
    void setZipcode(int zipcode);

    /**
     * the createID method creates an ID for a store based off their name, city, and zipcode.
     * @return an string ID in the form of NameCityZipcode
     */
    string createID();

    friend ostream& operator << (ostream& outs, Store store){
        cout << store.getName() << endl;
        cout << store.getCity() << endl;
        cout << store.getZipcode() << endl;
        cout << store.createID() << endl;
    }

};


#endif //LOCALITY_STORE_H
