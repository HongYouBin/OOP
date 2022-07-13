#include "Product.h"

Product::Product(int Id, string Exp, string Producer, string price)
{
	this->Id = Id;
	this->Exp = Exp;
	this->Producer = Producer;
	this->price = price;
}


Product::Product()
{
	Id = 0;
	Exp = "";
	Producer = "";
	price = "";
}



int Product::getId()
{
	return Id;
}

string Product::getExp()
{
	return Exp;
}

string Product::getProducer()
{
	return Producer;
}

string Product::getPrice()
{
	return price;
}

void Product::setExp(string Exp)
{
	this->Exp = Exp;
}

void Product::setProducer(string Producer) {
	this->Producer = Producer;
}
void Product::setPrice(string price) {
	this->price = price;
}
void Product::setId(int id) {
	this->Id = id;
}



