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
int count=0;
    while(input){
        while(count<3){
            if(count==0){
                input>>nombre;
            }else if(count==1){
                input>>cedula;
            }
            else{input>>correo;}
            count++;
        }
        count=0;
        cout<<"Mi nombre es "<<nombre<<" numero de cedula: "<<cedula<<" mi correo es "<<correo<<endl;
    }
    input.close();
    return 0;
}