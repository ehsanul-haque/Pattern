#include <iostream>
using namespace std;

int main()
{

    int n, row, col;

    cout << "Enter number of rows: ";
    cin >> n;

    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            cout << row;
        }
        cout << endl;
    }
    return 0;
}