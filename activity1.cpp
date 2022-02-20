#include <iostream>
#include <stdio.h>

#include "Modulos/Utilities1.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
  string texto = " "; 
  bool isPalindrome = false;
  cin>>texto;
  isPalindrome = palindromeVerification(texto);
  cout<<isPalindrome<<endl;
  

  return 0;
}
