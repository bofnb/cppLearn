#include <iostream>
using namespace std;

int dolares;
int pesos;

int main(){
cout<<"Conversion de Dolares a Pesos\n";
cout<<"Escriba cantidad en dolares a cambiar a pesos\n";

cin>> dolares;

pesos= dolares * 20.57;

cout<<"La conversion de dolares a pesos es\n" << pesos <<"\n";
return 0;
}
