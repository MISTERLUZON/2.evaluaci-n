#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int devuelve_longitud(char aux[]){
    int cont=0;
    int longitud=0;
    while(aux[cont]!='\0');{
        longitud++;                                          
        cont++;
    }
    return(longitud);
}    

int main(){
    char *palabras[4];
    int cont,longitud;
    char salir;
    char aux[20];
    
    //Leo cuatro palabras
    for(cont=0;cont<4;cont++){
       std::cout<<"palabra: "; 
       std::cin >>aux;
       longitud=devuelve_longitud(aux);
       std::cout<<longitud;
       palabras[cont]=(char *) malloc(longitud*sizeof(char));//Reserva
  
       
       
       
       
       
       
    }           
        
        
    std::cin >> salir;               
                          
}
