#include <stdio.h>
int main() {
    int i, j, count=0;
    int cseats[3][3]= {{1,0,1}, {0,0,1}, {1,1,0}};
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(cseats[i][j] == 0){
                count +=1;
            }
        }
    }
    printf("There are a total of %d seats available, and their positions are:\n", count);
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(cseats[i][j] == 0){
                printf("Row %d Seat %d\n", i+1, j+1);
            }
        }
    }
    return 0;
}
