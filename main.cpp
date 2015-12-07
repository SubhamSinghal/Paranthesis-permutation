#include <iostream>

using namespace std;

int n = 6;
char x[7];

void printSol();
void getSol(int i, int leftRem, int rightRem)
{
    if(i == n)
        printSol();

    if(leftRem > 0)
    {
            x[i] = '(';
            getSol(i + 1, leftRem - 1, rightRem);
    }

    if(rightRem > leftRem)
    {
        x[i] = ')';
        getSol(i + 1, leftRem, rightRem - 1);
    }
}

void printSol()
{
    int i;
    for(i = 0; i < 6; i++)
    {
        cout << x[i] << " ";

    }
    cout << endl;
}

int main()
{
    getSol(0, 3, 3);
    return 0;
}
