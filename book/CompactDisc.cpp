#include "CompactDisc.h"

CompactDisc::CompactDisc(string NameOfAlbum, string NameOfSinger, int Id, string Exp, string Producer, string price):
	Product(Id, Exp, Producer, price)
{
	this->NameOfAlbum = NameOfAlbum;
	this->NameOfSinger = NameOfSinger;
}

void CompactDisc::show()
{
    cout << "--- 상품ID : " << getId() << endl;
    cout << "상품설명 : " << getExp() << endl;
    cout << "생산자 : " << getProducer() << endl;
    cout << "가격 : " << getPrice() << endl;
    cout << "앨범제목 : " << NameOfAlbum << endl;
    cout << "가수 : " << NameOfSinger << endl;
}
