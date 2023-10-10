#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   
    
    string fnum, snum;
    cin >> fnum >> snum;
    
    
    sort(fnum.begin(), fnum.end());
    sort(snum.begin(), snum.end());
    
    if (fnum == snum) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}