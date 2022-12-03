#include <iostream>
using namespace std;

int arr[50], size, deletedElement, deletedtedElementIndex = -1;

int undoCode = 0;
/*
0 = Undo not possible,
1 = Something new added
2 = Something deleted
*/

void printArray();
void inserElemntToArray();
void deleteElementFromArray();
void showOptions();
void undoOperation();

int main()
{
    cout << "[1. Initializing array]\n";
    cout << "Enter the size of your array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of index " << i << " : ";
        cin >> arr[i];
    }

    printArray();
}

void showOptions()
{
    int selectedOption;

    cout << "\n\nChoose any option:\n";
    cout << "\t1 for INSERT a new element\n";
    cout << "\t2 for DELETE an element\n";
    cout << "\t3 for UNDO last operation\n";
    cout << "\t4 for QUIT\n";

    cout << "Your choice: ";
    cin >> selectedOption;

    switch (selectedOption)
    {
    case 1:
        inserElemntToArray();
        break;
    case 2:
        deleteElementFromArray();
        break;
    case 3:
        undoOperation();
        break;
    case 4:
        exit(0);
        break;

    default:
    {
        cout << "\nPlease choose 1/2/3/4";
        showOptions();
    }
    break;
    }
}

void undoOperation()
{
    if(undoCode == 0){
        cout << "\nNothing to undo!";
    }else if(undoCode == 1){
        size--;
    }else if(undoCode == 2){
        // Right shift one digit
        size++;

        for (int i = size; i > 0; i--)
        {
            if (i >= deletedtedElementIndex)
            {
                arr[i] = arr[i-1];
            }
        }
        // Addig deleted value
        arr[deletedtedElementIndex] = deletedElement;
    }

    undoCode = 0;
    printArray();
}

void deleteElementFromArray()
{
    deletedElement;
    deletedtedElementIndex = -1;

    cout << "\n[3. Deleting an element]";
    cout << "\nEnter the value you want to delete: ";

    cin >> deletedElement;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == deletedElement)
        {
            deletedtedElementIndex = i;
            break;
        }
    }

    if (deletedtedElementIndex >= 0)
    {
        // Left shifting one digit
        for (int i = 0; i < size; i++)
        {
            if (i >= deletedtedElementIndex)
            {
                arr[i] = arr[i + 1];
            }
        }
        size--;
        undoCode = 2;
    }
    else
    {
        cout << "\nElement not found on the array";
    }

    printArray();
}

void inserElemntToArray()
{
    int newElement;

    cout << "\n[2. Inserting new element]";
    cout << "\nEnter the value you want to insert: ";

    cin >> newElement;

    size++;
    arr[size - 1] = newElement;
    undoCode = 1;

    printArray();
}

void printArray()
{
    cout << "\n----------------\n";
    cout << "\nYour array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    showOptions();
}

// Output:
/*
[1. Initializing array]       
Enter the size of your array: 3
Enter the value of index 0 : 1
Enter the value of index 1 : 2
Enter the value of index 2 : 3

----------------

Your array: 1 2 3 

Choose any option:
        1 for INSERT a new element
        2 for DELETE an element   
        3 for UNDO last operation 
        4 for QUIT
Your choice: 1

[2. Inserting new element]
Enter the value you want to insert: 7

----------------

Your array: 1 2 3 7

Choose any option:
        1 for INSERT a new element
        2 for DELETE an element
        3 for UNDO last operation
        4 for QUIT
Your choice: 2

[3. Deleting an element]
Enter the value you want to delete: 2

----------------

Your array: 1 3 7

Choose any option:
        1 for INSERT a new element
        2 for DELETE an element
        3 for UNDO last operation
        4 for QUIT
Your choice: 3

----------------

Your array: 1 2 3 7

Choose any option:
        1 for INSERT a new element
        2 for DELETE an element
        3 for UNDO last operation
        4 for QUIT
Your choice: 4
*/