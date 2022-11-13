#include <iostream>
#include <algorithm>
#include <string>

#define IO ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

signed main()
{
    IO
    int n,m;
    cin >> n >> m;
    int g[m+1] = {0};
    while(n--){
        int a,b;
        cin >> a >> b;
        g[a]+=b;
    }
    int ans = -1, v;
    for(int i = 1;i<=m;i++){
        if(g[i] >= ans){
            ans = g[i];
            v = i;
        }
    }
    cout << v << '\n';

}
