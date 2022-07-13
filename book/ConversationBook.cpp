#include "ConversationBook.h"

ConversationBook::ConversationBook(int Id, string Exp, string Producer, string price, string Isbn, string NameOfAuthor, string NameOfBook, string language) :
    Book(Id, Exp, Producer,price,Isbn,NameOfAuthor,NameOfBook)
{
    this->language = language;
}

ConversationBook::ConversationBook() {

}

void ConversationBook::addConversationBook() {
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
	cout << endl << "언어 >>";
	getline(cin, language);
	cout << endl << "ISBN : ";
	getline(cin, isbn);

	setAuthor(author);
	setExp(exp);
	setProducer(producer);
	setPrice(price);
	setName(name);
	setIsbn(isbn);
}


void ConversationBook::show()
{
    cout << "--- 상품ID : " << getId() << endl;
    cout << "상품설명 : " << getExp() << endl;
    cout << "생산자 : " << getProducer() << endl;
    cout << "가격 : " << getPrice() << endl;
    cout << "ISBN : " << getIsbn() << endl;
    cout << "책제목 : " << getBook() << endl;
    cout << "저자 : " << getAuthor() << endl;
    cout << "언어 : " << language << endl;
   
}

void ConversationBook::setLanguage(string language)
{
	this->language = language;
}


