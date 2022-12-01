#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  for (int i = 0; i < size; i++) {
      
    for (int j = 0; j < size - i; j++) {

      if (array[j] > array[j + 1]) {

        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {3, 1, 2, 5, 4};
  
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array:\n";  
  printArray(data, size);
}