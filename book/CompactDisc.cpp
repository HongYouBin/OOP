#include "CompactDisc.h"

CompactDisc::CompactDisc(string NameOfAlbum, string NameOfSinger, int Id, string Exp, string Producer, string price):
	Product(Id, Exp, Producer, price)
{
	this->NameOfAlbum = NameOfAlbum;
	this->NameOfSinger = NameOfSinger;
}

void CompactDisc::show()
{
    cout << "--- ��ǰID : " << getId() << endl;
    cout << "��ǰ���� : " << getExp() << endl;
    cout << "������ : " << getProducer() << endl;
    cout << "���� : " << getPrice() << endl;
    cout << "�ٹ����� : " << NameOfAlbum << endl;
    cout << "���� : " << NameOfSinger << endl;
}
