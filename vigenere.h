//javier Alvarez Reyes
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include<string>
#include <sstream>
using std::string;
using namespace std;
class cifrado
{
private:
  int x;//alfabeto
  string m;//clave
  string n;//mensaje
  string sifrado;
public:
  cifrado(int,string,string,string);
  void cifrar();
  void decifrar();
  void alfabetoASCII();
  void alfabetoHEX();
  void alfabetoNUMERICO();

};
cifrado::cifrado(int _x,string _m,string _n,string _sifrado)
{
  n=_n;//mensaje
  x=_x;//alfabeto
  m=_m;//clave
  sifrado=_sifrado;
}
void cifrado::alfabetoASCII()
{
  string alfabeto;
  string espacio(" ");
  ifstream archivo;
  archivo.open("alfabetoACII.txt",ios::in);
  int j=0,u=0,F=0,c=0,q=0;
  while(!archivo.eof())
    {
       getline(archivo,alfabeto);
    }
  archivo.close();
  if(alfabeto[0]!=espacio[0])
  {
    alfabeto[0]=espacio[0];
  }
  int b=0;
  while(m.length()<n.length())//completar la clave
  {
    m=m+m[j];
    j+=1;
  }
  for(int i=0;i<m.length();i++)
  {
    for(int k=0;k<alfabeto.length();k++)
    {
      if(m[i]==alfabeto[k])
      {
        F=k;
      }
      else if(n[i]==alfabeto[k])
      {
        u=k;
      }
    }
    c=F+u;
    
    if(alfabeto.length()<c)
    {
      c=c-alfabeto.length();
    }
    sifrado=sifrado+alfabeto[c];
  }
  cout<<sifrado<<endl;
}
void cifrado::alfabetoHEX()
{

}
void cifrado::alfabetoNUMERICO()
{

}
void cifrado::cifrar()
{
  if(x==1){
  alfabetoASCII();
  }
  else if(x==2){
  alfabetoHEX();
  }
  else if(x==3){
  alfabetoNUMERICO();
  }
}