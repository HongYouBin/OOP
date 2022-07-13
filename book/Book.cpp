#include "Book.h"

Book::Book(int Id, string Exp, string Producer, string price, string Isbn, string NameOfAuthor, string NameOfBook) :
    Product(Id, Exp, Producer, price) {
    this->Isbn = Isbn;
    this->NameOfAuthor = NameOfAuthor;
    this->NameOfBook = NameOfBook;
}

Book::Book()
{
	Isbn = "";
	NameOfAuthor = "";
	NameOfBook = "";

}

string Book::getIsbn()
{
	return Isbn;
}

string Book::getAuthor()
{
	return NameOfAuthor;
}

string Book::getBook()
{
	return NameOfBook;
}

void Book::setIsbn(string Isbn)
{
    this->Isbn = Isbn;
}

void Book::setAuthor(string Author)
{
    NameOfAuthor = Author;
}

void Book::setName(string Name)
{
    NameOfBook = Name;
}

void Book::addBook() {
	string exp, producer, price, name, author, isbn, singer, language;
	
	cout << endl << "��ǰ���� >> ";
	getline(cin, exp);
	cout << endl << "������ >> ";
	getline(cin, producer);
	cout << endl << "���� >> ";
	getline(cin, price);
	cout << endl << "å���� >> ";
	getline(cin, name);
	cout << endl << "���� >> ";
	getline(cin, author);
	cout << endl << "ISBN >> ";
	getline(cin, isbn);
	
	setAuthor(author);
	setExp(exp);
	setProducer(producer);
	setPrice(price);
	setName(name);
	setIsbn(isbn);
	

	
}

void Book::show()
{
    cout << "--- ��ǰID : " << getId() << endl;
    cout << "��ǰ���� : " << getExp() << endl;
    cout << "������ : " << getProducer() << endl;
    cout << "���� : " << getPrice() << endl;
    cout << "ISBN : " << Isbn << endl;
    cout << "å���� : " << NameOfBook << endl;
    cout << "���� : " << NameOfAuthor << endl;
   
}

