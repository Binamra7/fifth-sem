#include<bits/stdc++.h>

using namespace std;

string encrypt(string text,int key)
{
  string cipher;
  for(int i=0;i<text.length();i++)
  {
    if(!isalpha(text[i]))
    {
      cipher += text[i];
      continue;
    }
    if(isupper(text[i]))
    {
      cipher += char(int(text[i]+key-65)%26 +65);
    }
    else
    {
      cipher += char(int(text[i]+key-97)%26 +97);
    }
  }
 return cipher;
}

int main()
{
  string text, cipher;
  int key;
  cout<<"Enter the text to encrypt: ";
  getline(cin,text);
  cout<<"Enter the key: ";
  cin>>key;
  cipher = encrypt(text,key);
  cout<<"The cipher text is: "<<endl<<cipher<<endl;
  return 0;
}
