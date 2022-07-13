#pragma once
#include "Product.h"

class Book : public Product
{
private:
	string Isbn, NameOfAuthor, NameOfBook;
public:
	Book(int Id, string Exp, string Producer, string price, string Isbn, string NameOfAuthor, string NameOfBook);
	Book();
	string getIsbn();
	string getAuthor();
	string getBook();

	void setIsbn(string Isbn);
	void setAuthor(string Author);
	void setName(string Name);

	void addBook();
	
	void show();
};

