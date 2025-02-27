#include <iostream>
#include <string>
#include "Product.hpp"

using namespace std;

long int Product::last_id = 1000;
Product::Product(string name, double price, int stock) {
    this->id = ++last_id;
    this->name = name;
    this->price = price;
    this->stock = stock;
}

//getters
long int Product::getId() const {
    return id;
}
string Product:: getName() const {
    return name;
}
double Product::getPrice() const {
    return price;
}
int Product::getStock() const {
    return stock;
}

//setters

void Product::setName(const string& newName) {
    name = newName;
}

void Product::setPrice(double NewPrice) {
    price = NewPrice;
}
void Product::setStock(int NewStock) {
    stock = NewStock;
}

void Product::DisplayProduct()
{
    cout << "ID: " << id << " | Name: " << name 
         << " | Price: $" << price << " | Stock: " << stock << endl;
} 

