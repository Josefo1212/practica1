#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    int x,cedula=0;
    string nombre,correo;
    int data;
    ofstream output("./data/data.txt");

    if( ! output.is_open()){
        cout<<"El archivo no pudo ser creado ni abierto ";
        return 0;
    }

    cout<<"Ingrese la cantidad de datos que desea crear: ";
    cin>>x;

    while (x>0){
        cout<<"Ingrese el nombre: "<<endl;
        cin>>nombre;
        cout<<"Ingrese la cedula: "<<endl;
        cin>>cedula;
        cout<<"Ingrese el correo: "<<endl;
        cin>>correo;
        output<<nombre<<" "<<cedula<<" "<<correo<<" "<<endl;
        x--;
    }

}