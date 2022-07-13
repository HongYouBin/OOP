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
	
	cout << endl << "상품설명 >> ";
	getline(cin, exp);
	cout << endl << "생산자 >> ";
	getline(cin, producer);
	cout << endl << "가격 >> ";
	getline(cin, price);
	cout << endl << "책제목 >> ";
	getline(cin, name);
	cout << endl << "저자 >> ";
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
    cout << "--- 상품ID : " << getId() << endl;
    cout << "상품설명 : " << getExp() << endl;
    cout << "생산자 : " << getProducer() << endl;
    cout << "가격 : " << getPrice() << endl;
    cout << "ISBN : " << Isbn << endl;
    cout << "책제목 : " << NameOfBook << endl;
    cout << "저자 : " << NameOfAuthor << endl;
   
}

