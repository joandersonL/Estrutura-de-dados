#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void margeSorte(int v[],int n);
void margeSorteAux(int v[],int inicio, int fim,int orde[]);

int main(){
    int x =1000;
    int v[x];
    for(int i=0;i<x;i++){
        v[i]= rand()%100;
    }
    margeSorte(v,x);
    for(int i=0;i<x;i++){
        cout<<v[i]<<"|";
    }
    return 0;
}
void margeSorte(int v[],int n){
    int veAux[n];
    margeSorteAux(v,0,n-1,veAux);
}
void margeSorteAux(int v[],int inicio,int fim,int orde[]){
    if(inicio == fim){
//        cout<<"xxxxxxxxxxxxx"<<endl;
        return;
    }
    else{
        int meio = (fim+inicio)/2;
     //   cout<<meio<<endl;
        margeSorteAux(v,inicio,meio,orde);
        margeSorteAux(v,meio+1,fim,orde);
        for(int i=inicio,j=meio+1,k=0;k<=(fim-inicio);k++){
            if(i>meio){
                orde[k]=v[j];
                j++;
            }else if(j>fim){
                orde[k]=v[i];
                i++;
            }else{
                if(v[i]<v[j]){
                    orde[k]=v[i];
                    i++;
                }else{
                    orde[k]=v[j];
                    j++;
                }
            }

        }
        for(int k=0,i=inicio;k<=(fim-inicio);k++,i++){
            v[i]=orde[k];
        }
        return;

    }
}


