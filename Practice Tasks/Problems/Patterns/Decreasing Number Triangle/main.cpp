#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 4; i++)
    // {
    //     int count = 0;
    //     for (int j = 4; j >= i; j--)
    //     {
    //         count++;
    //         cout << count << " ";
    //     }
    //     cout << endl;
    // }

    // // --------X--------X--------X--------

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}