#pragma once
#include "Product.h"
class CompactDisc:public Product
{
private:
	string NameOfAlbum, NameOfSinger;
public:
	CompactDisc(string NameOfAlbum, string NameOfSinger, int Id, string Exp, string Producer, string price);

	void show();
};

