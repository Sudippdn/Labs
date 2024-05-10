#include <iostream>
#include <string>
#include <vector>

using namespace std;

string encrypt(string plaintext, int key) {
  int len = plaintext.length();

  // Create a 2D vector to represent the rail fence matrix with padding characters
  vector<vector<char> > rail(key, vector<char>(len, '\n'));

  // Flag for direction
  bool dir_down = false;
  int row = 0, col = 0;

  // Fill the matrix with the plaintext in a zig-zag pattern
  for (int i = 0; i < plaintext.length(); ++i) {
    if (row == 0 || row == key - 1) {
      dir_down = !dir_down;
    }
    rail[row][col] = plaintext[i];
    col++;
    if (dir_down) {
      row++;
    } else {
      row--;
    }
  }

  // Read the encrypted message row-wise
  string result;
  for (int i = 0; i < key; i++) {
    for (int j = 0; j < len; j++) {
      if (rail[i][j] != '\n') {
        result += rail[i][j];
      }
    }
  }

  return result;
}

string decrypt(string ciphertext, int key) {
  int len = ciphertext.length();

  // Create a 2D vector to represent the rail fence matrix with padding characters
  vector<vector<char> > rail(key, vector<char>(len, '\n'));

  // Flag for direction (initially unknown)
  bool dir_down = false;
  int row = 0, col = 0;

  // Mark the places with '*' to identify positions for decryption
  for (int i = 0; i < len; i++) {
    if (row == 0) {
      dir_down = true;
    }
    if (row == key - 1) {
      dir_down = false;
    }
    rail[row][col] = '*';
    col++;
    if (dir_down) {
      row++;
    } else {
      row--;
    }
  }

  // Fill the matrix with ciphertext characters based on the marked positions
  int index = 0;
  for (int i = 0; i < key; i++) {
    for (int j = 0; j < len; j++) {
      if (rail[i][j] == '*' && index < len) {
        rail[i][j] = ciphertext[index];
        index++;
      }
    }
  }

  // Read the decrypted message in zig-zag manner
  string result;
  row = 0;
  col = 0;
  for (int i = 0; i < len; i++) {
    if (row == 0) {
      dir_down = true;
    }
    if (row == key - 1) {
      dir_down = false;
    }
    if (rail[row][col] != '*') {
      result += rail[row][col];
      col++;
    }
    if (dir_down) {
      row++;
    } else {
      row--;
    }
  }

  return result;
}

int main() {
  string plaintext, ciphertext;
  int key;

  cout << "Enter the plaintext without spaces: ";
  getline(cin, plaintext);

  cout << "Enter the key: ";
  cin >> key;

  ciphertext = encrypt(plaintext, key);
  cout << "\nCipher Text is: " << ciphertext << endl;

  plaintext = decrypt(ciphertext, key);
  cout << "\nPlain Text is: " << plaintext << endl;

  return 0;
}

