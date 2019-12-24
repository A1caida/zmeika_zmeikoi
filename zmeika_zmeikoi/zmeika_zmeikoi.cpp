#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int sym = 0; int sym_g = 0; int k = 0;
	int uwu = 10; int owo = 10;
	int** ar = new int* [uwu];

	for (int i = 0; i < uwu; i++)
	{
		ar[i] = new int[owo];
	}

	for (int i = 0; i < uwu; i++)
	{
		for (int j = 0; j < owo; j++)
		{
			ar[i][j] = rand() % 10;
			sym = ar[i][j] + sym;
		}
	}

	for (int i = 0; i < uwu; i++)
	{
		for (int j = 0; j < owo; j++)
		{
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < uwu; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 4; j >= 0; j--)
			{
				sym_g = sym_g + ar[i][j];
				k++;
				if (sym_g > sym - sym_g)
				{
					cout << "Длина головы =" << k << endl;
					exit(0);
				}
			}
		}
		else
		{
			for (int j = 0; j < owo; j++)
			{
				sym_g = sym_g + ar[i][j];
				k++;
				if (sym_g > sym - sym_g)
				{
					cout << "Длина головы = " << k << endl;
					exit(0);
				}
			}
		}

	}


}
