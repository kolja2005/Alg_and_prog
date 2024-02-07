
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if (abs(b - a) < abs(c - a)) {
        cout << "B " << abs(b - a);
    } else {
        cout << "C " << abs(c - a);
    }
    return 0;
}