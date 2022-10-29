#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  char arr[n][m];
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
      cin>>arr[i][j];
  int x,y;
  cin>>x>>y;
  x--,y--;
  int dx[] = {0,0,-1,-1,-1,1,1,1};
  int dy[] = {-1,1,-1,0,1,-1,0,1};
  for(int i=0; i<8; i++) {
    int newx = x+dx[i], newy = y+dy[i];
    if (newx>=0 && newy>=0 && newx<n && newy<m && arr[newx][newy]=='.') {
      cout<<"no\n";
      return 0;
    }
  }
  cout<<"yes\n";
}