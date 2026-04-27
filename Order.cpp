#include "Order.h"

using namespace std;


int Order::totalOrdersCount = 0;

Order::Order(string d, string t, int prep, string desc, double p)
    : date(d), time(t), preparationTime(prep), description(desc), price(p) {
    orderNumber = ++totalOrdersCount;
}

int Order::getPreparationTime() const {
    return preparationTime;
}

void Order::displayInfo() const {
    cout << "Order #" << orderNumber << " [" << date << " " << time << "]" << endl;
    cout << "Description: " << description << endl;
    cout << "Preparation time: " << preparationTime << " min. Price: " << price << " UAH" << endl;
    cout << "--------------------------" << endl;
}

int Order::getTotalOrders() {
    return totalOrdersCount;
}