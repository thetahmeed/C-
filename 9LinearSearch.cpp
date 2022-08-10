// Linear Search

#include <iostream>
using namespace std;

int main() {
    
    int arr[50], size, search;
    
    cout << "Array size: ";
    cin >> size;
    
    cout << "\nArray elements: ";
    for (int i=0; i<size; i++)
    cin >> arr[i];
    
    cout << "\nSearch: ";
    cin >> search;
    
    for (int i=0; i<size; i++){
        if(arr[i] == search){
            cout << "\n" << search << " found.";
            exit(0);
        }
    }
    
    cout << "\n" << search <<" not found.";
    
    return 0;
}
