#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <iostream>

using namespace std;

class Order {
private:
    static int totalOrdersCount;

    string date;
    string time;
    int preparationTime;
    string description;
    double price;
    int orderNumber;

public:
    Order(string d, string t, int prep, string desc, double p);

    int getPreparationTime() const;
    void displayInfo() const;
    static int getTotalOrders();
};

#endif
