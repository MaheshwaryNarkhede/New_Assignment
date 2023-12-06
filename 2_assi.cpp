#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool equal(const string& str1, const string& str2) {
  return str1 == str2;
}


void copy(string& dest, const string& src) {
  dest = src;
}

string concat(const string& str1, const string& str2) {
  return str1 + str2;
}

void display(const string& str) {
  cout << str << endl;
}

string reverse(string& str) {
  reverse(str.begin(), str.end());
  return str;
}


bool isPalindrome(const string& str) {
  string temp = str;
  reverse(temp.begin(), temp.end());
  return str == temp;
}

// Function to find the number of occurrences of a substring
int findSubstrOccurrences(const string& str, const string& substr) {
  int count = 0;
  size_t pos = 0;
  while ((pos = str.find(substr, pos)) != string::npos) {
    count++;
    pos++;
  }
  return count;
ostream& operator<<(ostream& os, const string& str) {
  os << str;
  return os;
}
bool operator==(const string& str1, const string& str2) {
  return str1.compare(str2) == 0;
}

int main() {
  string str1 = "Hello World!";
  string str2 = "Hi!";
  string subStr = "llo";

  cout << "String 1: " << str1 << endl;
  cout << "String 2: " << str2 << endl;
  if (equal(str1, str2)) {
    cout << "Strings are equal" << endl;
  } else {
    cout << "Strings are not equal" << endl;
  }

  copy(str2, str1);
  cout << "Copied string: " << str2 << endl;
  string str3 = concat(str1, "!");
  cout << "Concatenated string: " << str3 << endl;
  reverse(str2);
  cout << "Reversed string: " << str2 << endl;

  if (isPalindrome(str1)) {
    cout << "String is a palindrome" << endl;
  } else {
    cout << "String is not a palindrome" << endl;
  }
  int occurrences = findSubstrOccurrences(str1, subStr);
  cout << "Substring '" << subStr << "' occurs " << occurrences << " times" << endl;

  
  cout << str1 << " == " << str2 << "? " << (str1 == str2) << endl;
  cout << "Output using overloaded <<: " << str1 << endl;

  return 0;
}
