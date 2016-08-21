/* Calculates what day the entered day is */
#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

int main(void){
    int calculateDay(struct date);
    struct date inputDate;
    int n1;
    
    printf("Enter a date in the following format: 20016:06:09\n");
    scanf ("%i:%i:%i", &inputDate.year, &inputDate.month, &inputDate.day);
    
    const char days[7][3] = {
                            {'M','o','n'},
                            {'T','u','e'},
                            {'W','e','d'},
                            {'T','h','r'},
                            {'F','r','i'},
                            {'S','a','t'},
                            {'S','u','n'}
    };
    
    int dayIndex = calculateDay(inputDate);
    printf("The entered day was a %c%c%c day\n", 
            days[dayIndex - 1][0], days[dayIndex - 1][1], days[dayIndex - 1][2] );
}

int calculateDay(struct date inputDate){
    int calculateN(struct date);
    
    int n   = calculateN(inputDate);
    int day = ( n - 621049 ) % 7;
}

int calculateN(struct date inputDate){
    int f (int, int);
    int g (int);
    
    int n = 1461 * f(inputDate.year, inputDate.month) / 4 + 153 * g(inputDate.month) / 5 + inputDate.day;
    return n;
}

int f (int year, int month){
    if ( month <= 2 )
        return year - 1;
    else 
        return year;
}

int g (int month){
    if ( month <= 2 )
        return month + 13;
    else
        return month +  1;
}