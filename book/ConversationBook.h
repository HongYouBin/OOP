#pragma once
#include "Book.h"

class ConversationBook : public Book
{
private:
	string language;
public:
	ConversationBook(int Id, string Exp, string Producer, string price, string Isbn, string NameOfAuthor, string NameOfBook, string language);
	ConversationBook();

	void addConversationBook();
	void show();
	void setLanguage(string language);
};

