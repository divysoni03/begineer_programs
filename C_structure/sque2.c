// Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format.

#include<stdio.h>

struct Time{
    int hours,minutes,seconds;
};

struct Time scan(){
    struct Time t;
    int hour,min,sec;
    printf("\nEnter hours : ");
    scanf("%d",&hour);
    if(hour<12 && hour >0){
        t.hours=hour;
    }
    else{
        printf("Invalid time input ! ");
    }
    printf("Enter minutes : ");
    scanf("%d",&min);
    if(min>0 && min <=60 ){
        t.minutes=min;
    }
    else{
        printf("Invalid time input ! ");
    }
    printf("Enter seconds : ");
    scanf("%d",&sec);
    if(sec>0 && sec <=60){
        t.seconds=sec;
    }
    else{
        printf("Invalid time input ! ");
    }

    return t;
}

void displayTime(struct Time t){
    printf("%d hours : %d minutes : %d seconds",t.hours,t.minutes,t.seconds);
}

int main(){
    struct Time t;
    
    t=scan();
    displayTime(t);
    
    return 0;

}