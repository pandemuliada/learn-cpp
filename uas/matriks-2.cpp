#include <iostream>
using namespace std;

int main()
{
	int a[3][3];
	int i;
	int j;
	int total = 0;

	cout << "Masukkan angka untuk matriks (3x3): \n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Masukkan angka matriks [" << i + 1 << "][" << j + 1 << "] : ";
			cin >> a[i][j];
			while (a[i][j] > 99 || a[i][j] < 1)
			{
				cout << "Inputan anda salah, masukkan angka diantara 1-99 : ";
				cin >> a[i][j];
			}
		}
		cout << endl;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == 0 || i == 2) {
				total += a[i][j];
			}
		}
		cout << endl;
	}
	
	cout << "Matriks : " << endl;
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}

	cout << "Transpose Matriks : " << endl;
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				cout << a[j][i] << " ";
			}
			cout << endl;
		}
	}
}