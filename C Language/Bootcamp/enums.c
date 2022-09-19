#include <stdio.h>

// Enum is a user defined data type that stores data starting from 0 and is numeric in nature.

//Default
typedef enum month
{

    January,  //0
    February, //1
    Mar,      //2
    Apr,      //3
    May,      //4
    June,     //5
    July,     //6
    Aug,      //7
    Sep,      //8
    Oct,      //9
    Nov,      //10
    Dec,      //11
} New_Name;

//Assigned values

enum assigned_months
{
    NJanuary,   //0
    NFebruary,  //1
    NMar = 100, //100
    NApr,       //101
    NMay,       //102
    NJune = 5,  //5
    NJuly,      //6
    NAug,       //7
    NSep,       //8
    NOct,       //9
    NNov,       //10
    NDec,       //11

};

int main()
{
    New_Name Azeems_Birthday = February;         // Typedef used 
    enum assigned_months New_Azeems_Birthday = NFebruary;

    enum month Rohans_Birthday = May; // No Typedef used
    enum assigned_months New_Rohans_Birthday = NMay;

    printf("\nAzeem's Birthday in %d\n", Azeems_Birthday);
    printf("New Azeem's Birthday in %d\n", New_Azeems_Birthday);
    printf("Rohan's Birthday in %d\n", Rohans_Birthday);
    printf("New Rohan's Birthday in %d\n", New_Rohans_Birthday);
}

// By Azeem during bootcamp.