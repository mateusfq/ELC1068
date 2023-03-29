    #include <stdio.h>
    #include <stdlib.h>
    
    int printarray (int i, int *v){
        int j;
        for (j = 0; j < i; j++){
            printf("%d ", v[j]);
        }   
        printf("\n");
    }
    int insercaodireta ( int i,  int *v){
        int j, l, aux;
        printf("O vetor inserido, é: ");
        printarray(i, v);
        //Ordenação
            for (j = 1; j < i; j++){
            l = j-1;
            aux = v[j];
                while (l >= 0 && aux < v[l]){
                    v[l+1] = v[l];
                    l--;
                }
                v[l+1] = aux;
            }
    
            printf("Seu vetor, ordenado, é: ");
            printarray(i, v);        
}
    int main (){
        int i, j;
        int *v;
        printf("Insira o tamanho do vetor: ");
        scanf("%d", &i);
        v = (int *) malloc(i*sizeof(int));
        if (v==NULL)
        {
            printf("Memoria insuficiente.\n");
            exit(1);
        }
        
        printf("Insira os valores do vetor: ");
        for (j = 0; j < i; j++){
            scanf("%d", &v[j]);
        }

        insercaodireta(i, v);
    }
