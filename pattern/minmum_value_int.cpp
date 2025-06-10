#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    cout<<"Select cjoices";
    

    int a;
    int b = sizeof(a);
    cout << "Total memory comsumed by integer is " << b << " byte" << endl;

    int noBit = b * 8;
    cout << "Total number of bit is " << noBit << " bit" << endl;

    long Totalvalues = pow(2, noBit);
    cout << "Total value it can hold is " << Totalvalues << endl;

    long double min = 0, max = Totalvalues - 1;
    cout << "The minimum value of unsigned number is " << min << endl;
    cout << "The maximum value of unsigned number is " << max << endl;
    return 0;
}