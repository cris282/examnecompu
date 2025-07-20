3#include <iostream>
#include <string>
using namespace std;

struct PadreMadre {
    string dpi;
    string nombre;
    string apellido;
    string profesion;
    string estado_civil;
    string nacionalidad;
};

struct Nino {
    string cui;
    string nombre;
    string apellido;
    string lugar_nacimiento;
    string fecha_nacimiento;
    string nacionalidad;
};

int main() {
    PadreMadre padres[20];
    Nino ninos[20];
    int totalPadres = 0;
    int totalNinos = 0;
    int totalGeneral = 0;
    int opcion, continuar;

    do {
        if (totalGeneral >= 20) {
<<<<<<< HEAD
            cout << "Ya se alcanza el limite total de 20 personas\n";
=======
            cout << "Ya se alcanz� el l�mite total de 20 personas (padres + ni�os).\n";
>>>>>>> a303b5beeda3c1847fc19d287e532614f755ee05
            break;
        }

        cout << "\nSeleccione una opcion:\n";
        cout << "1. Ingresar datos de un padre o madre\n";
        cout << "2. Ingresar datos de un nino\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "--- Ingreso de datos del padre o madre ---\n";
            cout << "DPI (sin espacios): ";
            cin >> padres[totalPadres].dpi;
            cout << "Nombre: ";
            cin >> padres[totalPadres].nombre;
            cout << "Apellido: ";
            cin >> padres[totalPadres].apellido;
<<<<<<< HEAD
            cout << "Profesion: ";
=======
            cout << "Profesi�n: ";
>>>>>>> a303b5beeda3c1847fc19d287e532614f755ee05
            cin >> padres[totalPadres].profesion;
            cout << "Estado civil: ";
            cin >> padres[totalPadres].estado_civil;
            cout << "Nacionalidad: ";
            cin >> padres[totalPadres].nacionalidad;

            cout << "--- datos ingresados---\n";
            cout << "DPI: " << padres[totalPadres].dpi << endl;
            cout << "Nombre: " << padres[totalPadres].nombre << endl;
            cout << "Apellido: " << padres[totalPadres].apellido << endl;
<<<<<<< HEAD
            cout << "Profesion: " << padres[totalPadres].profesion << endl;
=======
            cout << "Profesi�n: " << padres[totalPadres].profesion << endl;
>>>>>>> a303b5beeda3c1847fc19d287e532614f755ee05
            cout << "Estado civil: " << padres[totalPadres].estado_civil << endl;
            cout << "Nacionalidad: " << padres[totalPadres].nacionalidad << endl;

            totalPadres++;
            totalGeneral++;
        } else if (opcion == 2) {
<<<<<<< HEAD
            cout << "--- Ingreso de datos del nino ---\n";
=======
            cout << "--- Ingreso de datos del ni�o ---\n";
>>>>>>> a303b5beeda3c1847fc19d287e532614f755ee05
            cout << "CUI: ";
            cin >> ninos[totalNinos].cui;
            cout << "Nombre: ";
            cin >> ninos[totalNinos].nombre;
            cout << "Apellido: ";
            cin >> ninos[totalNinos].apellido;
            cout << "Lugar de nacimiento: ";
            cin >> ninos[totalNinos].lugar_nacimiento;
            cout << "Fecha de nacimiento: ";
            cin >> ninos[totalNinos].fecha_nacimiento;
            cout << "Nacionalidad: ";
            cin >> ninos[totalNinos].nacionalidad;

            cout << "\n--- datos ingresados ---\n";
            cout << "CUI: " << ninos[totalNinos].cui << endl;
            cout << "Nombre: " << ninos[totalNinos].nombre << endl;
            cout << "Apellido: " << ninos[totalNinos].apellido << endl;
            cout << "Lugar de nacimiento: " << ninos[totalNinos].lugar_nacimiento << endl;
            cout << "Fecha de nacimiento: " << ninos[totalNinos].fecha_nacimiento << endl;
            cout << "Nacionalidad: " << ninos[totalNinos].nacionalidad << endl;

            totalNinos++;
            totalGeneral++;
        } else {
<<<<<<< HEAD
            cout << "Opcion no valida.\n";
        }

        if (totalGeneral >= 20) {
            cout << "\nSe ha alcanzado el limite total de 20 personas. Fin del ingreso.\n";
            break;
        }

        cout << "\n¿Desea ingresar otra persona? (Si,No): ";
=======
            cout << "Opci�n no v�lida.\n";
        }

        if (totalGeneral >= 20) {
            cout << "\nSe ha alcanzado el l�mite total de 20 personas. Fin del ingreso.\n";
            break;
        }

        cout << "\n�Desea ingresar otra persona? (S�,No): ";
>>>>>>> a303b5beeda3c1847fc19d287e532614f755ee05
        cin >> continuar;
    } while (continuar == 1);

    cout << "\n--- Resumen final ---\n";
    cout << "Padres/madres ingresados: " << totalPadres << endl;
<<<<<<< HEAD
    cout << "Ninos ingresados: " << totalNinos << endl;
=======
    cout << "Ni�os ingresados: " << totalNinos << endl;
>>>>>>> a303b5beeda3c1847fc19d287e532614f755ee05

    return 0;
}


