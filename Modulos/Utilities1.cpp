#include "Utilities1.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include <algorithm>
#include <cctype>
#include <string>
#include <string.h>
#include <stack>
#include <vector>



bool palindromeVerification(std::string texto){
  
  bool isPalindrome = false;
  int igual=0, aux=0;
  
  texto.erase(remove(texto.begin(),texto.end(), ' '),texto.end());
  
  for(int i = 0; i < texto.length(); i++){
    texto[i]= tolower(texto[i]);
  }
  
  for(int ind = texto.length() - 1; ind >= 0; ind--) {
      if(texto[ind] == texto[aux]) {
          igual++;
      }
      aux++;
  }
  
  if(texto.length() == igual) {
      isPalindrome = true;
  } else {
      isPalindrome = false;
  }
  
  return isPalindrome;
}

