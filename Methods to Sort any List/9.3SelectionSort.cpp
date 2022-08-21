// Selection sort
#include <iostream>
using namespace std;

int main() {
    int arr[50], length, i, j, min, temp;
    
    cout << "Length of the array: ";
    cin >> length;
    
    cout << "Elements of the array: ";
    for(i=0; i<length; i++)
    cin >> arr[i];
    
    for(i=0; i<length-1; i++){
        min=i;
        
        for(j=i+1; j<length; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    
    cout << "Sorted array: ";
    for(i=0; i<length; i++)
        cout << arr[i];

    return 0;
}

//

// or
/*
#include <iostream>
using namespace std;

int main() {
    
    int size = 10;
    int arr[size] = {44, 11, 25, 36, 2, 77, 100, 96, 21, 10};
    
    int min_index, temp;
    
    for(int i=0; i<size-1; i++){
        
        min_index = i;
        
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        
        if(min_index != i){
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    
    cout << "\nSorted array: ";
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    
    return 0;
}*/
