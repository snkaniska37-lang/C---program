#include <iostream>
#define SIZE 5

using namespace std;

class STACK
{
public:
    int arr[SIZE];
    int top;

    STACK();
    int push(int);
    int pop();
    void print();
};

STACK::STACK()
{
    top = -1;
}

int STACK::push(int n)
{
    ++top;
    arr[top] = n;
    return arr[top];
}

int STACK::pop()
{
    int temp;

    temp = arr[top];
    --top;

    return temp;
}

void STACK::print()
{
    int i;

    cout << "Stack Contains: ";

    for (i = top; i >= 0; i--)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    STACK stk;
    int choice, n, t;

    do
    {
        cout << endl;
        cout << "Press the Keys to Perform Stack Operation" << endl;
        cout << "1 - Push." << endl;
        cout << "2 - Pop." << endl;
        cout << "3 - Print." << endl;
        cout << "4 - Exit." << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (stk.top < SIZE - 1)
            {
                cout << "Enter item to insert: ";
                cin >> n;

                t = stk.push(n);

                cout << t << " is Pushed into the Stack" << endl;
            }
            else
            {
                cout << "Error : Stack Overflow" << endl;
                stk.top = SIZE - 1;
            }
            break;

        case 2:
            if (stk.top == -1)
            {
                cout << "Error : Stack Underflow" << endl;
            }
            else
            {
                t = stk.pop();

                cout << t << " is Popped out of the Stack" << endl;
            }
            break;

        case 3:
            if (stk.top == -1)
            {
                cout << "Error : Stack Underflow" << endl;
            }
            else
            {
                stk.print();
            }
            break;

        case 4:
            exit(0);

        default:
            cout << "An Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}