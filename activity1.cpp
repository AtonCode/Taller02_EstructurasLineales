#include <iostream>
#include <stdio.h>
#include <string.h>

#include "Modulos/Utilities1.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
  string texto = " "; 
  int igual=0, aux=0;
  cin>>texto;
    
  for(int ind = texto.length() - 1; ind >= 0; ind--) {
      if(texto[ind] == texto[aux]) {
          igual++;
        
      }
      aux++;
  }
    
  if(texto.length() == igual) {
      cout << "La palabra ingresada es palindromo!! :D" << endl;
  } else {
      cout << "La palabra ingresada no es palindromo!! :D" << endl;
  }
  
    
  
  
  
  return 0;
}
