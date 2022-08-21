// Binary Search

#include <iostream>
using namespace std;

int main() {
    
    int arr[50], size, search, mid, start, end;
    
    cout << "Array size: ";
    cin >> size;
    
    cout << "\nArray elements: ";
    for (int i=0; i<size; i++)
    cin >> arr[i];
    
    cout << "\nSearch: ";
    cin >> search;
    
    start = 0;
    end = size-1;
    
    while(start <= end){
        mid = (start+end)/2;
        
        if(arr[mid] == search){
            cout << "\nFound the search on index: "<< mid;
            exit(0);
        }else if(arr[mid] > search){
            end = mid-1;
        }else if(arr[mid] < search){
            start = mid+1;
        }
    }
    
     cout << "\nSearch not found";
    
    
    return 0;
}
