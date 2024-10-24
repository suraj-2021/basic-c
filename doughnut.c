#include <stdio.h>
#include <math.h>

#define WIDTH 80
#define HEIGHT 22

int main() {
    int x, y;
    double radius = 10.0; // Radius of the donut
    double inner_radius = 5.0; // Inner radius to create the hole in the donut

    printf("\x1b[2J"); // Clear screen

    for (y = -HEIGHT / 2; y < HEIGHT / 2; y++) {
        for (x = -WIDTH / 2; x < WIDTH / 2; x++) {
            // Calculate the distance from the center
            double distance = sqrt(x * x + y * y);

            // Check if the point is within the donut shape
            if (distance < radius && distance > inner_radius) {
                putchar('*'); // Draw the donut
            } else {
                putchar(' '); // Draw space
            }
        }
        putchar('\n'); // New line after each row
    }

    return 0;
}
