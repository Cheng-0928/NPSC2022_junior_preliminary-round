#include <iostream>
#include <algorithm>
#include <vector>

#define IO ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

signed main()
{
    IO
    int card[4][10] = {0}; // mzps
    int q = 13;
    while(q--){
        int n;
        char ty;
        cin >> n >> ty;
        if(n == 0) n=5;
        if(ty == 'm') card[0][n]++;
        if(ty == 'z') card[1][n]++;
        if(ty == 'p') card[2][n]++;
        if(ty == 's') card[3][n]++;
    }

    int more = 0, re = 0;
    for(int i = 1;i<10;i++){
        for(int j = 0;j<4;j++){
            if(card[j][i] > 2) re+=(card[j][i] - 2);
            else if(card[j][i] < 2) more+= card[j][i];
        }
    }

    cout << re + (more >= re ? (more - re) / 2 : 0) << '\n';

}
