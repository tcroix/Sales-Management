//
//  Store.hpp
//  Sales Management
//
//  Created by Taylor Croix on 9/28/20.
//  Copyright © 2020 Taylor Croix. All rights reserved.
//

#ifndef Store_hpp
#define Store_hpp

#include <stdio.h>
#include "Product.hpp"
#include "Customer.hpp"

class Store {
    char name[100];
    Product* products[100];
    Customer* customers[100];
    static int counter; // declares but does not define
    int numProducts;
    int numCustomers;
public:
    Store();
    Store(const char name[]);
    const char* getName();
    void setName(const char storeName[]);
    bool addProduct(int productID, const char productName[]);
    Product* getProduct(int productID);
    bool addCustomer(int customerID, const char customerName[], bool credit=false);
    Customer* getCustomer(int customerID);
    bool takeShipment(int productID, int quantity, double cost);
    bool sellProduct(int customerID, int productID, int quantity);
    bool takePayment(int customerID, double amount);
    void outputProducts(std::ostream& os);
    void outputCustomers(std::ostream& os);
};

#endif /* Store_hpp */
