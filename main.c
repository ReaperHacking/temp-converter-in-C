#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // ctype library needed for the toupper function

//Temperature Converter in C!
int main() {
    //Initializing Variables
    float temp;
    char unit;
    char choice;

    //do-while loop for maximum efficiency
    do {
        printf("Is the temperature in (F) or (C): ");
        scanf(" %c", &unit);

        unit = toupper(unit);

        if (unit == 'C') {
            printf("Enter temperature in celsius: ");
            scanf("%f", &temp);

            float fahrenheit = (temp * 9/5) + 32;
            printf("The temperature in fahrenheit is: %f\n", fahrenheit);
        }
        else if (unit == 'F') {
            printf("Enter temperature in fahrenheit: ");
            scanf("%f", &temp);

            float celsius = (temp - 32) * 5/9;
            printf("The temperature in celsius is: %f\n", celsius);
        }
        else {
            printf("\nERROR: Invalid temperature unit!\n");
            break;
        }

        //Prompts the user if they would like to restart the program
        //The program will keep going as long as the user enters Y
        //If the user enters anything other then Y, it stops
        printf("Would you like to convert again? (Y/N): ");
        scanf(" %c", &choice);
        choice = toupper(choice);

    } while (choice == 'Y');

    return 0;
}





