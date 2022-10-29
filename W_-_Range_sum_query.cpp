#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin>>n>>q;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  int pf[n+1];
  pf[0] = 0;
  partial_sum(arr, arr+n, pf+1);
  for(int qq=0; qq<q; qq++) {
    int l,r;
    cin>>l>>r;
    cout<<pf[r]-pf[l-1]<<'\n';
  }
}