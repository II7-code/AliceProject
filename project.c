//commit2 project.c
#include<stdio.h>

void getGugudan(int danNum){
    int i;
    for(i=1;i<=9;i++){
        printf("%d x %d = %d",danNum,i,danNum*i);
    }
}

int main(){
    int danNum;
    printf("I want get gugudan \n");
    printf("what you want dan? ");
    scanf("%d",&danNum);
    getGugudan(danNum);
}
