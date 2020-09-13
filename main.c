#include <stdio.h>

void ShellSort(int *array, int);

int main(){
    int i, tamanhoArray;
    int array[8] = {9, 8, 3, 7, 5, 6, 4, 1};

    tamanhoArray = sizeof(array)/sizeof(array[0]);

    printf("\n Array now is: ");
    for (i = 0; i < tamanhoArray; i++)
        printf("%d ", array[i]);

    ShellSort(array, tamanhoArray);
}

void ShellSort(int *array, int tamanhoArray) {
    int i , j , h = 1, valor;

    while(h < tamanhoArray) {
        h = 3 * h + 1;
    }

    while (h > 0) {
        for(i = h; i < tamanhoArray; i++) {
            valor = array[i];
            j = i;
            while (j > h-1 && valor <= array[j - h]) {
                array[j] = array[j - h];
                j = j - h;
            }
            array[j] = valor;
        }
        printf("\n Array now is: ");
        for (i = 0; i < tamanhoArray; i++)
            printf("%d ", array[i]);
        h = h / 3;
    }
}
