//
//  Product.hpp
//  Sales Management
//
//  Created by Taylor Croix on 9/28/20.
//  Copyright © 2020 Taylor Croix. All rights reserved.
//
#include <stdio.h>
#include <iostream>

#ifndef Product_hpp
#define Product_hpp


class Product {
    int id, inventory, numSold;
    char name[100];
    char description[100];
    double totalPaid;
    static int counter; // declares but does not define
public:
    Product(int productID, const char productName[]);
    int getID() const;
    const char* getName() const;
    void setName(const char productName[]);
    const char* getDescription() const;
    void setDescription(const char description[]);
    int getNumberSold() const;
    double getTotalPaid() const;
    int getInventoryCount() const;
    bool addShipment(int shipmentQuantity, double shipmentCost);
    bool reduceInventory(int purchaseQuantity);
    double getPrice() const;
};

std::ostream& operator<<(std::ostream& os, const Product& product);

#endif /* Product_hpp */
