#include <stdio.h>
#include <string.h>

// Define a structure to hold country information
struct Country {
    char name[50];
    long population;
    float area; // in square kilometers
    char capital[50];
};

// Function to display country information
void displayCountryInfo(struct Country c) {
    printf("Country: %s\n", c.name);
    printf("Population: %ld\n", c.population);
    printf("Area: %.2f sq km\n", c.area);
    printf("Capital: %s\n", c.capital);
    printf("---------------------------\n");
}

int main() {
    // Create an array of Country structures
    struct Country countries[3];

    // Initialize data for each country
    strcpy(countries[0].name, "India");
    countries[0].population = 1393409038;
    countries[0].area = 3287263.0;
    strcpy(countries[0].capital, "New Delhi");

    strcpy(countries[1].name, "United States");
    countries[1].population = 331002651;
    countries[1].area = 9833517.0;
    strcpy(countries[1].capital, "Washington, D.C.");

    strcpy(countries[2].name, "Japan");
    countries[2].population = 126476461;
    countries[2].area = 377975.0;
    strcpy(countries[2].capital, "Tokyo");

    // Display information about each country
    printf("Country Information:\n");
    printf("---------------------------\n");
    
    for (int i = 0; i < 3; i++) {
        displayCountryInfo(countries[i]);
    }

    return 0;
}
