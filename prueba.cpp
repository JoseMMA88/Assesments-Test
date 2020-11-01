// Esto es una prueba
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <sstream>

using namespace std;

//EJERCICIO 3 - CONTAR LA CANTIDAD DE VECES QUE SE REPITE UNA PALABRA EN UN ARRAY
class Tupla{
    public:
        Tupla(string palabra1, int repes1);
        void sumaRepe();
        int getRepes();
        string getPalabra();
    private:
        string palabra;
        int repes;
};

Tupla::Tupla(string palabra1, int repes1){
    palabra = palabra1;
    repes = repes1;
}

string Tupla::getPalabra(){
    return palabra;
}

int Tupla::getRepes(){
    return repes;
}

void Tupla::sumaRepe(){
    repes += 1;
}




int main(){
//-----------------------------------------------------------------------------------------------
    /*//EJERCICIO 1 - MULTIPLICAR DOS ELEMENTOS SIN USAR EL *   
    int a, b, resultado;
    bool negativoA = false;
    bool negativoB = false;
    a = -2;
    b = -100;
    resultado = 0;

    if(a < 0){
        negativoA = true;
    }
    if(b < 0){
        negativoB = true;
    }

    if (negativoA == true && negativoB == false || negativoA == false && negativoB == true){
        for(int i = 0; i < abs(a); i++){
        resultado -= abs(b);
        }
    }
    else {
        for(int i = 0; i < abs(a); i++){
         resultado += abs(b);
        }
    }
     cout<<"Esta es la multiplicación " << a*b <<endl;
     cout<<"Esta es mi salida: " << resultado;*/

    
    
//-----------------------------------------------------------------------------------------------    
    /*//EJERCICIO 2 - OBTENER EL NUMERO MAYOR EN UN ARRAY ITERANDO UNA VEZ
    int arr[] = {-23,22,12,13,456,678,9,78,980,-890,-90,-5675,-3456};
    int temp = arr[0];
    int tamano = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < tamano; i++){
        if(temp < arr[i]){
            temp = arr[i];
        }
    }

    cout<<"Mi mayor número es: " <<temp <<endl;*/

//-----------------------------------------------------------------------------------------------
    //EJERCICIO 3 - CONTAR LA CANTIDAD DE VECES QUE SE
    // REPITE UNA PALABRA EN UN ARRAY
    string frase = "Esto es una prueba prueba"; // FRASE
    string arr[] = {"Hola","ola","aloha","Hello","Hola", "Hola", "ola", "hola"}; // VECTOR DE PALABRAS
    string palabra = "hola";

    int cont = 0;
    string word;
    istringstream iss(frase);
    vector<Tupla*> tuplas;

    for(int i = 0; iss >> word; i++){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);

        if(i == 0){
            Tupla* tupla1 = new Tupla(word, 1);
            tuplas.push_back(tupla1);
        }
        else{
            bool exist = false;
            for(int j = 0; j < tuplas.size() && exist == false ; j++){
                if(tuplas[j]->getPalabra().compare(word) == 0){
                    tuplas[j]->sumaRepe();
                    exist = true;
                }
            }
            if(exist == false){
                Tupla* tupla2 = new Tupla(word, 1);
                tuplas.push_back(tupla2);
            }
        }

    }

    cout<< tuplas.size() <<endl;

    for(int x = 0; x < tuplas.size(); x++){
        cout<< "La palabara " << tuplas[x]->getPalabra() << " se repite " << tuplas[x]->getRepes() << " veces" <<endl;
    }

}



