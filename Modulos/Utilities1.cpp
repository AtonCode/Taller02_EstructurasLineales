#include "Utilities1.hpp"

//Activity One
//Complejidad O(n)
bool palindromeVerificationUsingStack(std::string text){
  
  std::stack<char> stackText;// 1
  bool isPalindrome = false; // 1
  
  //text.erase(remove(text.begin(),text.end(), ' '),text.end()); //O(n)

  for(int i = 0; i < text.length(); i++){ //n
    char character = text[i];             //n
      if (text[i] != ' '){                //n
        text[i] = tolower(text[i]);       //n
        stackText.push(text[i]);          //n
     }
    
  }

  for(int i = 0; i < text.length(); i++){  //n
    if(text[i] == stackText.top()) {       //n
        stackText.pop();                   //n
      }
  }
  
  isPalindrome = stackText.empty();        // 1
  
  return isPalindrome;                     // 1
}


//Complejidad O(n)
bool recibirPalindromo1(std::string s) {
  // eliminar espacios
  //s.erase(remove(s.begin(),s.end(), ' '),s.end()); //O(n)
  // agregar palabra a un vector
  std::vector<char> v;                                   //1
  int tam = s.size();                                    //1
  for (int i = 0; i < tam; i++) {                        //n
    s[i] = tolower(s[i]);                                //n
    if (text[i] != ' '){                                 //n
      v.push_back(s[i]);                                 //n
    }
  }
  // recorrer con 2 vectores
  std::vector<char>::reverse_iterator rit = v.rbegin();  //1
  std::vector<char>::iterator it = v.begin();            //1
  while (it != v.end()) {                                //n
    if (*rit != *it)                                     //n
      return false;                                      //n   
    it++;                                                //n
    rit++;                                               //n
  }
  return true;                                           //1
}


//Activity Two
//Complejidad O(n) ||  O(?)
int evaluarExpresionPostfija(std::string s) {
  // declarar stack
  std::stack<int> exp;                          //1
  // convertir string a char array
  int n = s.length();                           //1
  char ca[n + 1];                               //1
  strcpy(ca, s.c_str());                        //?
  // separar el char array por espacios
  char *ptr;                                    //n
  ptr = strtok(ca, " ");                        //n
  while (ptr != NULL) {                         //n
    // si es un operador sacar los dos numeros anteriores y aplicarlo
    if (*ptr == '+' || *ptr == '-' || *ptr == '*' || *ptr == '/') {//n
      int num1 = exp.top();//n
      exp.pop();//n
      int num2 = exp.top();//n
      exp.pop();//n
      char op = *ptr;//n
      switch (op) {
      case '+':
        exp.push(num1+num2);//n
        break;

      case '-':
        exp.push(num1-num2);//n
        break;

      case '*':
        exp.push(num1*num2);//n
        break;

      case '/':
        std::cout<<"operación: "<<num1<<op<<num2<<std::endl;//n
        break;

      default:
        std::cout << "Error, revise la expresion insertada";
        break;
      }
    }else{ // Si es un numero insertarlo en la pila 
      exp.push(atoi(ptr));                            //n
    }
    ptr = strtok(NULL, " ");                          //n
  }

  return exp.top();                                   //1
}

