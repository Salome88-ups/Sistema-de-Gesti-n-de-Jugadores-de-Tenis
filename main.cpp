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

        void registrarJugador()
{

if(cantidad>=MAX)
{
    cout<<"No se pueden registrar mas jugadores\n";
    return;
}


cout<<"Nombre: ";
cin>>nombres[cantidad];


cout<<"Categoria: ";
cin>>categorias[cantidad];


cout<<"Edad: ";
cin>>edades[cantidad];


cout<<"Partidos ganados: ";
cin>>ganados[cantidad];


cout<<"Ranking: ";
cin>>ranking[cantidad];


cantidad++;

cout<<"Jugador registrado correctamente\n";

}



void mostrarJugadores()
{

if(cantidad==0)
{
    cout<<"No existen jugadores registrados\n";
    return;
}


for(int i=0;i<cantidad;i++)
{

cout<<"\nJugador "<<i+1;
cout<<"\nNombre: "<<nombres[i];
cout<<"\nCategoria: "<<categorias[i];
cout<<"\nEdad: "<<edades[i];
cout<<"\nGanados: "<<ganados[i];
cout<<"\nRanking: "<<ranking[i]<<"\n";

}

}



void buscarJugador()
{

string buscar;

cout<<"Ingrese nombre a buscar: ";
cin>>buscar;


for(int i=0;i<cantidad;i++)
{

if(nombres[i]==buscar)
{

cout<<"Jugador encontrado\n";
cout<<"Categoria: "<<categorias[i];
cout<<"\nRanking: "<<ranking[i];

return;

}

}


cout<<"Jugador no encontrado\n";

}

        cin >> opcion;


        switch(opcion)
        {

            case 1:
                registrarJugador();
                break;

            case 2:
                mostrar jugador();
                break;

            case 3:
                buscar jugador();
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