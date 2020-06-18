#include<iostream>

using namespace std;

struct horario{
    int hora;
    int mim;
    int segundo;
};

struct data
{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    int data;
    int hora;
    int compromisso;
};




int main(){

cout<<"====== Agenda ======";
cout<<"\nData";
data dia;
cout<<"\nDia: ";
cin>>dia.dia;
cout<<"Mes: ";
cin>>dia.mes;
cout<<"Ano: ";
cin>>dia.ano;
cout<<dia.dia<<" / "<<dia.mes<<" / " <<dia.ano;

cout<<"\n";

cout<<"\nHorario";
horario hora;
cout<<"\nhora: ";
cin>>hora.hora;
cout<<"Mim: ";
cin>>hora.mim;
cout<<"Segundo: ";
cin>>hora.segundo;
cout<<hora.hora<<":"<<hora.mim<<":"<<hora.segundo;









}