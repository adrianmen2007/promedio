//Adrian Mendoza Allard
#include <iostream>
#include <cstdlib> //funciones aleatorias
#include <ctime> //funciones de ctime
using namespace std ;
int main()
{
    srand (time(NULL));
    int num;
    
    num= rand();
    
    <cout << "numero aleatorio: " <<num << endl;
    
    //imprimir valores de 0 a 9
    num= rand() %10;
    cout << " numero entre 0-9: " << num << endl;
    
    //obtener aleatorios en un rango especifico
    // rand() % restante+valor inicial
    
    // valor entre 1 a10
    num = rand () % 10+10cout << "numero entre 1-10" << num << endl;
    //valor entre 20 a 30 
    num = rand () % 11+20
    cout << "numero entre 1-10" << num << endl;
    // valor entre 
    
    

    return 0;
}