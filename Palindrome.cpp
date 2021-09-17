#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char str[80];
  char input[80];
  cout << "Please enter a string!" << endl;
  cin >> input >> endl;
  int count = 0;
  for(int i = 0; i<80, i++;)
    {
    if(ispunct(input[i]) == 0)
      {
	 remove(begin(str), end(str), input[i]);
      }
    if (isalpha(input[i]) || isdigit(input[i]))
     {
    str[count] = input[i];
    count++;
     }
      else
	{
	  cout << "Please enter only numbers or letters." << endl;
	}
    }
    //https://www.geeksforgeeks.org/remove-spaces-from-a-given-string/
  reverse(begin(str), end(str));
  if(strcmp(str, input) == 0)
    {
      cout << "Palindrome" << endl;
    }
  else
    {
      cout << "Not a Palindrome" << endl;  
    }
    input[count] = '\0';
  return 0;
  }
