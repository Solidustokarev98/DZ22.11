#include<iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27

#define up_arrow 72
#define down_arrow 80
#define left_arrow 75
#define right_arrow 77
void main() {
	setlocale(LC_ALL, "Rus");
	char key;	
	do 
	{
		key = _getch();
		//cout << (int)key << "\t" <<key<< endl;
		/*if (key == 'w' || key == 'W' || key == up_arrow)			cout << "������" << endl;
		else if(key=='s' || key == 'S' || key == down_arrow)		cout<<"�����"<<endl;
		else if (key == 'a' || key == 'A' || key == left_arrow)	cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == right_arrow)	cout << "������" << endl;
		else if (key == ' ')	cout << "������" << endl;
		else if (key == Enter)	cout << "�����" << endl;
		else if (key == Escape)	cout << "�����" << endl;
		else if(key !=-32)					cout << "Error" << endl;*/

		switch (key)
		{
		case 'w':case 'W':case up_arrow:cout << "������" << endl; break;
		case 's':case 'S':case down_arrow:cout << "�����" << endl; break;
		case 'a':case 'A':case left_arrow:cout << "�����" << endl; break;
		case 'd':case 'D':case right_arrow:cout << "������" << endl; break;
		case ' ':cout << "������" << endl; break;
		case Enter:cout << "�����" << endl; break;
		case Escape:cout << "�����" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key !=Escape);
}