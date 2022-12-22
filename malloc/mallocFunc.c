#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*
* Description - Using the malloc() Function
*/
void StrCpy(char *Str1, char *Str2)
{
    int i;
    for (i=0;Str1[i];i++){
        Str2[i] = Str1[i];
    }
    Str2[i]='\0';
}
int main(void)
{
    char str[] = "Use malloc() to allocate memory";
    char *ptr_str;
    int results;

    /*Calling malloc()*/
    ptr_str = malloc(strlen(str)+1);
    if(ptr_str != NULL){
        StrCpy(str,ptr_str);
        printf("The string pointed to by ptr_str is : %s",ptr_str);
        results = 0;
    }else{
        printf("malloc() function failed\n");
        results =1;
    }
    return results;

}