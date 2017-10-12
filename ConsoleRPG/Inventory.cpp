#include "Inventory.h"



Inventory::Inventory()
{
	this->capacity = 10;
	this->numberOfItems = 0;
	this->itemsArray = new Item*[this->capacity];
}


Inventory::~Inventory()
{
	for (int i = 0; i < this->numberOfItems; i++)
	{
		delete this->itemsArray[i];
	}
	delete[] itemsArray;
}

void Inventory::expand()
{
	this->capacity *= 2;

	Item **tempArray = new Item*[this->capacity];

	for (int i = 0; i < this->numberOfItems; i++)
	{
		tempArray[i] = new Item(*this->itemsArray[i]);
	}

	for (int i = 0; i < this->numberOfItems; i++)
	{
		delete this->itemsArray[i];
	}

	delete[] this->itemsArray;

	this->itemsArray = tempArray;

	this->initialize(this->numberOfItems);
}

void Inventory::initialize(const int from)
{
	for (int i = from; i < this->capacity; i++)
	{
		this->itemsArray[i] = nullptr;
	}
}

void Inventory::addItem(const Item &item)
{
	if (this->numberOfItems >= this->capacity)
	{
		this->expand();
	}

	this->itemsArray[this->numberOfItems++] = new Item(item);
}

void Inventory::removeItem(int index)
{

}