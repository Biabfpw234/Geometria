#include <iostream>;
using namespace std;

#define CHESS_BOARD1
#define HARD_CHESS_BOARD

#define UPPER_LEFT_ANGLE   (char) 218
#define UPPER_RIGHT_ANGLE  (char) 191
#define LOWER_LEFT_ANGLE   (char) 192
#define LOWER_RIGHT_ANGLE  (char) 217
#define HORIZONTAL_LINE    (char) 196
#define VERTICAL_LINE      (char) 179
#define WHITE_BOX          (char) 219
#define BLACK_BOX          ' '

void main()
{
#ifndef CHESS_BOARD1
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE;
			else
			{
				if ((i + j) % 2 == 0) cout << WHITE_BOX << WHITE_BOX;
				else  cout << BLACK_BOX << BLACK_BOX;
			}

		}
		cout << endl;
	}
#endif // CHESS_BOARD1
#ifdef HARD_CHESS_BOARD

	setlocale(LC_ALL, "");
	int n, size;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++) // вс€ доска
	{
		for (int j = 0; j < n; j++)  //р€д
		{
			if ((i + j) % 2 == 0)
			{
				for (int i = 0; i < n; i++)
				{
					for (int i = 0; i < n; i++)
					{

						cout << " * ";
					}
				}

			}

			else  if ((i + j) % 2 != 0)
				for (int i = 0; i < n; i++)
				{
					for (int i = 0; i < n; i++)
					{
						cout << "   ";
					}

				}
		}
		cout << endl;
	}
#endif // HARD_CHESS_BOARD


	
}