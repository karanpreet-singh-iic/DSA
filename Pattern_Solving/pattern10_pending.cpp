#include <iostream>
using namespace std;
/*
1
23
456
78910
do this without using 3rd element

*/

int main()
{

    int n, i = 1;
    cout << "enter a value for n ";
    cin >> n;

    while (i <= n)
    {

        int j = 1;

        while (j <= i)
        {
            cout << i + j - 1;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}
