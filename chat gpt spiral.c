#include <stdio.h>

#define ROWS 4
#define COLS 4

void spiralTraversal(int rows, int cols, int arr[][COLS]) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int dir = 0; // 0: left to right, 1: top to bottom, 2: right to left, 3: bottom to top

    while (top <= bottom && left <= right) {
        if (dir == 0) { // traverse left to right
            for (int i = left; i <= right; i++) {
                printf("%d ", arr[top][i]);
            }
            top++;
        } else if (dir == 1) { // traverse top to bottom
            for (int i = top; i <= bottom; i++) {
                printf("%d ", arr[i][right]);
            }
            right--;
        } else if (dir == 2) { // traverse right to left
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        } else if (dir == 3) { // traverse bottom to top
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }

        dir = (dir + 1) % 4; // update direction
    }
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12},
                           {13, 14, 15, 16}};

    spiralTraversal(ROWS, COLS, arr);

    return 0;
}
