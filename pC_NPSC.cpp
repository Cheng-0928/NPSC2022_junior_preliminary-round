#include <iostream>
#include <algorithm>
#include <string>

#define IO ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

signed main()
{
    IO
    string s[4];
    for(int i = 0;i<4;i++) cin >> s[i];
    bool check = 1;
    if(s[0][0] != 'N') check = 0;
    else if(s[1][0] != 'P') check = 0;
    else if(s[2][0] != 'S') check = 0;
    else if(s[3][0] != 'C') check = 0;
    cout << (check ? "Yes\n" : "No\n");

}
