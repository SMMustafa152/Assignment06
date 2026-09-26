#include <stdio.h>
int main(){
    int age;
    char weekday;
    int weekdayprice=1000 , weekendprice=1500;
    float discountprice,finalprice;
    printf("Enter your age:");
    scanf(" %d",&age);

    if(age < 0)
{
    printf("Invalid age");
    return 0;
}

printf("Enter weekday(W/H): ");
scanf(" %c", &weekday);



if(weekday != 'W' && weekday != 'w' &&
   weekday != 'H' && weekday != 'h')
{
    printf("Invalid weekday");
    return 0;
}

    if(age<=12 || age>=60)
    {
        if(weekday=='W' || weekday=='w')
        {
          discountprice=weekdayprice*0.5;
          weekdayprice-=discountprice;
          finalprice=weekdayprice;
        }
         else if(weekday=='H'||weekday=='h')
            {
             discountprice=weekendprice*0.2;
             weekendprice-=discountprice;
             finalprice=weekendprice;
            }
        
    }else{
            if(weekday=='W'|| weekday=='w'){
              finalprice=weekdayprice;
            } else if(weekday=='H'||weekday=='h') {
                 finalprice=weekendprice;
            }       


        
    }
    printf("YOUR FINAL PRICE IS:%2f",finalprice);
      return 0;

}
