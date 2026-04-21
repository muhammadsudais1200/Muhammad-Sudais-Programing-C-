#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0 && num < 100)
        cout << "Number is greater than 0 AND less than 100";

    else
        cout << "Condition is not satisfied";

    return 0;
}
