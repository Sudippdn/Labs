#include <iostream>
#include <string>
//#include <ctype>

using namespace std;

char shiftChar(char c, int shift, bool encrypt) {
  // Check for uppercase and lowercase alphabets
  if (isalpha(c)) {
    int base = isupper(c) ? 'A' : 'a';
    // Handle wrapping around the alphabet
    int newChar = c + (encrypt ? shift : -shift);
    return (char)((newChar - base + 26) % 26 + base);
  }
  // Keep non-alphabetic characters unchanged
  return c;
}

string caesarCipher(string text, int shift, bool encrypt) {
  string result;
  for (int i = 0; i < text.length(); ++i) {
    result += shiftChar(text[i], shift, encrypt);
  }
  return result;
}

int main() {
  string message;
  int shift;
  bool encrypt;

  cout << "Enter message: ";
  getline(cin, message);

  cout << "Enter shift value (positive for encryption, negative for decryption): ";
  cin >> shift;

  cout << "Encrypt (true) or Decrypt (false)? ";
  cin >> encrypt;

  string result = caesarCipher(message, shift, encrypt);
  cout << (encrypt ? "Encrypted" : "Decrypted") << " message: " << result << endl;

  return 0;
}

