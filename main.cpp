#include <iostream>
using namespace std;

const int MAX = 20;

string nombres[MAX];
string categorias[MAX];
int edades[MAX];
int ganados[MAX];
int ranking[MAX];

int cantidad = 0;


// Función menú
void mostrarMenu()
{
    cout << "\n===== SISTEMA DE JUGADORES DE TENIS =====\n";
    cout << "1. Registrar jugador\n";
    cout << "2. Mostrar jugadores\n";
    cout << "3. Buscar jugador\n";
    cout << "4. Reporte general\n";
    cout << "5. Calcular nivel del jugador\n";
    cout << "6. Salir\n";
    cout << "Seleccione una opcion: ";
}


int main()
{

    int opcion;


    do
    {

        mostrarMenu();

        cin >> opcion;


        switch(opcion)
        {

            case 1:
                cout<<"Registro seleccionado\n";
                break;

            case 2:
                cout<<"Listado seleccionado\n";
                break;

            case 3:
                cout<<"Busqueda seleccionada\n";
                break;

            case 4:
                cout<<"Reporte seleccionado\n";
                break;

            case 5:
                cout<<"Nivel seleccionado\n";
                break;

            case 6:
                cout<<"Programa finalizado\n";
                break;

            default:
                cout<<"Opcion incorrecta\n";
        }


    }while(opcion!=6);


return 0;

}