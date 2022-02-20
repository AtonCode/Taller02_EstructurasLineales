#include <algorithm>
#include <cctype>
#include <iostream>
#include <stack>
#include <string.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

bool recibirPalindromo1(string s) {
  // eliminar espacios
  // s.erase(remove(s.begin(),s.end(), ' '),s.end());
  // agregar palabra a un vector
  vector<char> v;
  int tam = s.size();
  for (int i = 0; i < tam; i++) {
    s[i] = tolower(s[i]);
    if (s[i] != ' ')
      v.push_back(s[i]);
  }
  // recorrer con 2 vectores
  vector<char>::reverse_iterator rit = v.rbegin();
  vector<char>::iterator it = v.begin();
  while (it != v.end()) {
    if (*rit != *it)
      return false;
    it++;
    rit++;
  }
  return true;
}
bool recibirPalindromo2(string s) {
  // eliminar espacios
  //s.erase(remove(s.begin(),s.end(), ' '),s.end());
  // anadir a 2 pilas
  stack<char> q1;
  stack<char> q2;
  int tam = s.size();
  string r ;
  for (int i = 0; i < tam; i++) {
    s[i] = tolower(s[i]);
    if (s[i] != ' '){
      q1.push(s[i]);
      r += s[i];
    }
  }
  tam = q1.size();
  // comparar pilas
  string n = "";
  while (q1.size() > 0) {
    //cout<<q1.top()<<endl;
    n += q1.top();
    //cout<<n<<endl;
    q1.pop();
  }
  if (r == n){
    return true;
  }else
    return false;

}

int evaluarExpresionPostfija(string s) {
  // declarar stack
  stack<int> exp;
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
        cout<<"operación: "<<num1<<op<<num2<<endl;
        break;

      default:
        cout << "Error, revise la expresion insertada";
        break;
      }
    }else{ // Si es un numero insertarlo en la pila 
      exp.push(atoi(ptr));
    }
    ptr = strtok(NULL, " ");
  }

  return exp.top();
}

int main() {
  /*
  bool pal = recibirPalindromo1("Anita lava la tina");
  cout<<pal<<endl;
  bool pal1 = recibirPalindromo2("Anita lava la tina");
  cout<<pal1<<endl;
  */

  int r = evaluarExpresionPostfija("5 9 + 2 * 6 5 * +");
  cout<<r<<endl;
}