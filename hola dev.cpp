#include<iostream>
int main (){
    //Definición de variables
    char salir; 
    char respuesta;
    std::cout <<"Hola mundo, mi primer programa \n";
    std::cout <<"Eres listo? (s/n): ";
    std::cin>> respuesta;
    //&& significa AND
    //|| significa OR
    if(respuesta=='s'||respuesta=='S'){
        std::cout <<"Hola listo"; 
    }
    else{
        std::cout <<"Hola tonto"; 
    }
    std::cin>>salir;
}
