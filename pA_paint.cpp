#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int n;
  cin >> n;
  string s[n];
  for(string &c : s) cin >> c;
  if(n == 1){
    for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++) cout << s[i][j];
      cout << '\n';
    }
    return 0;
  }
  if(n == 3){
      for(int i = 0;i<n;i+=2){
        for(int j = 0;j<n;j++){
          if(s[i][j] != '.') continue;
          s[i][j] = 'O';
      }
    }
    for(int i = 0;i<n;i++){
      if(s[i][n-1] != '.') continue;
      s[i][n-1] = 'O';
    }
    for(int i = 0;i<n;i++){
      for(int j = 0;j<n;j++) cout << s[i][j];
      cout << '\n';
    }
    return 0;
  }
  for(int i = 0;i<n;i+=3){
    for(int j = 0;j<n;j++){
      if(s[i][j] != '.') continue;
      s[i][j] = 'O';
    }
  }
  
  for(int i = 0;i<n;i++){
    if(s[i][n-1] != '.') continue;
    s[i][n-1] = 'O';
    
  }
  if(!(n%3)){
    for(int i = 0;i<n;i++){
      if(s[n-1][i] != '.') continue;
      s[n-1][i] = 'O';
    }
  }
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++) cout << s[i][j];
    cout << '\n';
  }
  return 0;
}
