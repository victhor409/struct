#include<iostream>

using namespace std;

struct pessoa{
    
    string nome;
    int idade;
    string endereco;

}cadastro[5];

int main(){

cout<<"===== CADASTRO =====";


for(int i=0; i<5; i++){

cout<<"\nNome: ";
cin>>cadastro[i].nome;
cout<<"Idade: ";
cin>>cadastro[i].idade;
cout<<"Endereco: ";
cin>>cadastro[i].endereco;
cout<<"======================";
}

}