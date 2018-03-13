#include <iostream>

using namespace std;
void troca(int v[],int i, int j){
    int x = v[i];
    v[i] = v [j];
    v[j] = x;
}

int particao(int v[],int inicio,int fim){
    int pivo = v[inicio];
    int i=inicio +1;
    int j = fim;
    if(fim-inicio==1){
        if(v[inicio]>v[fim]){
            troca(v,inicio,fim);
            return fim;
        }
        return inicio;
    }
    while(i<j){
        while(v[i]<pivo&&i<=fim)i++;
        while(v[j]>pivo&& j>inicio)j--;
        if(i>j){
            troca(v,inicio,j);
            return j;
        }else{
            troca(v,i,j);
        }
    }

}
void quickrec(int a[],int inicio,int fim){

}


int main(){
    int a[] = {5,2,3};
    int x  = particao(a,0,2);
    for(int i=0;i<3;i++){
        cout<<a[i]<<"|";
    }
    cout<<endl;
    cout<<"Pivo = "<<a[x]<<endl;
}
