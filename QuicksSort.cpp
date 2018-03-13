#include<iostream>
#include<cstdlib>

using namespace std;

void troca(int v[],int i, int j){
    int x = v[i];
    v[i] = v [j];
    v[j] = x;
}

void quicksort(int v[],int inicio,int final){
    int pivo = v[inicio];
    int i=inicio+1, j= final;
    bool flag = false;
    if(final-inicio==1){
        if(v[inicio]>v[final]){
            troca(v,inicio,final);
        }
        return;
    }
    while(i<j){
        while(v[i]<pivo&&i<=j) i++;
        while(v[j]>=pivo &&j>=i) j--;
        if(i<j){
            troca(v,j,i);
        }else{
            troca(v,j,inicio);
        }
        flag=true;
    }

        quicksort(v,inicio,j-1);
        quicksort(v,j+1,final);



}


int main(){
    long int x = 8;
    int v[x] = {5,3,4,17,14,20,10};
    /*for(int i=0;i<x;i++){
        v[i]=rand()%5;
    }*/
    //cout<<endl;
    quicksort(v,0,x-1);
    for(int i=0;i<x;i++){
       cout<< v[i]<<"|";
    }
    cout<<endl;
}
