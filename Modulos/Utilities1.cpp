#include "Utilities1.hpp"

//Activity One
bool palindromeVerificationUsingStack(std::string text){
  
  std::stack<char> stackText;
  bool isPalindrome = false;
  
  text.erase(remove(text.begin(),text.end(), ' '),text.end());

  for(int i = 0; i < text.length(); i++){
    char character = text[i];
   
      text[i] = tolower(text[i]);
      stackText.push(text[i]);
      
    
  }
  

  for(int i = 0; i < text.length(); i++){
    if(text[i] == stackText.top()) {
        stackText.pop();
      }
  }
  
  isPalindrome = stackText.empty();
  
  return isPalindrome;
}

bool recibirPalindromo1(std::string s) {
  // eliminar espacios
  s.erase(remove(s.begin(),s.end(), ' '),s.end());
  // agregar palabra a un vector
  std::vector<char> v;
  int tam = s.size();
  for (int i = 0; i < tam; i++) {
    s[i] = tolower(s[i]);
    v.push_back(s[i]);
  }
  // recorrer con 2 vectores
  std::vector<char>::reverse_iterator rit = v.rbegin();
  std::vector<char>::iterator it = v.begin();
  while (it != v.end()) {
    if (*rit != *it)
      return false;
    it++;
    rit++;
  }
  return true;
}


//Activity Two
int evaluarExpresionPostfija(std::string s) {
  // declarar stack
  std::stack<int> exp;
  // convertir string a char array
  int n = s.length();
  char ca[n + 1];
  strcpy(ca, s.c_str());
  // separar el char array por espacios
  char *ptr;
  ptr = strtok(ca, " ");
  while (ptr != NULL) {
    // si es un operador sacar los dos numeros anteriores y aplicarlo
    if (*ptr == '+' || *ptr == '-' || *ptr == '*' || *ptr == '/') {
      int num1 = exp.top();
      exp.pop();
      int num2 = exp.top();
      exp.pop();
      char op = *ptr;
      switch (op) {
      case '+':
        exp.push(num1+num2);
        break;

      case '-':
        exp.push(num1-num2);
        break;

      case '*':
        exp.push(num1*num2);
        break;

      case '/':
        std::cout<<"operación: "<<num1<<op<<num2<<std::endl;
        break;

      default:
        std::cout << "Error, revise la expresion insertada";
        break;
      }
    }else{ // Si es un numero insertarlo en la pila 
      exp.push(atoi(ptr));
    }
    ptr = strtok(NULL, " ");
  }

  return exp.top();
}

