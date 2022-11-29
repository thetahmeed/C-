#include <iostream>
using namespace std;
int arr[50], size;
void inArray(){
    cout << "Enter the size of the array: ";
    cin >> size;
    for(int i = 0; i< size; i++){
        cout << "\nPlease enter value of index " << i << " : ";
        cin >> arr[i];
    }
}
void printArray(){
    cout << "\nYour array ";
    for(int i = 0; i< size; i++){
        cout << "\n Index " << i << " = " << arr[i];
        cout << " (Position = " << i+1 << ")";
    }
}
void searchArray() {
    int search, found=0;
    cout << "\nEnter a value to serach: ";
    cin >> search;
    for(int i = 0; i < size; i++){
        if(arr[i] == search){
            cout << "Element found at index " << i;
            found = 1;
            break;
        }
    }
    if(found == 0){
        cout << "Search not found";
    }
}
void searchArrayToCountRepeatedElement() {
    int search, found=0;
    cout << "\nEnter a value to count repeatation: ";
    cin >> search;
    for(int i = 0; i < size; i++){
        if(arr[i] == search){
            found++;
        }
    }
    if(found == 0){
        cout << "Search not found";
    }else{
        cout << "Item found " << found << " times";
    }
}
void deleteAnElement(){
    int del, found = -1, i;
    cout << "\nEnter a value to delete: ";
    cin >> del;
    for(i = 0; i < size; i++){
        if(arr[i] == del){
            found = i;
            break;
        }
    }
    if(found > -1){
      for(int j = i; j < size-1; j++){
              arr[j] = arr[j+1];
      } 
    size--;
    printArray();
    }else{
        cout << "Item not found";
    }
}
int main() {
    inArray();
    printArray();
    searchArray();
    searchArrayToCountRepeatedElement();
    deleteAnElement();
    return 0;
}

