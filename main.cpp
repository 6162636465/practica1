//javier Alvarez Reyes
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include<string>
#include <sstream>
using std::string;
#include "vigenere.h"
using std::string;
using namespace std;
int main()
{
  int x;
  string n;
  string m;
  string sifrado;
  cout << "coloque su mensaje" << endl;
  getline(cin, n);
  cout << "coloque la clave" << endl;
  getline(cin, m);
  cout << "seleccione el alfabeto: (1)ASCCI,(2)HEX,(3)NUMERICO" << endl;
  cin >> x;
  cifrado p1 = cifrado(x, m,n,sifrado);
  p1.cifrar();
}
