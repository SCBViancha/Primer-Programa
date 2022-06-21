#include <stdio.h>
#include <string.h>

//Declaracion de los metodos a usar
int verificacionCodigo(char codigoEstudiante[7]);
int sumCodigo(char codigoEstudiante[7]);
int main(void){
   // Mostrar lo requerido para introducir
   printf("Escriba el codigo de estudiante: ");
   // Crear variable de codigo de estudiante
   char codigoEstudiante[7];
   // Inicializar metodo de repetir
    verificacionCodigo(codigoEstudiante);
	return 0;
}

//Este metodo se encargara de clasificar las diferentes respuestas posible: Cerrar programa
//Pedir nuevo codigo o señalar error de digitacion
int verificacionCodigo(char codigoEstudiante[7]){
    //Inicializar variable suma Codigo en 0
    int sumaCodigo = 0;
    //Ciclo while para seguir preguntando codigo de estudiante
    while(1){
	  //Leer el codigo inscrito
         scanf("%s", codigoEstudiante);
	  //Pedir respuesta del metodo sumaCodigo
         sumaCodigo = sumCodigo(codigoEstudiante);
	  //Si el metodo sumaCodigo devuelve -1, el codigo inscrito tiene una letra o caracter
         if(sumaCodigo == -1){
            
         }
	 //Si el metodo sumaCodigo devuelve -2, el codigo iscrito fue 00 y debe salirse del programa
         else if(sumaCodigo == -2){
            break;
         }
         else{
	 // Si no se cumolen los condicionales anteriores, el codigo inscrito es correcto y se muestra la suma
            printf("La suma del codigo es: %i \n", sumaCodigo);
            printf("Escriba el codigo de estudiante: \n");
         }
        
        
    }
    
  return 0;
}
//Metodo encargado de sumar cada digito del codigo, recordar que esta en tipo char, por lo que al utilizar operaciones tienen un valor en
//Decimal entre el 48 y 57, osea, inclusivo
int sumCodigo(char codigoEstudiante[7]){
    // Inicializar variable de sumatoria
    int sumaCodigo = 0; 
    // Leer cada casilla del arreglo 
    for(int i = 0; i < strlen(codigoEstudiante); i++){
        // Si la casilla tiene un caracter con un valor decimal menor a 48 o mayor a 57, colocar suma codigo -1 y 
        // devolver al metodo anterior
        if(codigoEstudiante[i]<48 || codigoEstudiante[i]>57){

            // Mandar en pantalla mensaje de error
            printf("Ha introducido una letra o caracter, verificar e intentar nuevamente: \n");
            // Retornar suma
            return sumaCodigo = -1;
        }
	    //Contador de la suma del codigo, agregar digito
        sumaCodigo = sumaCodigo + codigoEstudiante[i] - 48;
    }
    //Si el arreglo tiene exactamente dos casillas y la sumatoria es 0, retornar -2 para salir del ciclo y cerrar. 
    if((strlen(codigoEstudiante)) == 2 && (sumaCodigo == 0)){
        //Mensaje de cerrado
        printf("Ha introducido 00, por lo que se cerrara el programa: ");
        return sumaCodigo = -2;
    }
    return sumaCodigo; 

}

    

