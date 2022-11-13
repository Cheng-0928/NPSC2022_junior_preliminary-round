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
    int ans = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(j < 10) ans+= (i * 10 + j);
            else if(j < 100 && j >= 10) ans += (i * 100 + j);
            else ans+= (i * 1000 + j);
        }
    }
    cout << ans << '\n';

}
