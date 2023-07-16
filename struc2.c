


//  Q) Enter address (house no,block ,city,state) of 5 people?


#include<stdio.h>


typedef struct address{
    int houseno;
    int block;
    char city[20];
    char state[20];
};

void printaddress(struct address add){
    printf("address is %d %d %s %s",add.houseno,add.block,add.city,add.state);
}

void main (){
struct address per[5];
    // input
printf("Enter info of first person\n");
scanf("%d",&per[0].houseno);
scanf("%d",&per[0].block);
scanf("%s",&per[0].city);
scanf("%s",&per[0].state);

printf("Enter info of second person\n");
scanf("%d",&per[1].houseno);
scanf("%d",&per[1].block);
scanf("%s",&per[1].city);
scanf("%s",&per[1].state);

printf("Enter info of third person\n");
scanf("%d",&per[2].houseno);
scanf("%d",&per[2].block);
scanf("%s",&per[2].city);
scanf("%s",&per[2].state);

printf("Enter info of forth person\n");
scanf("%d",&per[3].houseno);
scanf("%d",&per[3].block);
scanf("%s",&per[3].city);
scanf("%s",&per[3].state);

printf("Enter info of fifth person\n");
scanf("%d",&per[4].houseno);
scanf("%d",&per[4].block);
scanf("%s",&per[4].city);
scanf("%s",&per[4].state);

printaddress(per[0]);
printaddress(per[1]);
printaddress(per[2]);
printaddress(per[3]);
printaddress(per[4]);

}