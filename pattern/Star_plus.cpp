#include <iostream>
using namespace std;
int main()
{
    int n;
Sherr:
    cout << "Enter number of rows : ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Invalid input,pls enter an odd number!" << endl;
        goto Sherr;
    }
    int mid = n / 2 + 1;
    
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == mid || j == mid)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }

    return 0;
}