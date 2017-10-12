#pragma once

#include "Item.h"
class Inventory
{
private:
	int capacity;
	int numberOfItems;
	Item **itemsArray;
	void expand();
	void initialize(const int from);
public:
	Inventory();
	virtual ~Inventory();
	void addItem(const Item &item);
	void removeItem(int index);
};

