#include <iostream>
using namespace std;

int main()
{
    // 1 For
    for (int i = 0; i<10; i++) {
        cout << "I am for loop " << i+1 << endl;
    }

    // 1.1 for each
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
    for (int n : num_array) {
        cout << n << " ";
    }

    // 2 While
    int j = 0;
    while (j<10)
    {
         cout << "I am while loop " << j+1 << endl;
         j++;
    }

    // 3. do...while
    int k = 0;
    do{
         cout << "I am do while loop " << k+1 << endl;
         k++;
    }while (k<10);
    
    return 0;
}
