/**
    Write a function that takes an enum as an argument and returns a pointer to character string
*/
#include <stdio.h>
enum month { january, february, march, april, may, june, july, august, september, october, november,
            december };

/**
monthName() returns the name of an enumeration
@param enum month myMonth - Custom enumeration type
@return const char* - The name of the month in a string form
*/
const char* monthName( enum month myMonth ) {
    const char *monthNames[] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november",
            "december" };
    return monthNames[myMonth];
}

int main(void){
    // create enumeration
    enum month aMonth;
    // set month value
    aMonth = january;
    // print
    printf("%s\n", monthName(aMonth) );
    return 0;
}