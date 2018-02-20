#include <iostream>
using namespace std;
int main()
{
char c;
int Low, Up;
cout << "Enter an alphabet: ";
cin >> c;
Low = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
Up = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (Low || Up)
cout << c << " is a vowel";
else
cout << c << " is a consonant";
return 0;
}