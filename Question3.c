#include <stdio.h>
int main() {
    int i, j, count=0;
    int oimage[4][4]= {{1, 0, 1, 0}, {0, 1, 0, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}};
    printf("<----Original Image---->\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", oimage[i][j]);
            if(oimage[i][j] == 1){
                count += 1;
            }
        }
        printf("\n");
    }
    printf("The original image had %d white pixels.\n", count);
    printf("<----Inverted Image---->\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(oimage[i][j] == 0){
                printf("1 ");
            }else if(oimage[i][j] == 1){
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
