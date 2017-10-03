#include <iostream>
#include <list>
using namespace std;
int numero;
int aceptados;
int relaciones;
string pila;
list<char *> relacion;
int main()
{
    cout << "ingrese el numero de nodos :";
    cin >> numero;
    cout << "\ningrese el numero de estados de aceptacion  : ";
    cin >> aceptados;
    cout << "\ningrese los datos de la pila : ";
    cin >> pila;
    cout << "\ningrese numero de arista : ";
    cin >> relaciones;
    cout << "\ningrese las relaciones :";
    for(int i=0; i<relaciones; i++){
    char dato[3];
    cout << "\ningrese las relaciones :" << i+1;
    cin >> dato;
    relacion.push_back(dato);
    }
    return 0;
}
