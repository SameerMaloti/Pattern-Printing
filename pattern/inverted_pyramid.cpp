#include <iostream>
using namespace std;
int main()
{
    int n;
    int j;

    cout << "Enter the side of trianle : " << endl;
    cin >> n;
    

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k < (2 * i - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}