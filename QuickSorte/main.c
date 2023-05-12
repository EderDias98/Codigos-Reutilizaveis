
#include <stdio.h>


void Troca(int *vet, int i, int j){
    int temp = vet[i];
    vet[i] = vet[j];
    vet[j] = temp;
}

void QuickSorte(int *vet, int esq, int dir){
    if(dir <= esq)
        return;
    int i,j;
    for(i=esq +1, j=esq; i<=dir ; i++){
        if(vet[i] < vet[esq]){
            j++;
            Troca(vet,i,j);
        }
    }

    Troca(vet, j, esq);
    QuickSorte(vet, j+1, dir);
    QuickSorte(vet, esq, j-1);

}


int main(){

    printf("Hello world");
    int vet[6] = {4,7,1,2,34,5};
    QuickSorte(vet, 0,5);
    for(int i=0;i<6;i++){
        printf(" %d ", vet[i]);
    }
}