#include <stdio.h>
#include <windows.h>
struct student
{
    int roll;
    char name[30];
    char course[5];
    int fees;

} s[20];

void red()
{
    printf("\033[1;31m");
}

void blue()
{
    printf("\033[0;34m");
}

void green()
{
    printf("\033[0;32m");
}

void add();
void show();
void modify();

int main()
{
    system("cls");
    int choise;
    blue();
start:
    printf("\n=======================");
    printf("\nStudent Data Management");
    printf("\n=======================\n");

    printf("\n1.ADD DATA");
    printf("\n2.SHOW DATA");
    printf("\n3.MODIFY DATA");
    printf("\n4.Exit\n");

    printf("\nEnter your choise: ");
    scanf("%d", &choise);
    do
    {

        switch (choise)
        {
        case 1:
            add();
            goto start;
            break;
        case 2:
            show();
            goto start;
            break;
        case 3:
            modify();
            goto start;
            break;
        case 4:
            system("cls");
            printf("\nProgram closed\n\n");
            break;
        default:
            printf("\nError\n");
            goto start;
            break;
        }
    } while (choise != 4);

    return 0;
}

void add()
{
    FILE *sr = NULL;
    sr = fopen("Student_record.txt", "a");
    char opt;

    struct student s;
    system("cls");
    red();
    printf("\n================");
    printf("\nAdd student data");
    printf("\n================");

    do
    {
        printf("\nEnter Roll no: ");
        scanf("%d", &s.roll);

        printf("\nEnter your name: ");
        scanf("%s", s.name);

        printf("\nEnter course: ");
        scanf(" %s", &s.course);

        printf("\nEnter Fees: ");
        scanf("%d", &s.fees);

        fprintf(sr, "%d\t%s\t%s\t%d\n", s.roll, s.name, s.course, s.fees);

        printf("\nWould you like to save another record (Y/N): ");
        scanf(" %c", &opt);

    } while (opt == 'Y' || opt == 'y');

    printf("\n-------------------");
    printf("\nStudent data saved!");
    printf("\n-------------------\n");
    fclose(sr);
}

void show()
{
    system("cls");

    FILE *sr;
    sr = fopen("Student_record.txt", "r");
    struct student s;
    system("cls");
    green();

    printf("\n==========================================");
    printf("\n\t    Showing student data");
    printf("\n==========================================");

    while (fscanf(sr, "%d%s%s%d", &s.roll, s.name, s.course, &s.fees) != EOF)
    {
        printf("\n%d.\t%s\t%s\tRs.%d/-\n", s.roll, s.name, s.course, s.fees);
    }
    fclose(sr);
}

void modify()
{
    FILE *sr, *temp;
    sr = fopen("Student_record.txt", "r");
    temp = fopen("temp.txt", "a");
    struct student s;
    int roll;

    printf("Enter Roll no: ");
    scanf("%d", &roll);

    while (fscanf(sr, "%d%s%s%d", &s.roll, &s.name, &s.course, &s.fees) != EOF)
    {
        if (roll == s.roll)
        {
            printf("\nEnter your updated name: ");
            scanf(" %s", &s.name);

            fprintf(temp, "%d\t%s\t%s\t%d\n", s.roll, s.name, s.course, s.fees);
            Beep(500,800);
            printf("\nDATA UPDATED\n");
        }
        else
        {
            fprintf(temp, "%d\t%s\t%s\t%d\n", s.roll, s.name, s.course, s.fees);
        }
    }

    fclose(sr);
    fclose(temp);
    remove("Student_record.txt");
    rename("temp.txt", "Student_record.txt");
    printf("\nFile deleted and removed");
}
