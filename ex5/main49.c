#include <stdio.h>

void ToH(int n,char from_rod,char to_rod,char aux_rod){
    if(n==1){
        printf("\n Move disk 1 from rod %c to rod %c",n,from_rod,to_rod);
        return;
    }
    ToH(n-1,from_rod,aux_rod,to_rod);
    printf("\n Move disk %d from rod %c to rod %c",n,from_rod,to_rod);
    ToH(n-1,aux_rod,to_rod,from_rod);
}

int main(){
    int n=3;
    ToH(n,'A','B','C');
    return 0;
}
