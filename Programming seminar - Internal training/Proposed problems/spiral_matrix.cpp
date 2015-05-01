#include <iostream>

using namespace std;

int main(){
    cout << "INGRESE NUMERO DE FILAS Y COLUMNAS:" << endl;
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    cout << "RELLENE LA MATRIZ POR FILAS:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j]; 
        }
    }   
    
    bool itThroughRow = true;
    int i = 0;
    int j = 0;
    int direction = 1;
    int rowItNeeded = m;
    int colItNeeded = n;
    int numbersPrinted = 0;
    
    cout << "MATRIZ LEIDA EN ESPIRAL:" << endl;
    while(numbersPrinted < (m*n)){ //Mientras no se hayan impreso TODOS los 
                                   //números de la matriz.
            if(itThroughRow){
                for(int count = 0; count < colItNeeded; count++){
                        cout << mat[i][j] << " | ";
                        j += direction;
                        numbersPrinted++;
                }          
                i += direction;
                j -= direction;
                rowItNeeded--;
                itThroughRow = false;   
            }else{
                for(int count = 0; count < rowItNeeded; count++){
                        cout << mat[i][j] << " | ";
                        i += direction;
                        numbersPrinted++;
                }          
                i -= direction;
                j -= direction;
                colItNeeded--;
                itThroughRow = true; 
                direction *= -1;
            }
    }
    return 0;
}
