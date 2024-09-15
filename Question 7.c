#include <stdio.h>

int main() {
    int lightIntensity;

    printf("Enter the light intensity value (0-1000): ");
    scanf("%d", &lightIntensity);

    
    if (lightIntensity > 500) {
        printf("The light intensity is exposed under sunshine.\n");
    } else if (lightIntensity >= 0 && lightIntensity <= 100) {
        printf("The light intensity is evening.\n");
    } else if (lightIntensity > 100 && lightIntensity <= 500) {
        printf("The light intensity is lighting.\n");
    } else {
        printf("Invalid light intensity value.\n");
    }

    return 0;
}