#include <iostream>
using namespace std;

// https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z

void pattern_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern_3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern_4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern_5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_6(int n)
{
    for (int i = n; i > 0; i--)
    {
        int k = 0;
        for (int j = i; j > 0; j--)
        {
            k = k + 1;
            cout << k;
        }
        cout << endl;
    }
}

void pattern_7(int n)
{
}

int main()
{
    pattern_1(5);
    cout << endl;

    pattern_2(5);
    cout << endl;

    pattern_3(5);
    cout << endl;

    pattern_4(5);
    cout << endl;

    pattern_5(5);
    cout << endl;

    pattern_6(5);
    cout << endl;

    pattern_7(9);
    cout << endl;

 
    return 0;
}