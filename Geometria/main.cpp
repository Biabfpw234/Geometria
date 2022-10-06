//Geometria
#include <iostream>;
using namespace std;
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define PLUS
void main()
{
	setlocale(LC_ALL, "");
	int n,i, j{};
	//cout << "введите количество звездочек: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)// этот выводит на экран строку из звездочек
		{
			cout << " * ";
		}
		cout << endl;//после вывода строки переходим на новую строку
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	//start   ;stop   ; step  
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;

	}
#endif // TRIANGLE_3
	//cout << "введите размер: "; cin >> n;
	//int a=0;

#ifdef TRIANGLE_4
#endif

#ifdef PLUS

	char plus = '+', minus = '-';
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0) cout << ' ' << plus; else cout << ' ' << minus;
			//((i + j) % 2 == 0) ? cout << ' ' << plus: else cout << ' ' << minus;
			//(i + j) % 2 == 0 ? cout << ' ' << plus: else cout << ' ' << minus;
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS
	cout << "Таблица Пифагора " << endl;
	for (int i = 0; i <= 10; i++)
		cout << i << '\t';
	    cout << endl;
	for (int i = 1; i <= 10; i++)
	{	
		cout << i << '\t';
		for (int j = 1; j <= 10; j++)
		cout << i * j << "\t";
		cout << endl;
		
	}
 







}










	
		
		

	


