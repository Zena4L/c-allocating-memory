#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
* Description - Using the free() and malloc() Functions Together
*/
int main(void)
{
    int max, *ptr_int;
    int terminate;
    char key = 'c';

    max = 0;
    terminate = 0;

    while (key != 'x'){
        printf("Enter a single digit number\n");
        
        scanf("%d",&max);
        /*allocating malloc()*/
        ptr_int = malloc(max * max * sizeof(int));

        if(ptr_int != NULL){
            DataMultiply(max, ptr_int);
            TablePrint(max, ptr_int);
            free(ptr_int);
        }else{
            printf("malloc() failed\n");
            terminate = 1;
            key = 'x'; /*Stop the looop*/
        }
        printf("\nPress 'x' to quit : others to continue");
        scanf("%s",&key);
    }
    printf("\nBye bye");
    return terminate;
}

void DataMultiply(int max , int *ptr)
{
    int i,j;
    for (i=0; i<max;i++){
        for (j=0;j<max;j++){
            *(ptr + i * max * j) = (i+1) * (j+1);
        }
    }
}

void TablePrint(int max , int *ptr)
{
    int i, j;
    printf("The multiplication table of %d is:\n",max);
    printf(" ");
    for (i=0; i<max; i++)
        printf("%4d", i+1);
    printf("\n ");
    for (i=0; i<max; i++)
        printf("----", i+1);
    
    for (i =0 ; i< max; i++){
        printf("\n%d|", i+1);
        for(j=0;j<max;j++)
            printf("%3d" , *(ptr + i * max + j));

    }
}