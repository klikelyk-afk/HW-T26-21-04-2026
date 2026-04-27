#ifndef ORDERSSYSTEM_H
#define ORDERSSYSTEM_H

#include "Order.h"
#include <vector>
#include <algorithm>

using namespace std;

class OrdersSystem {
private:
    vector<Order> orders;

public:
    void addOrder(const Order& o);
    void sortByPreparationTime();
    void processFirstOrder();
    void showAllOrders();
};

#endif
