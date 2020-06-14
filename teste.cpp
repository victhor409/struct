#include<iostream>
#include<conio.h>

using namespace std;

//bubble sort
int main(){
int x[5],n,i,aux;


//carregamento do vetor
for(i=0; i<=4; i++){

cout<<"Digite o"<<i+1<<" numero: ";
cin>>x[i];
}
//Ordenando de forma crescente à penultima posicao do vetor
//laço com a quantidade de elementoso do vetor 
for(n=1; n<=5; n++){

//laço que percorre da primeira a ultima posicao do vetor 
for(i=0; i<=3; n++){
    if(x[i]> x[i+1]){
        aux = x[i];
        x[i]=x[i+1];
        x[i+1]=aux;

        }
    }
}
//mostrando vetor ordenado
for(i=0; i<=4; i++){
    cout<<i+1<< "Numero"<<x[i]<<"\n";
}


}