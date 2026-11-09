#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

class pal
{
public:
    char n1[20], n2[20];
    char *n3;

    void get()
    {
        cout << "\n\t\t\tPALINDROME USING POINTER";
        cout << "\n\n\tEnter the string: ";
        cin >> n1;
    }

    void rev()
    {
        strcpy(n2, n1);

        string n = n2;
        reverse(n.begin(), n.end());

        char *n2 = &n[0];
        n3 = &n[0];
    }

    void cmp()
    {
        if (strcmp(n1, n3) == 0)
            cout << "\n\n\tThe string\t\t" << n1
                 << "\t\tIs a palindrome";
        else
            cout << "\n\n\tThe string\t\t" << n1
                 << "\t\tIs not a palindrome";
    }
};

int main()
{
    char ch = 'y';

    do
    {
        pal p, *k;
        k = &p;

        k->get();
        k->rev();
        k->cmp();

        cout << "\n\n\tDo you want to continue (y/n): ";
        cin >> ch;

    } while (ch == 'y');

    return 0;
}