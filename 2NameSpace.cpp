// We need to use cout or cin for input and output
// Which is included on std namespace
// So that in order to add std on program we can
// Use this mainly in three ways

// 1. This line after the include part,
// using namespace std; [Bad practice]

// 2. Or before of those objects we can use std::
// For instance, std::cout << "Hello";

// 3. After the header files we can add only those
// Objects we need on this program
// For example, using std::cout; [Good practice]

// Way 1
/*#include<iostream>
using namespace std;
int main(){
    cout<<"Way 1";

    return 0;
}*/

// [This is a bad practice because in this
// case it's include all the objects/member from std
// Which is bad for memory management]

// Way 2
/*#include<iostream>
int main(){
    std::cout<<"Way 2";

    return 0;
}*/

// Way 3
#include<iostream>
using std::cout;
int main(){
    cout<<"Way 3";

    return 0;
}

