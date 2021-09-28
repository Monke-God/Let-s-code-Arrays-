#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in your array" << endl;
    cin >> n;
    int *ptr = new int[n];
    cout << "Enter Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    cout << "You Entered" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}
