#include "Evaluador.h"
#include <iostream>
using namespace std;

//Realizado Por Izlia Guadalupe Florentino

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    b+=a;
    return b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    a-=b;
    return a;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    a*=b;
    return a;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    a/=b;
    return a;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b){
     return a;
    }else{
     return b;
    }

}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a<b){
        return a;
    }else{
        return b;
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b && a>c){
        return a;
    }else {
        if(b>a && b>c){
            return b;
        }else{
            return c;
        }

}
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
   arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
       return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{

    int mayor =0;
    int contador;

    for (contador=0; contador<tamano; contador++)
    {

    if (arreglo[contador]>mayor)
    {
    mayor=arreglo[contador];
    }
    }

    return mayor;
}
//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int contador;
    int menor;
    menor=arreglo[0];
     for (contador=0; contador<tamano; contador++)
     {
       if (menor>arreglo[contador])
       menor=arreglo[contador];
     }

    return menor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
   int suma=0;
   int promedio;
   int contador;

   for (contador=0;contador<tamano;contador++)
   {
   suma+=arreglo[contador];
   promedio= suma/tamano;
   }

   return promedio;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
