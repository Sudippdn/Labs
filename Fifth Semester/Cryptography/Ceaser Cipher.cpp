#include <iostream>
#include <cctype>
#include <string>
#define MAX_SIZE 500
using namespace std;

void encrypt() {
    string text;
    char ch;
    int key;

    cout << "Enter a message to encrypt: ";
    cin >> text;
    
    cout << "Enter the key: ";
    cin >> key;

    for (int i = 0; i < text.size(); ++i) {
        ch = text[i];

        if (isalnum(ch)) {
            if (islower(ch)) {
                ch = (ch - 'a' + key) % 26 + 'a';
            } else if (isupper(ch)) {
                ch = (ch - 'A' + key) % 26 + 'A';
            } else if (isdigit(ch)) {
                ch = (ch - '0' + key) % 10 + '0';
            }
        }  else {
            cout << "Invalid Message";
            return;
        }
        text[i] = ch;
    }

    cout << "Encrypted message: " << text << endl;
}

void decrypt() {
    string text;
    char ch;
    int key;

    cout << "Enter a message to decrypt: ";
    cin >> text;

    cout << "Enter the key: ";
    cin >> key;

    for (int i = 0; i < text.size(); ++i) {
        ch = text[i];

        if (isalnum(ch)) {
            if (islower(ch)) {
                ch = (ch - 'a' - key + 26) % 26 + 'a';
            } else if (isupper(ch)) {
                ch = (ch - 'A' - key + 26) % 26 + 'A';
            } else if (isdigit(ch)) {
                ch = (ch - '0' - key + 10) % 10 + '0';
            }
        }  else {
            cout << "Invalid Message";
            return;
        }
        text[i] = ch;
    }

    cout << "Decrypted message: " << text << endl;
    cout << "\n\n\t\tSudip Pradhan" << endl;
}

int main() {
    encrypt();
    decrypt();

    return 0; 
}

