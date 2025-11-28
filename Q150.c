//Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student st;          
    struct Student *ptr = &st; 

    
    printf("Enter Name Roll Marks:\n");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
            ptr->name, ptr->roll, ptr->marks);

    return 0;
}
