//This code reads in an input from the user, and states if it is a Palindrome or not.
//Author: Jeffrey Teh
//Date:9/21/21
  #include <iostream>
  #include <cstring>

  using namespace std;
//Main Method
  int main()
  {
    //Initializing arrays and reading in input
    char reverse[80];
    char input[80];
    char str[80];
    memset(input, 0, 80);
	  memset(reverse, 0, 80);
    memset(str, 0, 80);
	for(int i=0; i < 80; i++){
  str[i] = '\0';
    }
    
    cout << "Please enter a string!" << endl;
    cin.get(input, 80 , '\n');
    cin.get();
    int length = strlen(input);
    int a = 0;
    //Removing spaces and punctuation
    //Credit to http://www.cplusplus.com/forum/beginner/141786/
    for(int i=0; i <strlen((input)); i++){
      if (input[i] != ' ' && isalnum(input[i]) != 0)
	{
		str[a] = tolower(input[i]);
	}
	else
	a--;
	a++;
    }
    int length2 = strlen(str);
    int j = 0;
    //Reversing the string
    for (int k = strlen(str) - 1; k >= 0; k--) {
      reverse[j] = str[k];
      j++;
    }
	reverse[length2] = '\0';
	str[length2] = '\0';
    //Checking to see if it's a Palindrome
         if(strcmp(reverse, str) == 0){
          cout << "Palindrome" << endl;
          }
        else
          {
        cout << "Not a Palindrome" << endl;
          }    
    return 0;
  }
