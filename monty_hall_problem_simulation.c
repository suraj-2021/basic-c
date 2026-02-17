#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_DOORS 100
#define DOORS_TO_OPEN 70
#define TOTAL_TRIALS 1000000

int main() {
    int stick_wins = 0;
    int switch_wins = 0;

    // Seed the random number generator
    srand(time(NULL));

    printf("Simulating %d games with %d doors...\n", TOTAL_TRIALS, TOTAL_DOORS);
    printf("Monty will open %d losing doors.\n\n", DOORS_TO_OPEN);

    for (int i = 0; i < TOTAL_TRIALS; i++) {
        // 1. Hide the car behind a random door (0 to 99)
        int car_door = rand() % TOTAL_DOORS;

        // 2. You make your initial choice
        int my_choice = rand() % TOTAL_DOORS;

        // 3. Strategy: Sticking
        // You win only if your first choice was exactly the car_door.
        if (my_choice == car_door) {
            stick_wins++;
        }

        // 4. Strategy: Switching
        /* If you switch, you are picking a NEW door from the remaining ones.
           There are (TOTAL_DOORS - DOORS_TO_OPEN - 1) other doors left.
           In our case: 100 - 70 - 1 = 29 other doors to choose from.
           
           Mathematically, the 'Switch' win condition is:
           If your first pick was WRONG (99/100 chance), the car is in 
           the 'Other' group. Since Monty removed 70 losers, the car 
           is now hidden among the remaining 29.
        */
        if (my_choice != car_door) {
            /* If the car was NOT your first choice, it's in the remaining pool.
               The chance of picking it from the 29 remaining doors is 1/29.
            */
            if ((rand() % (TOTAL_DOORS - DOORS_TO_OPEN - 1)) == 0) {
                switch_wins++;
            }
        }
    }

    printf("--- RESULTS ---\n");
    printf("Stay Strategy Wins:   %d (%.2f%%)\n", stick_wins, (float)stick_wins / TOTAL_TRIALS * 100);
    printf("Switch Strategy Wins: %d (%.2f%%)\n", switch_wins, (float)switch_wins / TOTAL_TRIALS * 100);

    return 0;
}
