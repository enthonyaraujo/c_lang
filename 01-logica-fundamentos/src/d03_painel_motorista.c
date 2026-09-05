#include <stdio.h>

int main(void) {
    int status_motor = 1; // O motor esta "Aquecendo"

    switch (status_motor) {
        case 0:
            printf("Motor Desligado.\n");
            break;

        case 1:
            printf("Motor Aquecendo...\n");
            // sem o break ele não aparece e ainda para proximo case
            break;  
        
        case 2:
            printf("Motor em Funcionamento Pleno!\n");
            break;
        
        default:
            printf("Status de erro detectado.\n");
            break;
    }

    return 0;
}