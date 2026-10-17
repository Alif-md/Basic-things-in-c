#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int guessgame(){
    /*this the the gussing game 
     t is tries,g is guess and ans the number you have to guess
     min and max is the range*/ 
    int t=0 ,g, ans,min,max;
    srand(time(NULL));
printf("welcome to the number guessing game\nenter to continue");
getchar();
printf("enter the maximum number \n");
scanf("%d",&max);
printf("enter the minumum number\n ");
scanf("%d",&min);
 if (min > max) {
        printf("Minimum must not be greater than maximum.\n");
        return;
    }
 ans =(rand()%(max - min + 1))+min;
do {
printf("Guess the number between %d and %d\n",max,min);
scanf("%d",&g);
if(ans<g){
    printf("lower\n");

}
else if(ans>g){
    printf("higher\n");
}
else{
    printf("correct!\n");
}
t++;
}
while(g!=ans);
printf("the answer is %d\nyou tired %d times",ans,t);

}
int rpc(){
    /*this is rock paper scissor
    x the the input of the user
    rpc is the random guess by computer
    choice is the local varible for the type of game you want to play*/
    int x, choice,rpc,t=0;
    srand(time(NULL));
 rpc =(rand()%(3))+1;

printf("welcome to rock paper sicor game\nchose which mode you want to play\n ");

printf("1.normal\n ");
printf("2.untill you win \n ");
scanf("%d",&choice);


switch (choice)
{
case 1:
    do{
printf("+-----------+\n");
printf("| chose one |\n");
printf("| 1.rock    |\n");
printf("| 2.paper   |\n");
printf("| 3.scissor |\n");
printf("+-----------+\n");
scanf("%d",&x);
}
while(x<1||x>3);
if(x==rpc){
    printf("It's a draw");

}
else if((x==1&rpc==3)||(x==2&rpc==1)||(x==3&rpc==2)){
            printf("You won\n");
           }
else{
    printf("computer won");
}

    break;
case 2:
   
        do{
printf("+-----------------------------+\n");
printf("|           chose one         |\n");
printf("|           1.rock            |\n");
printf("|           2.paper           |\n");
printf("|           3.scissor         |\n");
printf("|if you want to exit press 0  |\n");
printf("+-----------------------------+\n");

scanf("%d",&x);
if (x==0){
printf("goodbye");
break;
if (x<0||x>3){
    printf("error\n");
}

}
else if((x==2&rpc==3)||(x==3&rpc==1)||(x==1&rpc==2)){
    printf("computer won\nyou may try again\n");
    t++;

}
else{
     printf("you finally won!\nafter %d tries",t);
     
}
    

}
while(x!=0);



default:
    break;
}




}
int main(){
    int c;
    printf("+--------------------------+\n");
    printf("| welcome to basic c games |\n");
    printf("|   select one the games   |\n");
    printf("|  1.Number guessing game  |\n");
    printf("|  2.ROck Paper Scissor    |\n");
    printf("+--------------------------+\n");
scanf("%d",&c);
switch (c)
{
case 1:
    guessgame();
    break;
case 2:
rpc();
break;

default:
    break;
}
    

}
