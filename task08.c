#include <stdio.h>

int main()
{
    int age, vehicletype, haspass, isweekend, ispeakhour, hours;
    double fee = 0, surcharge = 0, discount = 0, finalamount = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your vehicletype (1/2/3): "); 
    scanf("%d", &vehicletype);

    printf("Enter your haspass (1/0): ");
    scanf("%d", &haspass);

    printf("Enter Weekend (1/0): ");
    scanf("%d", &isweekend);

    printf("Enter Peak Hour (1/0): ");
    scanf("%d", &ispeakhour);

    printf("Enter hours: ");
    scanf("%d", &hours);


    if (age >= 18)
    {
        if (vehicletype == 1 || vehicletype == 2 || vehicletype == 3)
        {
            if (haspass == 1 || isweekend == 0 || vehicletype == 3)
            {
                printf("\nYOU ARE ALLOWED TO ENTER\n");


                if (vehicletype == 3)
                {
                    if (hours <= 3)
                    {
                        fee = 0;
                    }
                    else
                    {
                        fee = (hours - 3) * 100;
                    }
                }
                else if (vehicletype == 2)
                {
                    fee = hours * 100;
                }
                else if (vehicletype == 1)
                {
                    fee = hours * 200;
                }

                if (isweekend == 1 && ispeakhour == 1)
                {
                    surcharge = fee * 0.20;
                    fee = fee + surcharge;
                }


                if (haspass == 1)
                {
                    discount = fee * 0.25;
                    fee = fee - discount;
                }

                finalamount = fee;

                printf("Vehicle Type: ");

                if (vehicletype == 1)
                {
                    printf("Car\n");
                }
                else if (vehicletype == 2)
                {
                    printf("Motorcycle\n");
                }
                else
                {
                    printf("Electric Vehicle\n");
                }

                printf("Parking Hours: %d\n", hours);
                printf("Original Parking Fee: %.2f\n", 
                       finalamount + discount - surcharge);

                printf("Weekend Peak Surcharge: %.2f\n", surcharge);
                printf("Parking Pass Discount: %.2f\n", discount);
                printf("Final Amount to Pay: %.2f\n", finalamount);
            }
            else
            {
                printf("\nYOU ARE NOT ALLOWED TO ENTER\n");
                printf("REASON: PARKING ENTRY CONDITIONS NOT SATISFIED\n");
            }
        }
        else
        {
            printf("\nYOU ARE NOT ALLOWED TO ENTER\n");
            printf("REASON: INVALID VEHICLE TYPE\n");
        }
    }
    else
    {
        printf("\nYOU ARE NOT ALLOWED TO ENTER\n");
        printf("REASON: DRIVER IS UNDER 18\n");
    }

    return 0;
}