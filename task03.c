#include <stdio.h>
int main(){
    int units,ratePerUnit;
    float totalbill;
    char connectionType;
    printf("Enter number of units used:");
    scanf("%d",&units);
    printf("Enter connection type (D for domestic and C for commercial):");
    scanf(" %c",&connectionType);

    if(connectionType=='d'){
        if(units<=100){
            ratePerUnit=20;
        } else{
            if(units<=300){
                ratePerUnit=25;
            } else{
                ratePerUnit=35;
            }
        }
        printf("\nyour connection type is domestic");
        totalbill=ratePerUnit*units;
        printf("\nyour total bill is :%f",totalbill);
    }
    else{
        if(connectionType=='c'){
            if(units<=100){
                ratePerUnit=30;
            } else{
                if(units<=300){
                    ratePerUnit=45;
                } else{
                    ratePerUnit=60;
                }
            }
            printf("\nyour connection type is commercial");
            totalbill=ratePerUnit*units;
            printf("\nyour total bill is :%f",totalbill);
        }
    }
    

return 0;
    }
    