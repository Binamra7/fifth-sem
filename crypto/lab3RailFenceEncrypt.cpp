#include<bits/stdc++.h>

using namespace std;

int main()
{
  // implement rainbow table
  int key;
  string plainText;
  cout << "Enter the key: ";
  cin >> key;
  cout << "Enter the plain text: ";
  cin >> plainText;
  int len = plainText.length();
  int railMatrix[key][len];
  for(int i = 0; i < key; i++)
  {
    for(int j = 0; j < len; j++)
    {
      railMatrix[i][j] = 0;
    }
  }
  bool dirDown = false;
  int row = 0, col = 0;
  for(int i = 0; i < len; i++)
  {
    if(row == 0 || row == key - 1)
    {
      dirDown = !dirDown;
    }
    railMatrix[row][col++] = 1;
    dirDown ? row++ : row--;
  }
  int index = 0;
  for(int i = 0; i < key; i++)
  {
    for(int j = 0; j < len; j++)
    {
      if(railMatrix[i][j] == 1)
      {
        railMatrix[i][j] = plainText[index++];
      }
    }
  }
  string cipherText;
  row = 0, col = 0;
  for(int i = 0; i < len; i++)
  {
    if(row == 0 || row == key - 1)
    {
      dirDown = !dirDown;
    }
    cipherText.push_back(railMatrix[row][col++]);
    dirDown ? row++ : row--;
  }
  cout << "Cipher Text: " << cipherText << endl;
  return 0;
}
