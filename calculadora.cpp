#include<iostream>
using namespace std;
int main (){
int a = 0, T = 0;
int b = 0;
int opcion;
cout<<"Elija 1) para sumar"<<endl;
cout<<"Elija 2) para restar "<<endl;
cout<<"Elija 3) para multiplicar"<<endl;
cout<<"Elija 4) para dividir"<<endl;
cout<<" Que opcion elije?"<<endl;
cin >> opcion;
switch (opcion)
{
case 1:
T = a + b;
    cout<<"El resultado de su suma es: "<<T<<endl;
    break;
case 2:
T = a - b;
cout<<"El resultado de su resta es: "<<T<<endl;
break; 

case 3:
T = a * b;
cout<<""<<endl;
break;
default:
    break;
}




    return 0;
}