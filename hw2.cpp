//adding two very large numbers using strings
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
  string num1, num2;  //string is used to process integers larger than 10 digits and characters all together instead of seperate
  char opr; //char just means character which is what we are inputting
  cout << "Enter two integers larger than 10 digits : "; // meaning on the display it'll show "Enter....."
  cin >> num1; //you would input num1
  cout <<"num 2: " << endl; //the display will tell you enter num2
  cin >> num2; // you would input num2

  int num1len = num1.length(); //stating another shortcut
  int num2len = num2.length(); //simply stating a shortcut

  char char_array1[num1len+1];  // created the character array for num1
  strcpy(char_array1, num1.c_str()); // used to convert each element from the character array into a string

  char char_array2[num2len+1];  // created the character array for num2
  strcpy(char_array2, num2.c_str()); // converts each element from the character array to a string

  int carry = 0;

 for (int i=0; i<num1.length(); i=i+1) // int i=0 means that it starts at 0, i<num1 means that its smaller than that, i=i+1 makes it into the value of num1.length
{
   cout << (int)char_array1[i] + (int)char_array2[i] -96 << endl; //48 is the magic number thats 0 in ascii, 49 is 1, 50 is 2, and so on ...
}
  return 0;

}
