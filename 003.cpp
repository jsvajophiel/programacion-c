/* El primer programa en C++,
usando distintos tipos de comentarios.
Este es de varias lineas.
*/
// A continuacion indicamos las bibliotecas a usar
#include <iostream>
using namespace std;

int main (void) // Este es el programa principal
{
    /* La siguiente linea de codigo muestra */
    /* un mensaje en pantalla */
    cout << "Este es mi primer programa";

    // Hacemos una pausa hasta que el usuario pulse Intro.
    cout<< "\nPulse Intro para finalizar...";
    cin.get();
    
    return 0;
}