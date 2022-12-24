#include <stdio.h>

/*
*   description -Using the enum data type
*/
int main(void)
{
    enum units {penny = 1,nickel = 5,dime =10,quater = 25,dollar = 100};
    int money_unit[5] = {penny,nickel,dime,quater,dollar};
    char* unit_name[5]={"penny(s)","nickel(s)","dime(s)","quater(s)","dollar(s)"};
    int i ,temp ,cent;
    printf("enter a monetry value in cent\n");
    scanf("%d",&cent);
    printf("which is equivalent to \n");
    temp =0;
    for(i=0;i<5;i++)
    {
        temp = cent / money_unit[i];
        cent = temp * money_unit[i];
        if (temp)
            printf("%d %s",temp,unit_name[i]);
    };
    printf("\n");
    return 0;
}