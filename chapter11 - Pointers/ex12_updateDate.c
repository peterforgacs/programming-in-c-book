#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

struct date{
    int year;
    int month;
    int day;
};

int main(void){
    void updateDate (struct date *);
    struct date myDate = { 2016, 12, 28};
    char c;
    do {
        scanf("%c", &c);
        updateDate(&myDate);
        printf ("%.2i:%.2i:%.2i", myDate.year, myDate.month, myDate.day);
    }
    while ( c != 'q');
    
}

void updateDate (struct date *today){
    int numberOfDays (struct date*);
    
    if ( today->day    != numberOfDays(today)){
        today->day     += 1;
    }
    
    // From here last day of the month
    
    else if ( today->month == 12){   // end of year
        today->day    = 1;
        today->month  = 1;
        today->year  += 1;
    }
    
    else {                          // end of month
        today->day    = 1;
        today->month += 1;
    }
}

int numberOfDays (struct date *d){
    bool isLeapYear(struct date*);
    int days;
    const int daysPerMonth[12] =
    { 30, 30, 28, 31, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (isLeapYear(d) == true && d->month == 2)
        days = 29;
    else
        days = daysPerMonth[(d->month) -1];
    
    return days;
}

bool isLeapYear(struct date *d){
    
    bool leapYearFlag;
    
    if ( (d->year % 4 == 0 && d->year % 100 != 0 ) ||
            d->year % 400 == 0)
        leapYearFlag = true;
    else
        leapYearFlag = false;
    
    return leapYearFlag;
}
