#include <stdio.h>

int main(void) {
    int age1, age2, Dif;
    printf("please give two ages");
    scanf("%i %i", &age1, &age2);

    printf("\nCHECKING IF THE AGES ARE THE SAME...\n");
    if (age1 == age2) {
        printf("these ages are the same, twins?\n");
        return 0;
    }
    if (age1 != age2) {
        printf("these ages are not the same\n");
    }
    printf("\nCHECKING WHO IS OLDER...\n");
    if (age1>age2) {
        printf("the first person is older\n");
    }
    else if (age1<age2){
        printf("the second person is older\n");
    }
    else {
        printf("they are the same age, why would one be older?\n");
    }
    Dif = age1 - age2;
    if (Dif<0) {
        Dif = Dif * -1;
    }

    printf("\nthe difference in age is %d\n", Dif);

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
    else {
        printf("Great-Grandparents\n");
    }

    return 0;
}