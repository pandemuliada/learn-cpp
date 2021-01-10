#include <iostream>
#include <string>
using namespace std;

int main() {
  // Nomor 1
  int array[10];
  string array_string = "";

  int reversed_array[10];
  string reversed_array_string = "";
  
  int index = 0;
  int reversed_array_index = 0;

  cout << "Soal 1 - Masukan 10 angka \n";
  for (index = 0; index <= 9; index++) {
    cout << "Masukan angka ke-" << index + 1 << " : "; 
    cin >> array[index];

    array_string += to_string(array[index]);
  }

  // Reverse the array
  for (index = 9; index >= 0; index--) {
    reversed_array[reversed_array_index] = array[index];
    reversed_array_string += to_string(reversed_array[reversed_array_index]);

    reversed_array_index++;
  }

  if (array_string == reversed_array_string) {
    cout << "Palindrome";
  } else {
    cout << "Not palindrome";
  }
}