#include <iostream>
using namespace std;

int main()
{
	int a[5][5];
	int i; //indeks baris
	int j; //indeks kolom
	int cari;
	int tot = 1;

	cout << "masukkan angka matriks (3x3): \n\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "masukkan angka matriks [" << i + 1 << "][" << j + 1 << "] : ";
			cin >> a[i][j];
			while (a[i][j] > 99 || a[i][j] < 1)
			{
				cout << "Inputan anda salah, masukkan angka diantara 1-99 : ";
				cin >> a[i][j];
			}
		}
		cout << endl;
	}

	cout << "##############################\n";
	cout << "Tampilan Matriks : " << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
      cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << "##############################\n";
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