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
    for(int i=0; i<n; i++) {
      int local_max=arr[i];
      for(int j=i;j<n;j++) {
        local_max=max(local_max,arr[j]);
        cout<<local_max<<" ";
      }
    }
    cout<<'\n';
  }
}