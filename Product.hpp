#ifndef PRODUCT_HPP
#define PRODUCT_HPP
#include <iostream>
#include <string>

using namespace std;

class Product {
private:
 long int id;     // id of the product , long int
 string name;     // name of the product , string
 double price;    // price of the product , double
 int stock;     // stock of the product , int
 static long int last_id;  // static variable to keep track of the last id assigned to a product 

public:
    Product(string name,double price,int stock); //constructor

    //getters
    long int getId() const;
    string getName() const;
    double getPrice() const;
    int getStock() const;

    //setters 
    
    void setName(const string& newName);

    void setPrice(double price);
    void setStock(int stock);

    void DisplayProduct(); //display the product information


};


#endif // PRODUCT_HPP
