#include <stdio.h>
#include<math.h>
int main(){
    int operations;
    char basicArithmetic,PowerANDRoot;
    int a,b;
    float result;
    printf("Enter your operation:\n1.basic arithmetic\n2.power/root");
    scanf("%d",&operations);
    
    switch(operations){
        case 1:
        printf("\nyou selected basic arithmetic:");
        printf("\nenter numbers a and b:");
        scanf("%d %d",&a ,&b);
        printf("\nenter operations (+,-,/,*):");
        scanf(" %c",&basicArithmetic);

        
        switch(basicArithmetic){
            case '+':
            result=a+b;
            printf("your answer is:%f",result);
            break;
            case '-':
            result=a-b;
            printf("your answer is:%f",result);
            break;
            case '/':
            if(b==0){
                printf("you cannot divide any number by zero");
            }else{
                result=a/b;
                printf("your answer is:%f",result);
            }
            break;

            case '*':
            result=a*b;
            printf("your answer is:%f",result);
            break;
            default:
            printf("Invalid Case");
            break;
        }
        break;
        case 2:
        printf("enter a number:");
        scanf("%d",&a);
        printf("enter your operation(s for square, r for root):");
        scanf(" %c",&PowerANDRoot);
        switch(PowerANDRoot){
            case 's':
            result=pow(a,2);
            printf("Your square of a number is:%f",result);
            break;
            
            case 'r':
            if(a<0){
                printf("error: you cannot print root of negative number");
            }else{
                result=sqrt(a);
                printf("Your square of a number is:%f",result);
            }
            break;
            default:
            printf("Invalide Case");
            break;

        }
        break;
        default:
        printf("Ivalide Case");
        break;
        
    }
    return 0;
}






        

