#define _HAS_STD_BYTE 0
#include <iostream>
#include <Windows.h>
#include <clocale>
#include "OrderSystem.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    OrdersSystem orderSystem;

    

    orderSystem.addOrder(Order("27.04.2026", "10:00", 20, "Піца Маргарита", 280.0));
    orderSystem.addOrder(Order("27.04.2026", "10:05", 10, "Салат Цезар", 190.0));
    orderSystem.addOrder(Order("27.04.2026", "10:10", 30, "Стейк", 450.0));

    cout << "Усі замовлення (створено всього: " << Order::getTotalOrders() << "):\n";
    orderSystem.showAllOrders();

    cout << "\nСортування за часом готовності...\n";
    orderSystem.sortByPreparationTime();
    orderSystem.showAllOrders();

    cout << "\nОбробка першого замовлення за часом:\n";
    orderSystem.processFirstOrder();

  
    system("pause");
    return 0;
}