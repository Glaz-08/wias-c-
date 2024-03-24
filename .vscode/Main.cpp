#include<iostream>//importante para compilar
using namespace std;//importante para compilar
void suma(int x,int y);//declarar antes
int main()//crear main de esta manera
{
    suma(5,6);

    return 0;
}

void suma(int x,int y){ //ocupar
    int valor = x+y;

    cout<<valor<<endl;

}