//������� ���211
#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;

//#define Shooter		
//#define Factorial		
//#define Stepen		
//#define ASCII
//#define Fibonachi1	
//#define Fibonachi2
//#define Prost

void main() {
	setlocale(LC_ALL, "Russian");

#ifdef Shooter
	cout << "��������� Shooter\n";
	char key;
	do
	{
		key = _getch();
		if (key == 119) {
			cout << "������\n";
		}
		else if (key == 97) {
			cout << "�����\n";
		}
		else if (key == 115) {
			cout << "�����\n";
		}
		else if (key == 100) {
			cout << "������\n";
		}
		else if (key == 32) {
			cout << "������\n";
		}
		else if (key == 13) {
			cout << "�����\n";
		}
		else if (key == 27) {
			cout << "�����\n";
		}
		else {
			cout << "Error\n";
		}
		} 
	while (key != 27);
#endif

#ifdef Factorial
	cout << "��������� ���������\n";
	double fact = 1;
	int n;
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << "! = ";
		fact *= i;
		cout<<fact<<endl;
	}
	cout << endl;
	
#endif

#ifdef Stepen
	cout << "���������� ����� � �������\n";
	double a;
	int n;
	double N = 1;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++) {
		N *= a;
	}
	cout <<"���������: " << N;
#endif

#ifdef ASCII
	cout << "����� �� ����� ������� ASCII-��������\n";
	setlocale(LC_ALL, "�");
	for (int i = 0; i < 256; i++) {
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
		}
	cout << endl;
#endif
	
#ifdef Fibonachi1
	cout << "����� �� ����� ��� ��������� �� �����, ���������� � ����������\n";

	int n;
	cout << "������� �����: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <=n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
#endif

#ifdef Fibonachi2
	cout << "����� �� ����� �������� ���������� ����� �� ���� ���������\n";
	int n;
	cout << "������� �����: "; cin >> n;
	for (int i=0, a = 0, b = 1, c = a + b; i++< n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	

#endif

#ifdef Prost
	cout << "����� �� ����� ��� ������� �����, �� ���������� �������\n";
	int n;
	cout << "������� �����: "; cin >> n;
	for (int i =0 ; i <= n; i++) 
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if(simple)	cout << i << "\t";
	}
	#endif
}