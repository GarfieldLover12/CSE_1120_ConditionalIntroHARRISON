#include <stdio.h>

int main(void) {
    int age1, age2, Dif;//these ints will hold the first and second. then the dif is a calculation using age1 and age2
    printf("please give two ages");
    scanf("%i %i", &age1, &age2);//scans for two ages

    if (age1<1) {//in case they put a negative by accident, or being mean and trying to break the code
        age1 = age1 *-1;
    }

    if (age2<1) {//does the same as earlier but for the second variable
        age2 = age2 *-1;
    }

    printf("\nCHECKING IF THE AGES ARE THE SAME...\n");
    if (age1 == age2) {//checks if they are the same age, then ends program because rest of program requires two different ages
        printf("these ages are the same, twins?\n");
        return 0;
    }
    if (age1 != age2) {//checks if not the same, then continues the code
        printf("these ages are not the same\n");
    }
    printf("\nCHECKING WHO IS OLDER...\n");
    if (age1>age2) {//prints statement if age1>age2
        printf("the first person is older\n");
    }
    else if (age1<age2){//prints the other option, but still checks
        printf("the second person is older\n");
    }
    // else {
    //     printf("they are the same age, why would one be older?\n how did you even get here?\n i ended the code?????\n");
    // }
    Dif = age1 - age2;//declares what the difference is
    if (Dif<0) {//just in case they put the bigger number first
        Dif = Dif * -1;
    }

    printf("\nthe difference in age is %d\n", Dif);
//this part has hard coded numbers as benchmarks for age group seperators
    if (Dif<5) {
        printf("Close in age\n");
    }
    else if (Dif<20) {
        printf("Could be siblings\n");
    }
    else if (Dif<40) {
        printf("Maybe parent and kid?\n");
    }
    else if (Dif<50) {
        printf("Grandparent and grandkid\n");
    }
    else {//there should be no other option, used else
        printf("Great-Grandparents\n");
    }

    return 0;
}