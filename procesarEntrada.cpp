#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    int x,cedula=0;
    string nombre,correo;
    int data;
    ifstream input("./data/data.txt");

    if(! input.is_open()){
        cout<<"No se puede abrir ";
        return 0;
    }

    while(input>>nombre>>cedula>>correo){
         cout<<"Mi nombre es "<<nombre<<", mi numero de cedula es: "<<cedula<<", y mi correo es: "<<correo<<endl;
    }
    input.close();
    return 0;
}