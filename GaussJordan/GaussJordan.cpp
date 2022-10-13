#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);
    //ImprimirMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);
    //ImprimirMatriz(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "Solución:\n" << "x" << i << " = "<< miMatriz[i][variables]/miMatriz[i][i] << endl;
    }
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)

{
    double mayor; 
    int indice; 
    double aux; 
    double pivot;

    int variables = miMatriz.size();
    // recorramos la matriz reducida
    for(int i = 0; i < variables; i++ ){
        mayor = abs(miMatriz[i][i]);
        indice = i;
        
        for(int j = i + 1; j < variables; j++){
            if(mayor < abs(miMatriz[j][i])){
                mayor = abs(miMatriz[j][i]);
                indice = j;
            }
        }
        //filas
        if(i != indice){
            for(int k = 0; k < variables + 1; k++){
                aux = miMatriz[i][k];
                miMatriz[i][k] = miMatriz[indice][k];
                miMatriz[indice][k] = aux;
            }
        }
        // si es igual a 0
        if(miMatriz[i][i] == 0){
            cout << "No tiene solucion :( " << endl;
        }
        else{
            // reccoremos la fila
            for(int k = 0; k < variables; k++){
                if (k != i){
                    pivot = -miMatriz[k][i];
                    // recorremos los elementos de la fila
                    for(int l = i; l < variables + 1; l++){
                        miMatriz[k][l] = miMatriz[k][l] + pivot * miMatriz[i][l] / miMatriz[i][i];
                    }
                }
                else{
                    pivot = miMatriz[i][i];
                    for(int m = i; m < variables + 1; m++){
                        miMatriz[k][m] = miMatriz[k][m] / pivot;
                    }
                }
            }
        }
    }
}
    




