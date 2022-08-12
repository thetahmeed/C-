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
