#include <stdio.h>
int main(){
    char lightcolor,buttonpressed;
    printf("enter the light color(g for green , r for red, , y for yellow):");
    scanf(" %c",&lightcolor);

    switch(lightcolor){
        case 'r':
        printf("enter the button pressed for pedestrian (y for yes and , n for no):");
        scanf(" %c",&buttonpressed);
        switch(buttonpressed){
            case 'y':
            printf("stop and wait for the pedestrian to cross");
            break;
            case 'n':
            printf("stop and wait for the light to turn green");
            break;
            default:
            printf("invalid input for the pedestrian");
            break;
        }
        break;
        case 'y':
        printf("slow down the light is about to turn red");
        break;
        case 'g':
        printf("enter the button pressed for pedestrian (y for yes and , n for no):");
        scanf(" %c",&buttonpressed);
        switch(buttonpressed){
            case 'y':
            printf("go but watch for the pedestrian");
            break;
            case 'n':
            printf("GO");
            break;
            default:
            printf("invalid input for the pedestrian");
            break;
        }
        break;
        default:
        printf("invalid input for the lightcolor");
        break;
    }
     
    
    return 0;

}



            
