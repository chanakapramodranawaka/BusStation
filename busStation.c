#include <stdio.h>
int main(void)
{
    int avarage,count,bus_bill,total;

    for(count=1; count<=20; count++)
    {
        printf("Please enter %d Bus Bill ",count);
        scanf("%d",&bus_bill);

        total = total+bus_bill;
    }

    avarage = total/20;

    printf("Your daily income average is : %d", avarage);

    return 0;
}
