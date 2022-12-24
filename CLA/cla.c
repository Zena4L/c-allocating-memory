#include <stdio.h>

/*
* description -Passing Command-Line Arguments to the main() Function
*/
int main(int argc, char* argv[])
{
    int i;
    printf("The value recieved by argc is = %d\n",argc);
    printf("There are %d command line arguement passed to main()\n",argc);

    if(argc)
    {
        printf("the first command line arguement is :%d\n",argv[0]);
        printf("The rest of the arguement are\n");
        for(i=1;i<argc;i++)
            printf("%s\n",argv[i]);
    }
    return 0;
}