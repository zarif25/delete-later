#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  int max_index = max_element(arr, arr+n)-arr;
  int min_index = min_element(arr, arr+n)-arr;
  swap(arr[min_index], arr[max_index]);
  for(int i=0; i<n; i++) cout<<arr[i]<<' ';
  cout<<'\n';
}