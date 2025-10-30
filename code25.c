//write a program to create a voting system until user presses n and display the count of votes

#include<stdio.h>
int main(){
    char choice,n,N;
int vote;
int votea=0,voteb=0,votec=0,total=0;
printf("candidate a\n");
printf("candidate b\n");
printf("candidiate c\n");
printf("enter choice(1-3):");
scanf("%d",&vote);
switch(vote){
    case 1: votea++;
    break;
    case 2:voteb++;
break;
case 3:votec++;
break;
default : printf("invalid vote");
}
printf("Do you want to continue voting(y/n):");
        scanf(" %c", &choice); 

     while(choice != 'n' && choice != 'N');

    printf("\n--- Voting Results ---\n");
    printf("Candidate A: %d votes\n", votea);
    printf("Candidate B: %d votes\n", voteb);
    printf("Candidate C: %d votes\n", votec);
    printf("Total votes: %d\n", total);
}













