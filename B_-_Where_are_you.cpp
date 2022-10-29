#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  int x;
  cin>>x;
  int index = find(arr,arr+n,x)-arr;
  if (index == n) index = -1;
  cout<<index<<'\n';
}