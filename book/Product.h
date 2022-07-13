#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product
{
private:
	int Id;
	string Exp, Producer, price;
public:
	Product(int Id, string Exp, string Producer, string price);
	Product();

	//virtual void show()=0;

	int getId();
	string getExp();
	string getProducer();
	string getPrice();

	void setExp(string Exp);
	void setProducer(string Producer);
	void setPrice(string price);
	void setId(int id);
};

