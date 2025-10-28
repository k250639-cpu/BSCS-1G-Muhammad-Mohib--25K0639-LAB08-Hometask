#include <stdio.h>
int main() {
    int i, j;
    int grid[4][4]= {{12, 15, 10, 9}, {11, 8, 12, 13}, {14, 13, 9, 7}, {16, 11, 10, 8}};
    printf("Cold Spots found: \n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if((grid[i][j] < grid[i][j+1]) && (grid[i][j] < grid[i+1][j]) && (grid[i][j] < grid[i-1][j]) && (grid[i][j] < grid[i][j-1])){
                printf("At position (%d,%d) with temperature %d celsius.\n", i+1, j+1, grid[i][j]);
            }
        }
    }
    return 0;
}
