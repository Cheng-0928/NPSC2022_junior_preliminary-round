#include <iostream>
#include <vector>
using namespace std;

vector<int> mergesort(vector<int> v){
  int n = v.size();
  
  if(n == 1) return v;
  
  vector<int> left, right;
  for(int i = 0;i < n;i++){
    if(i < n/2) left.push_back(v[i]);
    else right.push_back(v[i]);
  }
  left = mergesort(left);right = mergesort(right);
  vector<int> sorted;
  int ltpr = 0, rtpr = 0;
  string s;
  while(ltpr < left.size() && rtpr < right.size()){
    cout << 2 << ' ';
    cout << left[ltpr] << ' ' << right[rtpr] << endl;
    cin >> s;
    if(s == "Nie"){
      sorted.push_back(right[rtpr]);
      rtpr++;
    }
    else{
      sorted.push_back(left[ltpr]);
      ltpr++;
    }
  }
  
  while(ltpr < left.size()){
    sorted.push_back(left[ltpr]);
    ltpr++;
  }
  
  while(rtpr < right.size()){
    sorted.push_back(right[rtpr]);
    rtpr++;
  }
  return sorted;
}

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);
    string s;
    for(int i = 0;i<n;i++) v[i] = i+1;
    if(n == 1){
      cout << 1 << ' ' << 1 <<'\n' << flush;
      cin >> s;
    }
    else if(n == 2){
      cout << 2 << ' ' << 1 << ' ' << 2 <<  '\n' << flush;
      cin >> s;
      if(s != "Gotowe"){
        cout << 2 << ' ' << 2 << ' ' << 1 <<  '\n' << flush;
        cin >> s;
      }
    }
    else{
      v = mergesort(v);
      cout << n << ' ';
      for(int i = 0;i < n;i++){
          cout << v[i];
          if(i != n-1) cout << ' ';
          else cout <<  '\n' << flush;
      }
      cin >> s;
    }
    
  return 0;
}
