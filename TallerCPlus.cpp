#include <iostream>
#include <string>
#include <vector>

using namespace std;

int verificacionCodigo(string codigoEstudiante); 
int sumCodigo(string codigoEstudiante);
int main(void){
   // Mostrar lo requerido para introducir
   cout <<"Escriba el codigo de estudiante: ";
   // Crear variable de codigo de estudiante
   string codigoEstudiante;
   // Guardar codigo de estudiante
   // Inicializar metodo de repetir
    verificacionCodigo(codigoEstudiante);
	return 0;
}

int verificacionCodigo(string codigoEstudiante){
    //Inicializar variable suma Codigo en 0
    int sumaCodigo = 0;
    //Ciclo while para seguir preguntando codigo de estudiante
    while(1){
         cin >> (codigoEstudiante);
         sumaCodigo = sumCodigo(codigoEstudiante);
         if(sumaCodigo == -1){
            
         }
         else if(sumaCodigo == -2){
            break;
         }
         else{
            cout << "La suma del codigo es: "<< sumaCodigo << "\n";
            cout<< "Escriba el codigo de estudiante: "<< "\n";
         }
        
        
    }
    
  return 0;
}
int sumCodigo(string codigoEstudiante){
    // Inicializar variable de sumatoria
    int sumaCodigo = 0; 
    // Leer cada casilla del arreglo 
    for(int i = 0; i < (int)codigoEstudiante.length(); i++){
        // Si la casilla tiene un caracter con un valor decimal menor a 48 o mayor a 57, colocar suma codigo -1 y 
        // devolver al metodo anterior
        if(codigoEstudiante[i]<48 || codigoEstudiante[i]>57){

            // Mandar en pantalla mensaje de error
            printf("Ha introducido una letra o caracter, verificar e intentar nuevamente: \n");
            // Retornar suma
            return sumaCodigo = -1;
        }
        sumaCodigo = sumaCodigo + codigoEstudiante[i] - 48;
    }
    //Si el arreglo tiene exactamente dos casillas y la sumatoria es 0, retornar -2 para salir del ciclo y cerrar. 
    if((codigoEstudiante.length()) == 2 && (sumaCodigo == 0)){
        //Mensaje de cerrado
        cout<<"Ha introducido 00, por lo que se cerrara el programa: ";
        return sumaCodigo = -2;
    }
    return sumaCodigo; 

}
