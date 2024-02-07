#include <iostream>
 
using namespace std;

int main()
{
    string s;
    cin >> s;
    int rep = 1;
    char prev = s[0];
    
    for (int i=1;i < size(s);i++) {
        char n = s[i];
     
        if (prev == n) {
        
            rep++;
 
        }
        else {

            if (rep > 1) {
                cout << prev << rep ;
            }
            else {
                cout << prev;
            }
            rep = 1;
            prev = n;
        }
    }
 
    if (rep > 1) {
        cout  << prev << rep ;
    }
    else {
        cout << prev;
    }
    cout << '\n';
     
  

}