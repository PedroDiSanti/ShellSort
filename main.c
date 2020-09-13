#include <stdio.h>

void ShellSort(int *arr, int);

int main(){
    int k, num;
    int array[8] = {9, 8, 3, 7, 5, 6, 4, 1};

    num = sizeof(array)/sizeof(array[0]);

    printf("\n Array now is: ");
    for (k = 0; k < num; k++)
        printf("%d ", array[k]);

    ShellSort(array, num);
}



void ShellSort(int *arr, int num) {
    int i, j, k, tmp;

    for (i = num / 2; i > 0; i = i / 2){
        for (j = i; j < num; j++){
            for(k = j - i; k >= 0; k = k - i){
                if (arr[k+i] >= arr[k])
                    break;
                else{
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                    printf("\n Array now is: ");
                    for (k = 0; k < num; k++)
                        printf("%d ", arr[k]);
                }
            }
        }
    }
}
