#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;

    cout << "Enter the side of trianle: " << endl;
    cin >> n;

    // print this pattern

    //    1 2 3 4 5
    //  1 * * * * *
    //  2 * * * *
    //  3 * * *
    //  4 * *
    //  5 *

    for (int i = 4; i >=n; i--)
    {
        {
            for (int j = 1; j <=i; j++)
                cout << i <<" ";
        }
        cout << endl;
    }
}