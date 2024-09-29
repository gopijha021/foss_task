#include <stdio.h>

int main(){
    int age;
    int role;
    // Asks for age and role no.
    printf("Type your role and age and press enter: \n");
    scanf("%d%d", &age, &role);


    //Gives address of the variables.
    printf("The address where your initial is stored is: %p", &role);
    printf("\nThe address where your initial is stored is: %p", &age);
    return 0;
}