#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int swap (int i, float *v){
    int temp;    
    temp = v[i];
    v[i] = v[i+1];
    v[i+1] = temp;    
}

int printarray (int i, float *v){
     int j;
     for (j = 0; j < i; j++){
        printf("%f ", v[j]);
    }   
    
}

int bubblesort ( int i, int l,  float *v){
    int j;
    bool trocado = false;
        for (j = 0; j < i; j++){
            if(v[j] > v[j+1]){
                swap(j, v);
                trocado = true;
            }
       }
       
    if(trocado == true){
        bubblesort(i-1, l, v);     
    }else{ 
        printf("Seu vetor, ordenado, é: ");
        printarray(l, v);        
    }
}

int main (){
    int i, j;
    float *v;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &i);
    v = (float *) malloc(i*sizeof(float));
    if (v==NULL)
    {
        printf("Memoria insuficiente.\n");
        exit(1);
    }
    
    printf("Insira os valores do vetor: ");
    for (j = 0; j < i; j++){
        scanf("%f", &v[j]);
    }

    bubblesort(i-1, i, v);
}
