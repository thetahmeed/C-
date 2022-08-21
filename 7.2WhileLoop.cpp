// Sum of positive input numbers using WHILE loop

#include <iostream>
using namespace std;

int main() {
    int limit, i = 0, sum = 0, userInput;

    cout << "Enter input limit: ";
    cin >> limit;

    while (i < limit) {
        cout << "\nEnter any number: ";
        cin >> userInput;
        
        if(userInput > 0){
            sum = sum + userInput;
        }
        
       i++;
    }
    
    
    cout << "\nThe sum of positive input is: " << sum << endl;
    
    return 0;
}
