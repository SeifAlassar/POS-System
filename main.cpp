#include <iostream>
#include <string>
#include "Product.hpp"
#include <vector>

using namespace std;

int main() {
    vector <Product> products;
    
    Product p1("Laptop", 1000,10);
    Product p2("Mouse",20,50);
    Product p3("Keyboard",50,30);
    //products.push_back(p1,p2,p3);
    p1.DisplayProduct();
    p2.DisplayProduct();
    p3.DisplayProduct();


    return 0;
}