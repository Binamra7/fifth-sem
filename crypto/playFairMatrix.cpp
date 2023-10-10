#include<bits/stdc++.h>

using namespace std;

bool checkIfExists(string matrix, char c)
{
  for(auto s:matrix)
    if(s==c) return true;
  return false;
}

int main()
{
  string key, matrix;
  cout<<"Enter key: ";
  cin>>key;
  for(int i=0;i<key.length();i++)
  {
    if(matrix.length()>=25) break;
    if(checkIfExists(matrix,toupper(key[i]))) continue;
    matrix+=toupper(key[i]);
  }
  
  for(int i=0;i<25;i++)
  {
    if(matrix.length()>=25) break;
    if(checkIfExists(matrix, char(65+i))) continue;
    matrix+=char(65+i);
  }
  int count = 0;
  for(int i=0;i<25;i++){
     if(count==5) {
      count = 0;
      cout<<endl;
    }
    count++;
    cout<<matrix[i]<<" ";
  }

}
