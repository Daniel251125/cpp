#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;
    
    do
    {
        system("cls");
        // Texto del menú que se verá cada vez
        
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Starship" << endl;
        cout << "2. Snake" << endl;
        cout << "3. Salir 3" << endl;
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                starShip();               
                break;
                
            case 2:
                   snake();     
                break;

         system("pause>nul"); // Pausa
         break;
                
        
    } while (opcion != 3);
    

    // starShip();
    // snake();

    return 0;
}
