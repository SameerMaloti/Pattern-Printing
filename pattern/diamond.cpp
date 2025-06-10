#include <iostream>
using namespace std;
int main()
{
  //   
//       * 
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
    int n;
    int j;

    cout << "Enter the side  : " << endl;
    cin >> n;
    // print this pattern
    //
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

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