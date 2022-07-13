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
	cout << endl << "��� >>";
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
    cout << "--- ��ǰID : " << getId() << endl;
    cout << "��ǰ���� : " << getExp() << endl;
    cout << "������ : " << getProducer() << endl;
    cout << "���� : " << getPrice() << endl;
    cout << "ISBN : " << getIsbn() << endl;
    cout << "å���� : " << getBook() << endl;
    cout << "���� : " << getAuthor() << endl;
    cout << "��� : " << language << endl;
   
}

void ConversationBook::setLanguage(string language)
{
	this->language = language;
}


