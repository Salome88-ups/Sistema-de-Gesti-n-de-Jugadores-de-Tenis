#include <iostream>
#include <string>

using namespace std;


// ===============================
// VARIABLES GLOBALES
// ===============================

const int MAX = 20;

string nombres[MAX];
string categorias[MAX];

int edades[MAX];
int ganados[MAX];
int ranking[MAX];

int cantidad = 0;


// ===============================
// FUNCION MENU
// ===============================

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



// ===============================
// REGISTRAR JUGADOR
// ===============================

void registrarJugador()
{

    if(cantidad >= MAX)
    {
        cout << "No se pueden registrar mas jugadores\n";
        return;
    }


    cout << "Nombre: ";
    cin >> nombres[cantidad];


    cout << "Categoria: ";
    cin >> categorias[cantidad];


    cout << "Edad: ";
    cin >> edades[cantidad];


    cout << "Partidos ganados: ";
    cin >> ganados[cantidad];


    cout << "Ranking: ";
    cin >> ranking[cantidad];


    cantidad++;


    cout << "Jugador registrado correctamente\n";

}



// ===============================
// MOSTRAR JUGADORES
// ===============================

void mostrarJugadores()
{

    if(cantidad == 0)
    {
        cout << "No existen jugadores registrados\n";
        return;
    }


    for(int i = 0; i < cantidad; i++)
    {

        cout << "\nJugador #" << i+1 << endl;
        cout << "Nombre: " << nombres[i] << endl;
        cout << "Categoria: " << categorias[i] << endl;
        cout << "Edad: " << edades[i] << endl;
        cout << "Victorias: " << ganados[i] << endl;
        cout << "Ranking: " << ranking[i] << endl;

    }

}



// ===============================
// BUSCAR JUGADOR
// ===============================

void buscarJugador()
{

    string buscar;


    cout << "Ingrese nombre del jugador: ";
    cin >> buscar;



    for(int i = 0; i < cantidad; i++)
    {

        if(nombres[i] == buscar)
        {

            cout << "\nJugador encontrado\n";
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Categoria: " << categorias[i] << endl;
            cout << "Ranking: " << ranking[i] << endl;

            return;

        }

    }


    cout << "Jugador no encontrado\n";

}



// ===============================
// REPORTE GENERAL
// ===============================

void reporteGeneral()
{

    if(cantidad == 0)
    {
        cout << "No existen datos\n";
        return;
    }


    int suma = 0;
    int mayor = ganados[0];


    for(int i = 0; i < cantidad; i++)
    {

        suma += ganados[i];


        if(ganados[i] > mayor)
        {
            mayor = ganados[i];
        }

    }


    cout << "\nReporte general\n";
    cout << "Total jugadores: " << cantidad << endl;
    cout << "Promedio de victorias: " << suma/cantidad << endl;
    cout << "Mayor cantidad de victorias: " << mayor << endl;


}



// ===============================
// COMPONENTE CREATIVO
// ===============================

void calcularNivel()
{

    string nombre;


    cout << "Ingrese nombre del jugador: ";
    cin >> nombre;



    for(int i = 0; i < cantidad; i++)
    {

        if(nombres[i] == nombre)
        {


            if(ganados[i] >= 10)
            {
                cout << "Nivel: Profesional\n";
            }
            else if(ganados[i] >= 5)
            {
                cout << "Nivel: Intermedio\n";
            }
            else
            {
                cout << "Nivel: Principiante\n";
            }


            return;

        }

    }


    cout << "Jugador no encontrado\n";

}



// ===============================
// PROGRAMA PRINCIPAL
// ===============================

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
                registrarJugador();
                break;


            case 2:
                mostrarJugadores();
                break;


            case 3:
                buscarJugador();
                break;


            case 4:
                reporteGeneral();
                break;


            case 5:
                calcularNivel();
                break;


            case 6:
                cout << "Programa finalizado\n";
                break;


            default:
                cout << "Opcion incorrecta\n";

        }


    }while(opcion != 6);



    return 0;

}