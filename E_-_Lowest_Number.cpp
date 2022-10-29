#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  int index = min_element(arr, arr+n)-arr;
  cout<<arr[index]<<' '<<index+1<<'\n';
}