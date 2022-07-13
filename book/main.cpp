#include "CompactDisc.h"
#include "ConversationBook.h"


int main() {
	cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl;
	int selectF, selectS;
	string exp, producer, price, name, author, isbn, singer, language;
	int id = 0;
	int state = 1;
	
	Product* p = new Product[100];
	Product* temp = p;

	while (state) {
		if (id == 100)
			break;
		cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ";
		cin >> selectF;
		switch (selectF) {
		case 1:
			cout << endl << "상품 종류 책(1), 음악CD(2), 회화책(3) ";
			cin >> selectS;
			cin.ignore(1);
			
			if (selectS == 1) {
				Book* b = new Book;
				b->addBook();
				
				p[id] = b;
				
			}
			if (selectS == 3) {
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

