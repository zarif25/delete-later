#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  int min_elem = *min_element(arr, arr+n);
  int cnt = count(arr, arr+n, min_elem);
  if(cnt&1) cout<<"Lucky\n";
  else cout<<"Unlucky\n";
}