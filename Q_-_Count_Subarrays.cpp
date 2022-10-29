#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int tc=0; tc<t; tc++) {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    long long res=0;
    for(int i=0; i<n;) {
      int j=1;
      while(i+j<n && arr[i+j-1]<=arr[i+j]) j++;
      res += 1ll*j*(j+1)/2;
      i+=j;
    } 
    cout<<res<<'\n';
  }
}