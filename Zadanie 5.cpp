#include <iostream>
using namespace std;
int main()
{
    cout << "Od 1 do 100" << endl;
    for (int i = 1; i <= 100; i++)
        cout << i << " " << endl;

    cout << "Od 100 do 1 : " << endl;
    for (int i = 100; i >= 1; i--)
        cout << i << " " << endl;
    cout << "7,14,21...77: ";
    for (int i = 0; i < 12; i++) {
        cout << i * 7 << " "<<endl;
    }

        cout << "20, 18,..., 2, 0" << endl;
        for (int i = 20; i >= 0; i--)
            cout << i - 2 << " " << endl;
    }
