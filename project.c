//commit4 project.c
#include<stdio.h>

void getGugudan(int danNum,int num){
    int i;
    for(i=1;i<=num;i++){
        printf("%d x %d = %d\n",danNum,i,danNum*i);
    }
}

void getTotalLine(int danNum,int num){
    printf("total Line = %d",danNum*num);
}
    

int main(){
    int danNum;
    int num;
    printf("I want get gugudan \n");
    printf("what do you want dan? ");
    scanf("%d",&danNum);
    printf("what do you want num? ");
    scanf("%d",&num);
    getGugudan(danNum,num);
    getTotalLine(danNum,num;)
}
