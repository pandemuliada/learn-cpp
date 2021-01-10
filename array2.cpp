#include <iostream>
#include <string>
using namespace std;

int main() {
  int array[10];
  // { 2, 3, 6, 7, 8 } Value
  // { 0, 1, 2, 3, 4 } Nomor bilik
  int index;
  int sum = 0;
  float average;
  int max;

  for (index = 0; index < 10; index++) {
    cout << "Masukan angka yang anda inginkan : ";
    cin >> array[index];
    
    // sum = sum + array[index];
  }


  average = sum / 10;
  cout << "Nilai rata-rata adalah " << average << "\n";

  // { 2, 3, 5, 6, 7, 8, 9, 2, 3, 5 }

  max = array[0]; // 2 // 3
  for (index = 0; index < 10; index++) {
    if (max < array[index]) {
      max = array[index];
    }
  }

  cout << "Nilai maksimal adalah " << max << "\n";
}