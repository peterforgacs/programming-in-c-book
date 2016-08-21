#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

struct date{
    int year;
    int month;
    int day;
};

struct time{
    int hour;
    int minute;
    int second;
};

struct dateAndTime{
    struct date sdate;
    struct time stim;
};

int main(void){
    void clockKeeper (struct dateAndTime);
    
    printf("Please enter a date in the following format: 2016:06:09 22:06:29\n");
    struct dateAndTime input;
    scanf("%i:%i:%i %i:%i:%i", 
    &input.sdate.year, &input.sdate.month, &input.sdate.day,
    &input.stime.hour, &input.stime.minute, &input.stime.second);
    clockKeeper(input);
}
void clockKeeper (struct dateAndTime currentTime){
    struct time updateTime (struct time);
    struct date updateDate (struct date);
    
    while (true){
        currentTime.stime = updateTime(currentTime.stime);
        if (currentTime.stime.hour == 0 && currentTime.stime.minute == 0 && currentTime.stime.second == 0){
            currentTime.sdate = updateDate(currentTime.sdate);
        }
        system("sleep 1s");
        printf("%.2i:%.2i:%.2i %.2i:%.2i:%.2i\n",
                currentTime.sdate.year, currentTime.sdate.month, currentTime.sdate.day,
                currentTime.stime.hour, currentTime.stime.minute, currentTime.stime.second 
                );
    }
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
    
        if (now.hour == 24){
            now.hour = 0;    
        }
    }
    return now;
}

struct date updateDate (struct date today){
    int numberOfDays (struct date);
    struct date tomorrow;
    
    if ( today.day    != numberOfDays(today)){
        tomorrow.day   = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year  = today.year;
    }
    
    else if ( today.month == 12){   // end of year
        tomorrow.day   = 1;
        tomorrow.month = 1;
        tomorrow.year  = today.year;
    }
    
    else {                          // end of month
        tomorrow.day   = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year  = today.year;
    }
    
    return tomorrow;
}

int numberOfDays (struct date d){
    bool isLeapYear(struct date);
    int days;
    const int daysPerMonth[12] =
    { 32, 28, 31, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (isLeapYear(d) == true && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month -1];
    
    return days;
}

bool isLeapYear(struct date d){
    
    bool leapYearFlag;
    
    if ( (d.year % 4 == 0 && d.year % 100 != 0 ) ||
            d.year % 400 == 0)
        leapYearFlag = true;
    else
        leapYearFlag = false;
    
    return leapYearFlag;
}
