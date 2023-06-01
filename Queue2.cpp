#include<iostream>
using namespace std;

int que[50], size, head=0, tail=0;

void push();
void showOption();
void pop();

void pritnQ()
{
    if(head < tail)
    {
        cout << "\nYour queue is : ";

        for(int i = head; i < tail; i++)
        {
            cout << " | " << que[i] << " | ";
        }

    }

    showOption();
}

void push()
{
    if(tail < size)
    {
        int newVal;
        cout << "\nNew value: ";
        cin >> newVal;
        que[tail] = newVal;
        tail++;
    }
    else
    {
        cout << "\nOverflow.";
    }


    showOption();
}

void pop()
{
    if(head < tail)
    {
        head++;
        cout << "\nFirst item popped";
        size++;
    }
    else
    {
        cout << "\nUnderflow";
    }

    showOption();
}

void showOption()
{
    int sp;

    cout << "\nChoose option:";
    cout << "\n1. Push";
    cout << "\n2. Pop";
    cout << "\n3. Print\n";
    cout << "\n4. Exit";
    cout << "\nWrite: ";
    cin >> sp;

    if(sp == 1)
    {
        push();
    }
    else if(sp == 2)
    {
        pop();
    }
    else if(sp == 3)
    {
        pritnQ();
    }

}

int main()
{

    cout << "Size of the queue: ";
    cin >> size;

    showOption();

    return 0;
}
