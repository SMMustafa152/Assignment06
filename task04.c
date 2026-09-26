#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter three sides of the tirangle:");
    scanf("%d %d %d",&side1 ,&side2 ,&side3);
    if((side1+side2>side3) && (side1+side3>side2) &&(side2+side3>side1)){
        if(side1==side2&&side1==side3){
            printf("\nits an equilateral triangle");
        }else{
            if(side1==side2||side1==side3||side2==side3){
                printf("\nits an isosceles triangle");
            }else{
                 printf("\nits an scalene triangle");

             }
            }
        }
        else{
            printf("INVALID TRIANGLE");
        }






    return 0;
}