/*
 * Author: Ricardo Aguilar Hernandez
 * email: aguilar.hernandez.ricardo@cominidad.unam.mx
 * 28/09/2022
 */


#include <iostream>
using namespace std;

int main() {
    float a=0;
    char b;
    float c=0;

cout<<"Este programa hace operaciones basicas entre 2 numeros"<<endl;
cout<<"Primer numero: "<<endl;
cin>>a;
cout<<"Operacion: "<<endl;
cin>>b;
cout<<"Segundo numero: "<<endl;
cin>>c;

if (b == '+')
{
    cout<<"Resultado: \n"<< a << b << c << " = " << a+c;
}
else if (b == '-')
{
    cout<<"Resultado: \n"<< a << b << c << " = " << a-c;
}
else if (b== '*') {
    cout<<"Resultado: \n"<< a << b << c << " = " << a*c;
}
else if (b== '/'& c!=0) {
    cout<<"Resultado: \n"<< a << b << c << " = " << a/c;
}
else if (b== '%') {
    int A=a;
    int C=c;
    cout<<"Resultado (Parte entera) : \n"<< a << b << c << " = " << A%C;
}
else {
    cout << "error de sitaxis\n";
}
    return 0;
}
