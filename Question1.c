#include <stdio.h>
int main() {
    int i, j, total;
    int cmarks[3][4] = { {85, 92, 78, 90}, {88, 76, 95, 84}, {90, 85, 88, 92}};
    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 4; j++) {
            total += cmarks[i][j];
        }
        printf("\nClass %d Average Score: %.2f", i + 1, (float)total / 4);
    }
    printf("\n");
    return 0;
}
