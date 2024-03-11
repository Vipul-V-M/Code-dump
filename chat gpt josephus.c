#include <stdio.h>
#include <stdlib.h>

void josephus(char** names, int* chosen_integers, int num_people, int initial_count) {
    int* circle = (int*)malloc(num_people * sizeof(int));
    int* eliminated = (int*)malloc(num_people * sizeof(int));
    int current_index = 0;
    int remaining_people = num_people;
    int i, j, count;

    // Initialize the circle and eliminated arrays
    for (i = 0; i < num_people; i++) {
        circle[i] = i;
        eliminated[i] = 0;
    }

    while (remaining_people > 1) {
        count = chosen_integers[current_index] - 1;  // Adjust count to match index-based array

        // Find the person to be eliminated
        for (j = 0; j < count; j++) {
            do {
                current_index = (current_index + 1) % num_people;
            } while (eliminated[circle[current_index]]);
        }

        // Eliminate the person
        eliminated[circle[current_index]] = 1;
        remaining_people--;

        // Find the next valid person
        do {
            current_index = (current_index + 1) % num_people;
        } while (eliminated[circle[current_index]]);
    }

    // Print the elimination order
    printf("Elimination Order: ");
    for (i = 0; i < num_people; i++) {
        if (!eliminated[i]) {
            printf("%s ", names[i]);
            break;
        }
    }
    printf("\n");

    free(circle);
    free(eliminated);
}

int main() {
    char* names[] = {"A", "B", "C", "D", "E"};
    int chosen_integers[] = {3, 4, 6, 2, 7};
    int num_people = sizeof(names) / sizeof(names[0]);
    int initial_count = 2;

    josephus(names, chosen_integers, num_people, initial_count);

    return 0;
}
