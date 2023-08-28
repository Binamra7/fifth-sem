#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message;
    int key;
    int i;
    char ch;

    cout << "Enter encrypted message: ";
    cout << "Enter key value: ";
    cin >> key 

    for (i = 0; i < message.length(); i++)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;
            if (ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;
            if (ch < 'A')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }

    cout << "Decrypted message: " << message << endl;

    return 0;
}
