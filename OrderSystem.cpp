#include "OrderSystem.h"

using namespace std;

void OrdersSystem::addOrder(const Order& o) {
    orders.push_back(o);
}

void OrdersSystem::sortByPreparationTime() {
    sort(orders.begin(), orders.end(), [](const Order& a, const Order& b) {
        return a.getPreparationTime() < b.getPreparationTime();
        });
}

void OrdersSystem::processFirstOrder() {
    if (!orders.empty()) {
        cout << "Processing order:" << endl;
        orders.front().displayInfo();
        orders.erase(orders.begin());
    }
    else {
        cout << "Order queue is empty." << endl;
    }
}

void OrdersSystem::showAllOrders() {
    for (const auto& o : orders) {
        o.displayInfo();
    }
}