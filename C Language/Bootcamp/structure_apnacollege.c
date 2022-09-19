#include <stdio.h>
#include <string.h>

// user defined
struct student
{
    char name[20];
    long int roll;
    double cgpa;
};

int main()
{
    struct student azeem; // Declaration

    // azeem.name = "Mohd Azeem";
    strcpy(azeem.name, "Mohd Azeem"); // RIght way
    azeem.roll = 2100300100112;
    azeem.cgpa = 9.1;

    printf("\nDr. A.P.J. Abdul Kalam Technical University\n");
    printf("\n\t--------- Student Result Portal ---------\n");
    printf("\n");
    printf("Student's Name: %s\n", azeem.name);
    printf("Student's University Roll No.: %ld\n", azeem.roll);
    printf("Student's SGPA of Last Semeseter: %.1f\n", azeem.cgpa);

    printf("\n");
    printf("---------------------------------------------------------------------");
    printf("\n");

    struct student dev = {"Dev Mathur", 210068, 9.0}; // Initialization

    printf("\nDr. A.P.J. Abdul Kalam Technical University\n");
    printf("\n\t--------- Student Result Portal ---------\n");
    printf("\n");
    printf("Student's Name: %s\n", dev.name);
    printf("Student's University Roll No.: %ld\n", dev.roll);
    printf("Student's SGPA of Last Semeseter: %.1f\n", dev.cgpa);

    printf("\n");

    struct student *ptr;
    ptr = &azeem;
    printf("Using *ptr on Roll: %ld\n", (*ptr).roll); //() for applying star(asterisk) precedence before dot operator.

    printf("Using ptr-> on Name: %s\n", ptr->name); //Arrow for accessing using pointer.
}