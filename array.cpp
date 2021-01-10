#include <iostream>
#include <string>
using namespace std;

int main() {
  int array[10];
  int index;
  int reversed_array[10];
  int reversed_array_index;
  int sum = 0; // Set default value
  float average;
  int max;
  int min;
  string reversed_array_string;

  
  cout << "Latihan 5 - I Made Pande Muliada_2001010021 \n";

  for (index = 0; index <= 9; index++) {
    cout << "Masukan angka ke-" << index + 1 << " : "; 
    cin >> array[index];

    sum = sum + array[index];
  }
  
  average = (double) sum / 10;

  // Find max value from array
  max = array[0]; // Set first index as initial max value
  for (index = 0; index <= 9; index++) {
    // Compare the previous value with new value
    if (max < array[index]) {
      max = array[index];
    }
  }

  // Find min value from array 
  min = array[0]; // Set first index as initial min value
  for (index = 0; index <= 9; index++) {
    // Compare the previous value with new value
    if (min > array[index]) {
      min = array[index];
    }
  }

  // Reverse the array
  reversed_array_index = 0;
  for (index = 9; index >= 0; index--) {
    // Compare the previous value with new value
    reversed_array[reversed_array_index] = array[index];
    reversed_array_index++;
  }

  for (index = 0; index <= 9; index++) {
    reversed_array_string += reversed_array[index];
  }

  // array[ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]
  // new_array[10, 9]

  cout << "Transpose adalah ";
  for (index = 9; index >= 0; index--) {
    cout << array[index] << " ";
  }

  // cout << "" << endl;
  // cout << "Rata-rata adalah " << average << endl;
  // cout << "Nilai maksimal adalah " << max << endl;
  // cout << "Nilai minimal adalah " << min << endl;
  // cout << "Transpose dari input adalah [" << reversed_array_string << "]" << endl;
}