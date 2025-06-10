#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the side of square : " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(i + 64) << " ";
        }
        cout << endl;
    }
    int m;
    cout << "Enter the sdie of square : " << endl;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << (char)(i + 96) << " ";
        }
        cout << endl;
    }
    return 0;
}