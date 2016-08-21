/*
    Calculate the number of days between two dates
 */
#include <stdio.h>

struct date{
    int year;
    int month;
    int day;
};

int main(void){
    int calculateN (struct date);
    
    struct date inputDate1;
    struct date inputDate2;
    int n1, n2, difference;
    
    printf("Add two dates in the following format: 20016.6.9\n");
    scanf ("%i:%i:%i", &inputDate1.year, &inputDate1.month, &inputDate1.day);
    scanf ("%i:%i:%i", &inputDate2.year, &inputDate2.month, &inputDate2.day);
    
    n1 = calculateN(inputDate1);
    n2 = calculateN(inputDate2);
    difference = n2 - n1;
    
    printf("The difference is %i days", difference);
    return 0;
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