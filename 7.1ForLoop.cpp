
#include <iostream>
using namespace std;

int main() {
   
   cout << "Using i=0; i<10; i++" << endl;          // Time complexity: o(n)
    for(int i=0; i<10; i++){
        cout << "Rita o rita" << endl;
    }
    
    cout << "Using i=1; i<10; i=i*2" << endl;       // Time complexity: o(log2 ^n)
    for(int i=1; i<10; i=i*2){
        cout << "Rita o rita" << endl;
    }
    
    cout << "Using i=1; i<10; i=i*3" << endl;       // Time complexity: o(log3 ^n)
    for(int i=1; i<10; i=i*3){
        cout << "Rita o rita" << endl;
    }
    
    cout << "Using i=0; i<10; i--" << endl;         // Time complexity: o(n)
    for(int i=10; i>1; i--){
        cout << "Rita o rita" << endl;
    }
    
    cout << "Using i=1; i>0.05; i=i/2" << endl;     // Time complexity: o(log2 ^n)
    for(float i=1; i>0.05; i=i/2){
        cout << "Rita o rita" << endl;
    }

    return 0;
}
