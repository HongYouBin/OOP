#include "CompactDisc.h"
#include "ConversationBook.h"


int main() {
	cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ� *****" << endl;
	int selectF, selectS;
	string exp, producer, price, name, author, isbn, singer, language;
	int id = 0;
	int state = 1;
	
	Product* p = new Product[100];
	Product* temp = p;

	while (state) {
		if (id == 100)
			break;
		cout << "��ǰ �߰�(1), ��� ��ǰ ��ȸ(2), ������(3) ";
		cin >> selectF;
		switch (selectF) {
		case 1:
			cout << endl << "��ǰ ���� å(1), ����CD(2), ȸȭå(3) ";
			cin >> selectS;
			cin.ignore(1);
			
			if (selectS == 1) {
				Book* b = new Book;
				b->addBook();
				
				p[id] = b;
				
			}
			if (selectS == 3) {
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
				cout <<endl<< "ISBN : ";
				getline(cin, isbn);
				ConversationBook* cb = new ConversationBook(id, exp, producer, price, isbn, author, name, language);
				//product[id] = cb;
				id++;
				
			}
			if (selectS == 2) {
				ConversationBook cb;
				cb.addConversationBook();
			}
			cout<<endl;
			break;
		case 2:
			for (int i = 0; i < id; ++i) {
				//product[i]->show();
			}
				cout << endl;
				break;
			

		case 3:
			
			
			state = 0;
			break;
		}
	}
}

