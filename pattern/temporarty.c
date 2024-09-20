#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    unsigned int Rollno;
    float marks;
} STUDENT;

STUDENT readStudentRecord() {
    STUDENT s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll no: ");
    scanf("%u", &s.Rollno);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    return s;
}

void printStudentRecord(STUDENT s) {
    printf("\n%u\t%s\t%.2f", s.Rollno, s.name, s.marks);
}

STUDENT* readList(int n) {
    STUDENT* list = (STUDENT*)malloc(n * sizeof(STUDENT));
    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        list[i] = readStudentRecord();
    }
    return list;
}

int highestScore(STUDENT* list, int n) {
    int maxPos = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (list[i].marks > list[maxPos].marks) {
            maxPos = i;
        }
    }
    return maxPos;
}

int lowestScore(STUDENT* list, int n) {
    int minPos = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (list[i].marks < list[minPos].marks) {
            minPos = i;
        }
    }
    return minPos;
}

void swap(STUDENT* s1, STUDENT* s2) {
    STUDENT temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

STUDENT* sortedList(STUDENT* list, int n) {
    STUDENT* list1 = (STUDENT*)malloc(n * sizeof(STUDENT));
    memcpy(list1, list, n * sizeof(STUDENT));
    int pass,i;
    for (pass = 1; pass < n; pass++) {
        for (i = 0; i < n - pass; i++) {
            if (list1[i].marks < list1[i + 1].marks) {
                swap(&list1[i], &list1[i + 1]);
            }
        }
    }
    return list1;
}

void show(STUDENT* list, int n) {
	int i;
    for (i = 0; i < n; i++) {
        printStudentRecord(list[i]);
    }
}

int main() {
    STUDENT* list;
    int n, choice;
    while (1) {
        printf("\n1. Create student list");
        printf("\n2. Show list");
        printf("\n3. Highest score");
        printf("\n4. Lowest score");
        printf("\n5. Sorted list");
        printf("\n6. Exit");
        printf("\nEnter your choice (1-6): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter list size (n): ");
                scanf("%d", &n);
                list = readList(n);
                break;
            case 2:
                show(list, n);
                break;
            case 3:
                printf("\nDetails of highest score student:");
                printStudentRecord(list[highestScore(list, n)]);
                break;
            case 4:
                printf("\nDetails of lowest score student:");
                printStudentRecord(list[lowestScore(list, n)]);
                break;
            case 5:
                printf("\nSorted list in descending order of marks:");
                STUDENT* sorted = sortedList(list, n);
                show(sorted, n);
                free(sorted);
                break;
            case 6:
                free(list);
                exit(0);
            default:
                printf("\nInvalid option");
        }
    }
    return 0;
}

