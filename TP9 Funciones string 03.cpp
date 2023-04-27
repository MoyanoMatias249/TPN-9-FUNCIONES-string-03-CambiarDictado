#include <bits\stdc++.h>
using namespace std;

int CambiarDictado(string palabra){
	int cont = palabra.size() - 1;
  return cont;
}

int main(){
  string Palabra;

  cout<<"Introduce una palabra: ";
  cin>>Palabra;
  
  int Cont = CambiarDictado(Palabra);
  
  cout<<Cont;
  
  return 0;
}
