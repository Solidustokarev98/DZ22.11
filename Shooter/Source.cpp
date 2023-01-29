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
		/*if (key == 'w' || key == 'W' || key == up_arrow)			cout << "Вперед" << endl;
		else if(key=='s' || key == 'S' || key == down_arrow)		cout<<"Назад"<<endl;
		else if (key == 'a' || key == 'A' || key == left_arrow)	cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == right_arrow)	cout << "Вправо" << endl;
		else if (key == ' ')	cout << "Прыжок" << endl;
		else if (key == Enter)	cout << "Огонь" << endl;
		else if (key == Escape)	cout << "Выход" << endl;
		else if(key !=-32)					cout << "Error" << endl;*/

		switch (key)
		{
		case 'w':case 'W':case up_arrow:cout << "Вперед" << endl; break;
		case 's':case 'S':case down_arrow:cout << "Назад" << endl; break;
		case 'a':case 'A':case left_arrow:cout << "Влево" << endl; break;
		case 'd':case 'D':case right_arrow:cout << "Вправо" << endl; break;
		case ' ':cout << "Прыжок" << endl; break;
		case Enter:cout << "Огонь" << endl; break;
		case Escape:cout << "Выход" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key !=Escape);
}