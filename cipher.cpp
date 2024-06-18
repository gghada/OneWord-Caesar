#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int shift)
{
    string output = "";

    for (int i = 0; i < text.length(); i++)
    {

        if (isupper(text[i]))
        {
            output += char(int(text[i] + shift - 65) % 26 + 65);
        }
        else if (text[i] == ' ')
        {
            output += ' ';
        }
        else
        {
            output += char(int(text[i] + shift - 97) % 26 + 97);
        }
    }

    return output;
}

string decrypt(string texte, int shifte)
{
    string outout = "";

    for (int i = 0; i < texte.length(); i++)
    {
        if (isupper(texte[i]))
        {
            outout += char(int(texte[i] - shifte - 65) % 26 + 65);
        }
        else if (texte[i] == ' ')
        {
            outout += ' ';
        }
        else
        {
            outout += char(int(texte[i] - shifte - 97) % 26 + 97);
        }
    }

    return outout;
}

int main()
{

    string text;
    int shift;
    int choise;

    cout << "Choose operation: \n 1: Encryption \n 2: Decryption \n";
    cin >> choise;

    if (choise == 1)
    {
        cout << "Type text to encrypt: ";
        cin >> text;
        cout << "Choose your key (shift value from 0 to 25): ";
        cin >> shift;

        cout << "Original text: " << text << "\n";
        cout << "Key: " << shift << "\n";
        cout << "Cipher: " << encrypt(text, shift) << "\n";
    }

    else
    {
        cout << "Type text to decrypt: ";
        cin >> text;
        cout << "Choose your key (shift value from 0 to 25): ";
        cin >> shift;

        cout << "Original text: " << text << "\n";
        cout << "Key: " << shift << "\n";
        cout << "Cipher: " << decrypt(text, shift) << "\n";
    }

    return 0;
}
