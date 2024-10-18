//
// Created by Noah Burnham on 9/15/24.
//
#include "Farmer.h"
#include "Product.h"
#include "Store.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int getMenuChoiceFromUser();
int getZipCodeFromUser();
string getSentenceFromUser();
double getPriceFromUser();

int main(){
    int userChoice = 0;
    vector<Store> storeFeed;
    vector<Farmer> farmerFeed;
    bool running = true;
    for(int i = 0; i < 100; ++i) {
        cout << "**************************************Welcome to Locality!**************************************" << endl;
        cout << "What are you looking to do today? " << endl;
        cout << "1: I am a store looking to buy food." << endl;
        cout << "2: I am a farmer looking to sell my harvest." << endl;
        cout << "3: I am looking to browse buyers and sellers." << endl;
        cout << "4: I am looking for more information about Locality." << endl;
        cout << "5: Exit." << endl;

        // make sure choice is integer 1-5
        userChoice = getMenuChoiceFromUser();

        if (userChoice == 1) {
            string name;
            string city;
            int zipcode;
            cout << "Enter your store information: " << endl;
            cout << "1. Name: " << endl;
            name = getSentenceFromUser();
            cout << "2. City: " << endl;
            city = getSentenceFromUser();
            cout << "3. Zip Code: " << endl;
            zipcode = getZipCodeFromUser();
            Store newStore(name, city, zipcode);
            storeFeed.push_back(newStore);
            cout << "Here is your store information: " << endl;
            cout << newStore;
        }
        if (userChoice == 2) {
            string name;
            string city;
            int zipcode;
            Product product;
            string productName;
            double productPrice;
            string productDescription;
            cout << "Enter your farm information: " << endl;
            cout << "1. Name: " << endl;
            name = getSentenceFromUser();
            cout << "2. City: " << endl;
            city = getSentenceFromUser();
            cout << "3. Zip Code: ";
            zipcode = getZipCodeFromUser();
            cout << "4. Product name: " << endl;
            productName = getSentenceFromUser();
            cout << "5. Product price: " << endl;
            productPrice = getPriceFromUser();
            cout << "6. Product description: " << endl;
            productDescription = getSentenceFromUser();
            Product newProduct(productName, productPrice, productDescription);
            Farmer newFarmer(name, city, zipcode, newProduct);
            cout << "Here is your farm information: " << endl;
            cout << newFarmer;
            farmerFeed.push_back(newFarmer);
        }
        if (userChoice == 3) {
            cout << "Here are all of the posts today!" << endl;
            for (int i = 0; i < storeFeed.size(); ++i) {
                cout << storeFeed[i] << endl;
            }
            for (int j = 0; j < farmerFeed.size(); ++j) {
                cout << farmerFeed[j] << endl;
            }
        }
        if (userChoice == 4) {
            cout
                    << "Locality is a place for farmers and stores to streamline the buying process. Say, for example, you are a blueberry farmer."
                    << endl;
            cout
                    << "This year, you had a bountiful harvest, and people are coming for pick-your-own blueberries. But your harvest was "
                    << endl;
            cout
                    << "so bountiful that you have a surplus, even with pick-your-own blueberry sales at an all-time high for your business. "
                    << endl;
            cout << "First of all, congrats!" << endl;
            cout
                    << "Second, welcome to Locality. You can easily make a post about your blueberries and the stores that are a part of the Locality network"
                    << endl;
            cout << "can reach out to you to buy blueberries. " << endl;
            cout << "If you are a store looking for locally sourced produce, Locality is the place to be." << endl;
            cout
                    << "Locality makes it easy for stores to source local, quality goods, and makes it easier for small farms to sell their harvest."
                    << endl;
            cout << "Thank you for choosing Locality!" << endl;
        }
        if (userChoice == 5) {
            cout << "Bye bye! Thanks for choosing Locality!" << endl;
            break;
        }
    }
    return 0;
};

int getMenuChoiceFromUser() {
    string userInputString;
    int userInputInt;
    bool badInput;
    stringstream ss;
    int dashCounter;
    string errorType;

    do{
        badInput = false;
        dashCounter = 0;
        if(errorType == "NO INPUT"){
            cout << "No input. Enter your choice 1-5: ";
        }
        else if (errorType == "INVALID INPUT"){
            cout << "Invalid Input. Enter your choice 1-5: ";
        }
        else{
            cout << "Enter your choice 1-5: ";
        }
        getline(cin, userInputString);
        // go through the string and make sure the only characters in the input are 0-9 or -
        for(int i = 0; i < userInputString.length(); ++i){
            if(!((userInputString[i]== '1') || (userInputString[i]== '2') ||
                 (userInputString[i]== '3') || (userInputString[i]== '4') || (userInputString[i]== '5'))){
                badInput = true;
                errorType = "INVALID INPUT";
            }
        }
        if(userInputString.length() > 1){
            badInput = true;
            errorType = "INVALID INPUT";
        }
        if(userInputString.empty()){
            badInput = true;
            errorType = "NO INPUT";
        }
    }while(badInput);
    // Now the input is valid and can be stored in a variable of type int
    ss << userInputString;
    ss >> userInputInt;
    return userInputInt;
}
int getZipCodeFromUser() {
    string userInputString;
    int userInputInt;
    bool badInput;
    stringstream ss;
    int dashCounter;
    string errorType;

    do{
        badInput = false;
        dashCounter = 0;
        if(errorType == "NO INPUT"){
            cout << "No input. Enter your zipcode: ";
        }
        else if (errorType == "INVALID INPUT"){
            cout << "Invalid Input. Enter your zipcode: ";
        }

        getline(cin, userInputString);
        // go through the string and make sure the only characters in the input are 0-9 or -
        for(int i = 0; i < userInputString.length(); ++i){
            if(!((userInputString[i] == '0') || (userInputString[i]== '1') || (userInputString[i]== '2') ||
                 (userInputString[i]== '3') || (userInputString[i]== '4') || (userInputString[i]== '5') ||
                 (userInputString[i]== '6') || (userInputString[i]== '7') || (userInputString[i]== '8') ||
                 (userInputString[i]== '9'))){
                badInput = true;
                errorType = "INVALID INPUT";
            }
        }
        if(!(userInputString.length() == 5)){
            badInput = true;
            errorType = "INVALID INPUT";
        }
        if(userInputString.empty()){
            badInput = true;
            errorType = "NO INPUT";
        }
    }while(badInput);
    // Now the input is valid and can be stored in a variable of type int
    ss << userInputString;
    ss >> userInputInt;
    return userInputInt;
}
string getSentenceFromUser() {
    string userInputSentence;
    getline(cin, userInputSentence);
    while(userInputSentence.empty()){
        cout << "No input. Please try again. ";
        getline(cin, userInputSentence);
    }
    return userInputSentence;
}

double getPriceFromUser() {
    string userInputString;
    double userInputFloat;
    stringstream ss;
    bool badInput;
    string testString;
    int dashCounter;
    int dotCounter;
    string errorType;
    do{
        badInput = false;
        testString = "";
        dashCounter = 0;
        dotCounter = 0;
        if(errorType == "NO INPUT"){
            cout << "No input. Enter the price: ";
        }
        else if (errorType == "INVALID INPUT"){
            cout << "Invalid Input. Enter the price: ";
        }
        getline(cin, userInputString);
        // use for loop to loop through userInputString to make sure the only characters are 0-9 or - or .
        for(int i = 0; i < userInputString.length(); ++i){
            if(!((userInputString[i] == '0') || (userInputString[i]== '1') || (userInputString[i]== '2') ||
                 (userInputString[i]== '3') || (userInputString[i]== '4') || (userInputString[i]== '5') ||
                 (userInputString[i]== '6') || (userInputString[i]== '7') || (userInputString[i]== '8') ||
                 (userInputString[i]== '9') || (userInputString[i] == '.'))){
                badInput = true;
                errorType = "INVALID INPUT";
            }

            if(userInputString[i] == '.'){
                dotCounter++;
                if((userInputString.length() - (i+1)) > 2){
                    badInput = true;
                    errorType = "INVALID INPUT";
                }
            }
        }
        if(dotCounter > 1){
            badInput = true;
            errorType = "INVALID INPUT";
        }
        if(userInputString.empty()){
            badInput = true;
            errorType = "NO INPUT";
        }
    }
    while(badInput);
    // Now the input is valid and can be put into a variable of type double
    ss << userInputString;
    ss >> userInputFloat;

    return userInputFloat;
}