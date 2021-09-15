#Include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char str[81];
  char input[81];
  cout << "Please enter a string!" << endl;
  cin >> input;
  int count = 0;
  for(int i = 0; i<80, i++){
    if (isalpha(input[i]) || isdigit(input[i]){
    str[count] = input[i];
      count++
     }
      else
	{
	  cout << "Please enter only numbers or letters." << endl;
	}
      }
  reverse(str.begin(), str.end());
    return 0;
  }

