#include <stdio.h>
#include <string.h>

struct Employee {
    char name[100];
    int age;
    char position[100];
    char date_of_joining[11];
};

void sort_by_name(struct Employee arr[], int n) {
    int i, j;
    struct Employee temp;

    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(strcmp(arr[i].name, arr[j].name) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sort_by_date(struct Employee arr[], int n) {
    int i, j;
    struct Employee temp;

    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            int year1, month1, day1, year2, month2, day2;
            scanf(arr[i].date_of_joining, "%d/%d/%d", &day1, &month1, &year1);
            scanf(arr[j].date_of_joining, "%d/%d/%d", &day2, &month2, &year2);

            if(year1 > year2 || (year1 == year2 && month1 > month2) || (year1 == year2 && month1 == month2 && day1 > day2)) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee arr[n];

    for(i=0; i<n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Age: ");
        scanf("%d", &arr[i].age);
        printf("Position: ");
        scanf("%s", arr[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", arr[i].date_of_joining);
    }

    printf("\nEmployee List sorted by name:\n");
    sort_by_name(arr, n);
    for(i=0; i<n; i++) {
        printf("\nName: %s\nAge: %d\nPosition: %s\nDate of Joining: %s\n", arr[i].name, arr[i].age, arr[i].position, arr[i].date_of_joining);
    }

    printf("\nEmployee List sorted by date of joining:\n");
    sort_by_date(arr, n);
    for(i=0; i<n; i++) {
        printf("\nName: %s\nAge: %d\nPosition: %s\nDate of Joining: %s\n", arr[i].name, arr[i].age, arr[i].position, arr[i].date_of_joining);
    }

    return 0;
}
