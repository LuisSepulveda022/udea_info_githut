#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

using namespace std;

string leerArchivo();
void comparar(string ,string);
int main()
{
    string cadena1,cadena2;

    cadena1 = leerArchivo();


    cadena2 = leerArchivo();

    comparar(cadena1,cadena2);
}

string leerArchivo(){

    string nombre;
    cout << "Ingrese el nombre del archivo: "; getline(cin,nombre);
    ifstream lectura;

    lectura.open(nombre, ios::in);
    string cadena;
    if( !lectura.fail() ){
        while(getline(lectura,cadena)){
            cadena +=cadena;
        }
        lectura.close();
    }else{
        cout << "No se pudo leer el archivo..."<<endl;
    }

    return cadena;
}

void comparar(string cadena1, string cadena2){
    int tam1 = cadena1.length() , tam2 = cadena2.length();

    //cout << tam1 << "  " << tam2 <<endl;
    if( tam1 == tam2 ){
        int pos1,ini1=0,pos2,ini2=0;
        bool bandera=1;
        do{
            for(int i=ini1; i < tam1+1 ; i++){
                if( cadena1[i] == ' ' || cadena1[i] == '\0' ){
                    pos1 = i;
                    break;
                }
            }

            for(int i=ini2; i < tam1+1 ; i++){
                if( cadena2[i] == ' ' || cadena2[i] == '\0' ){
                    pos2 = i;
                    break;
                }
            }


            if( pos1 == pos2 ){
                for(int j=ini1 ; j < pos1 ; j++){
                    if( cadena1[j] != cadena2[j]){
                        bandera = 0;
                        cout << "Esta palabra:";
                        for(int k=ini1 ; k < pos1 ; k++)
                            cout<< cadena1[k];
                        cout<<" ,es diferente a esta otra:";
                        for(int k=ini2 ; k < pos2 ; k++)
                            cout<< cadena2[k];
                        cout<< endl;
                    }
                }
            }
            ini2 = pos2+1;
            ini1 = pos1+1;
        }while(cadena1[pos1] != '\0');
        if( bandera == 1 )
            cout <<"Las dos cadenas son iguales..."<<endl;
    }else{
        cout<<"No coincide el tamaño de las cadenas, por lo tanto no pueden ser iguales..."<<endl;
    }
}
