// Linear Search (With search position and Counter)

#include <iostream>
using namespace std;

int main() {
    
    int arr[50], size, search, count=0;
    
    cout << "Array size: ";
    cin >> size;
    
    cout << "\nArray elements: ";
    for (int i=0; i<size; i++)
    cin >> arr[i];
    
    cout << "\nSearch: ";
    cin >> search;
    
    for (int i=0; i<size; i++){
        if(arr[i] == search){
            cout << "\n" << search << " found on index: " << i;
            count++;
        }
    }
    
    if(count == 0){
        cout << "\n" << search <<" not found.";
    }else{
         cout << "\n" << search << " found " << count <<" times.";
    }
    
    
    return 0;
}
