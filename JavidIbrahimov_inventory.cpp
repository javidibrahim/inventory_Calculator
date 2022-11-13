#include <iostream>
using namespace std;

#include "JavidIbrahimov_inventory.h"

//default constructor
Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0;
    totalCost = 0;
}

Inventory::Inventory(int i, int qty, double c)
{
    setItemNumber(i);
    setQuantity(qty);
    setCost(c);
    setTotalCost();
}

Inventory::~Inventory()
{

}

//setters
void Inventory::setItemNumber(int i)
{
    itemNumber = i;
}

void Inventory::setQuantity(int qty)
{
    quantity = qty;
}

void Inventory::setCost(double c)
{
    cost = c;
}

void Inventory::setTotalCost()
{
    totalCost = quantity*cost;
}

//getters

int Inventory::getItemNumber()
{
    return itemNumber;
}

int Inventory::getQuantity()
{
    return quantity;
}

double Inventory::getCost()
{
    return cost;
}

double Inventory::getTotalCost()
{
    return cost*quantity;
    
}
