
#include <stdio.h>
//Multidimensional array//


int main(){

int A[3][4], B[4][3];

for(int i = 0; i<3; i++){
    for(int j= 0; j<4; j++){
        printf("Enter number :\n");
        scanf("%d\t", &A[i][j]); 
    }
    printf("\n");
}

for(int i=0; i<3; i++){
    for(int j =0; j<4; j++){
        B[j][i] = A[i][j];
    }
}
for(int i = 0; i<4; i++){
    for(int j = 0; j<3; j++){
        printf("%d\t", B[i][j]);
    }
    printf("\n");
}


    return 0;
}