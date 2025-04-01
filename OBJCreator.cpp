#include <iostream>
using namespace std;

const int MAX_VERTICES = 100;  
const int MAX_CARAS = 100;      
const int MAX_INDICES = 100;   

int menu() {
    cout << "\n---------------------------------------------------------------------" << endl;
    cout << "1. Ingrese la cantidad de vertices." << endl;
    cout << "2. Ingrese las coordenadas de los vertices." << endl;
    cout << "3. Ingrese la cantidad de caras." << endl;
    cout << "4. Ingrese los indices de las caras." << endl;
    cout << "5. Imprimir resultado." << endl;
    cout << "6. Salir del programa." << endl;
    cout << "---------------------------------------------------------------------" << endl;
    return 0;
}

int main() {
    int seleccion_user;                     // Selección del usuario
    int vertices_totales = 0;               // Total de vértices
    int caras_totales = 0;                  // Total de caras
    int vertices[MAX_VERTICES] = {0};       // Almacena x,y,z de cada vértice
    int caras_indices[MAX_INDICES] = {0};   // Almacena todos los índices de las caras
    int caras_longitud[MAX_CARAS] = {0};    // Almacena el número de vértices por cara
    int caras_count = 0;                    // Contador de índices en caras_indices

    menu();

    while (true) {
        cout << "\nSeleccione una opción para acceder al menu: ";
        cin >> seleccion_user;

        if (seleccion_user == 1) {
            cout << "Ingrese la cantidad de vertices: ";
            cin >> vertices_totales;
            menu();
        } 

        else if (seleccion_user == 2) {
            for (int i = 0; i < vertices_totales; i++) {
                cout << "Vertice " << i + 1 << " (x y z): ";
                cin >> vertices[i*3] >> vertices[i*3 +1] >> vertices[i*3 +2];
            }
            menu();
        } 
        
        else if (seleccion_user == 3) {
            cout << "Ingrese la cantidad de caras: ";
            cin >> caras_totales;
            menu();
        } 
        
        else if (seleccion_user == 4) {
            for (int i = 0; i < caras_totales; i++) {
                int num_vertices;
                cout << "Ingrese la cantidad de vertices para la cara " << i + 1 << ": ";
                cin >> num_vertices;
                caras_longitud[i] = num_vertices;

                cout << "Ingrese los indices de lo vertices (separados por espacio): ";
                for (int j = 0; j < num_vertices; j++) {
                    cin >> caras_indices[caras_count + j];
                }
                caras_count += num_vertices;
            }
            menu();
        } 
        
        else if (seleccion_user == 5) {
            cout << "\n# Salida en formato .obj:" << endl;
            // Imprimir vértices
            for (int i = 0; i < vertices_totales; i++) {
                cout << "v " << vertices[i*3] << " " 
                     << vertices[i*3 +1] << " " 
                     << vertices[i*3 +2] << endl;
            }
            // Imprimir caras
            int current_index = 0;
            for (int i = 0; i < caras_totales; i++) {
                cout << "f ";
                for (int j = 0; j < caras_longitud[i]; j++) {
                    cout << caras_indices[current_index + j] << " ";
                }
                current_index += caras_longitud[i];
                cout << endl;
            }
            cout << "# Fin del archivo .obj" << endl;
            menu();
        } 
        
        else if (seleccion_user == 6) {
            cout << "Saliendo del programa..." << endl;
            break;
        } 
        
        else {
            cout << "Opcion no valida." << endl;
            menu();
        }
    }

    return 0;
}
