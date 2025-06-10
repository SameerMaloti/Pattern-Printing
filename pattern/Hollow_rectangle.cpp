#include <iostream>
using namespace std;
int main()
{
   // print this pattern
   //  * * * * *
   //  *       *
   //  * * * * *    
    int n, m,j;

    cout << "Enter number of rows : ";
    cin >> n;
    cout << "Enter number of coloms : ";
    cin >> m;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)   
        {
            if (i == 1 || i == n - 1 || j==1 || j == m - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}