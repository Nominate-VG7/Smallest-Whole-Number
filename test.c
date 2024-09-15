#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of y: ");
    scanf("%d",&y);

    printf("Enter the value of z: ");
    scanf("%d",&z);

    if(x<y){
        if(x<z){
            printf("x is smallest value i.e %d",x);
        }
        else{
            printf("z is the smallest value i.e %d",z);
        }
    }
    else{
        if(y<z){
            printf("y is smallest i.e %d",y);
        }
        else{
            printf("z is the smallest i.e %d", z);
        }
    }
    return 0;
}