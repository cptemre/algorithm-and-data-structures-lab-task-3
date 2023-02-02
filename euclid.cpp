#include <iostream>
using namespace std;

int calculation(int a, int b, int result) {
    if (a > b)
    {
        result = a - b;
    }
    else if (a < b) {
        result = b - a;
    }
    else {
        result = a;
    }
    return result;
}

int main()
{
    int result = 0;
    int a, b;
    cout << "Enter value 'a'\n";
    cin >> a;
    cout << "Enter value 'b'\n";
    cin >> b;
    cout << calculation(a, b, result);
}
