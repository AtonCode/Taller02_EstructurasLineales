#include <iostream>
#include "Modulos/Utilities1.hpp"

int main(int argc, char const *argv[])
{
  int r = evaluarExpresionPostfija("5 9 + 2 * 6 5 * +");
  cout<<r<<endl;
  return 0;
}