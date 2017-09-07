//������������� ���������
#include <windows.h>
#include <conio.h>
#include <iostream>

//������������� ������������ ���
using namespace std;

//����� Sokoban, � ������� ������� ��� ����
class Sokoban
{
private:
	//��������� �������
	unsigned short int lvl;
	unsigned short int boxNum;
	unsigned short int boxInPlace;

public:
	//�����������
	Sokoban()
	{
		setLVL(1);
		menu();
	}

	//����� ������
	void setLVL(int level)
	{
		lvl = level;
	}

	//��������� ������
	int getLVL()
	{
		return lvl;
	}

	//��������� ������ (��� ��� �������, ���� ������� ��� ��������� � ��� �������)
	void changeLVL()
	{
		/*TODO: ��������� if ��� ������� ������ �����/������*/
		unsigned short int newLVL = getLVL() + 1;
		setLVL(newLVL);
	}

	//���-�� ������� �� ������
	void setBox(int boxes)
	{
		boxNum = boxes;
	}

	//���� (��� ���� ����� �������)
	void menu()
	{

	}
};

void main()
{

}

/*
�������:
+ ��� public
- ��� private
*/

//����, ��� ��� �����
/*
������:
	-������� �������: lvl
	-���������� ������ �� ������: boxNum
	-���������� ������������� �� ������ ����� ������: boxInPlace

������:
	�����������: Sokoban (��� ���� ����������� ������ ����, ���� - ��������� ��������)
	+����� ������: setLVL
	+����: menu
	+��������� ������: getLVL (��� ������������ �������� �������)
	+����� ������: changeLVL
	+���-�� ������� �� ������: setBox
*/