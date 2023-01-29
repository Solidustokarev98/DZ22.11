//Токарев СБД211
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
	cout << "Программа Shooter\n";
	char key;
	do
	{
		key = _getch();
		if (key == 119) {
			cout << "Вперед\n";
		}
		else if (key == 97) {
			cout << "Влево\n";
		}
		else if (key == 115) {
			cout << "Назад\n";
		}
		else if (key == 100) {
			cout << "Вправо\n";
		}
		else if (key == 32) {
			cout << "Прыжок\n";
		}
		else if (key == 13) {
			cout << "Огонь\n";
		}
		else if (key == 27) {
			cout << "Выход\n";
		}
		else {
			cout << "Error\n";
		}
		} 
	while (key != 27);
#endif

#ifdef Factorial
	cout << "Программа факториал\n";
	double fact = 1;
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << "! = ";
		fact *= i;
		cout<<fact<<endl;
	}
	cout << endl;
	
#endif

#ifdef Stepen
	cout << "Возведение числа в степень\n";
	double a;
	int n;
	double N = 1;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++) {
		N *= a;
	}
	cout <<"Результат: " << N;
#endif

#ifdef ASCII
	cout << "Вывод на экран таблицу ASCII-символов\n";
	setlocale(LC_ALL, "С");
	for (int i = 0; i < 256; i++) {
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
		}
	cout << endl;
#endif
	
#ifdef Fibonachi1
	cout << "Вывод на экран ряд Фибоначчи до числа, введенного с клавиатуры\n";

	int n;
	cout << "Введите число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <=n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
#endif

#ifdef Fibonachi2
	cout << "Вывод на экран заданное количество чисел из ряда Фибоначчи\n";
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i=0, a = 0, b = 1, c = a + b; i++< n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	

#endif

#ifdef Prost
	cout << "Вывод на экран ряд простых чисел, до указанного предела\n";
	int n;
	cout << "Введите число: "; cin >> n;
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