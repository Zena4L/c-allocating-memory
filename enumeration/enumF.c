#include <stdio.h>

/*
* Description - enum datatype in C
*/
int main(void)
{
    enum languages {human = 100, animal = 50 , computer};
    enum days {SUN,MON,TUE,WED,THURS,FRI,SAT};

    printf("human = %d, animal = %d, computer = %d\n",human,animal,computer);
    printf("SUN = %d\n",SUN);
    printf("MON = %d\n",MON);
    printf("TUES = %d\n",TUE);
    printf("WED = %d\n",WED);
    printf("THURS = %d\n",THURS);
    printf("FRI = %d\n",FRI);
    printf("SAT = %d\n",SAT);

    return 0;
}