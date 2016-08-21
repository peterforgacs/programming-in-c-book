/*
  Compute the difference between two timestamps
 */
#include <stdio.h>
#include <stdbool.h>

struct time{
    int hour;
    int minute;
    int second;
};

int main(void){
    struct time elapsedTime(struct time, struct time);
    struct time inputTime1;
    struct time inputTime2;
    struct time difference;
    
    printf("Please enter two timestamps in the following format 16:0:0.\n");
    scanf ("%i:%i:%i", &inputTime1.hour, &inputTime1.minute, &inputTime1.second);
    scanf ("%i:%i:%i", &inputTime2.hour, &inputTime2.minute, &inputTime2.second);
    
    difference = elapsedTime(inputTime1, inputTime2);
    printf("The time elapsed between %.2i:%.2i:%.2i ", inputTime1.hour, inputTime1.minute, inputTime1.second);
    printf("and %.2i:%.2i:%.2i:\n", inputTime2.hour, inputTime2.minute, inputTime2.second);
    printf("%.2i:%.2i:%.2i", difference.hour, difference.minute, difference.second);
    return 0;
}

struct time elapsedTime(struct time inputTime1, struct time inputTime2 ){
    bool isBefore(struct time, struct time);
    struct time updateTime(struct time);
    struct time difference = {0, 0, 0};
    
    while ( isBefore(inputTime1, inputTime2) ){
        inputTime1 = updateTime(inputTime1);
        difference = updateTime(difference);
    }
    
    return difference;
}

bool isBefore(struct time lhs, struct time rhs){
    int lhsSeconds = lhs.hour * 3600 + lhs.minute * 60 + lhs.second;
    int rhsSeconds = rhs.hour * 3600 + rhs.minute * 60 + rhs.second;
    
    if (lhsSeconds != rhsSeconds){
        return true;
    }
    else
        return false;
}

struct time updateTime (struct time now){
    ++now.second;
    
    if (now.second == 60){
        now.second = 0;
        ++now.minute;
    }
    
    if (now.minute == 60){
        now.minute = 0;
        ++now.hour; 
    }
    
    if (now.hour == 24){
        now.hour = 0;
    }
   
    return now;
}