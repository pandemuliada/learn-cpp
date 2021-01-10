#include <iostream>
using namespace std;

int main()
{
	int a[5][5];
	int i; //indeks baris
	int j; //indeks kolom
	int cari;
	int tot = 1;

	cout << "masukkan angka matriks (5x5): \n\n";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
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
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << a[i][j];
			cout << "\t";
		}
		cout << "\n";
	}
	cout << "##############################\n";
	cout << "Transpose Matriks : " << endl;
	{
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				cout << a[j][i] << " ";
			}
			cout << endl;
		}
	}
	cout << "##############################\n";
	cout << "Masukkan Angka yang ingin dicari : ";
	cin >> cari;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j] == cari)
			{
				cout << "Angka " << cari << " ditemukan pada posisi [" << i + 1 << "][" << j + 1 << "]" << endl;
				tot += 1;
			}
		}
	}
	cout << "\n";
	if (tot != 0)
	{
		cout << "Angka " << cari << " yang ditemukan berjumlah " << tot;
	}
	else
	{
		cout << "Angka " << cari << " tidak ditemukan";
	}
}