#include <stdio.h>
#include <stdlib.h>

void createfile(FILE *fp) ;
void openfile(FILE *fp) ;
void updatefile(FILE *fp);
void deletefile(FILE *fp) ;

int main()
{
    FILE *fp ;
    int choice ;
    printf("1.Create a file\n");
    printf("2.Open a file\n");
    printf("3.update a file\n");
    printf("4.delete a file\n");
    printf("5.exit\n");
    do
    {
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : 
            createfile(fp) ;
            break ;
        case 2 : 
            openfile(fp) ;
            break;
        case 3 : 
            updatefile(fp) ;
            break ;
        case 4 :
            deletefile(fp) ;
            break ;
        case 5 :
            printf("Exit\n");
    }
    }while(choice != 5);
}
void createfile(FILE*fp)
{
    fp = fopen("student.txt","w");
    char name[20] ;
    int rollno ;
    printf("Enter a student name : ");
    scanf("%s",name);
    printf("Enter a student roll number : ");
    scanf("%d",&rollno);
    
    fprintf(fp,"Student name : %s\n",name);
    fprintf(fp,"Student roll number : %d\n",rollno);
    printf("file successfully created\n");
    fclose(fp) ;
}
void openfile(FILE *fp)
{
    fp = fopen("student.txt","r");
    char ch ;
    ch = fgetc(fp) ;
    if(fp == NULL)
    {
        exit(1) ;
    }
    else
    {
        printf("acontent of file :\n");
        while(ch != EOF)
        {
            printf("%c",ch);
            ch = fgetc(fp);
        }
    }
    fclose(fp);
}
void updatefile(FILE *fp)
{
    fp = fopen("student.txt","a");
    char name[20] ;
    int rollno ;
    printf("Enter a student name : ");
    scanf("%s",name);
    printf("Enetr student roll number : ");
    scanf("%d",&rollno);

    fprintf(fp,"student name : %s\n",name);
    fprintf(fp,"student roll number : %d\n",rollno);
    printf("file successfully updated\n");
    fclose(fp) ;
}
void deletefile(FILE *fp)
{
    fp = fopen("student.txt","w");
    printf("strudent.txt file data is deleted\n");
    fclose(fp);
}