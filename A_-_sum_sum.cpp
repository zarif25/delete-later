#include <bits/stdc++.h>
using namespace std;

// abs function
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  int sum=0;
  for(int i=0; i<n; i++) sum += arr[i];
  cout<<abs(sum)<<'\n';
}

// accumulate function
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  int sum=accumulate(arr, arr+n, 0);
  cout<<abs(sum)<<'\n';
}

// abs and accumulate in one line
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i];
  cout<<abs(accumulate(arr, arr+n, 0))<<'\n';
}