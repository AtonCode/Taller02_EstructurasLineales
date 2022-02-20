#include <iostream>
#include <stdio.h>

#include "Modulos/Utilities1.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
  string text = " "; 
  bool isPalindrome = false;
  cin>>text;
  
  isPalindrome = palindromeVerificationUsingStack(text);
  //isPalindrome = recibirPalindromo1(text);
  cout<<isPalindrome<<endl;
  

  return 0;
}
