#include <stdio.h>

void readfile(FILE *fp) ;
void writefile(FILE *fp) ;
void appendfile(FILE *fp) ;

int main()
{
    int choice ;
    FILE *fp ;
    printf("File management system\n") ;
    printf("1. press 1 for read a file\n") ;
    printf("2. press 2 for write a file\n") ;
    printf("3. press 3 for append a file\n") ;
    printf("4. press 4 for exit\n") ;
    do
    {
        printf("\nEnter your choice : ") ;
        scanf("%d",&choice) ;
        switch(choice)
        {
            case 1 :
                readfile(fp) ;
                break ;
            case 2 :
                writefile(fp) ;
                break ;
            case 3 :
                appendfile(fp) ;
                break ;
            case 4 :
                printf("Exit\n") ;
                break ;
        }
    }while(choice != 4) ;
    printf("Thank you for using this program\n") ;
    return 0 ;
}
void readfile(FILE *fp)
{
    char ch ;

    fp = fopen("student.txt","r") ;
    ch = fgetc(fp) ;

    printf("content of file is : \n");
    while(ch != EOF) // EOF = End Of File
    {
        printf("%c",ch) ;
        ch = fgetc(fp) ;
    }
    fclose(fp) ;
}
void writefile(FILE *fp)
{
    char name[20] ;
    int rollno ;

    fp = fopen("student.txt","w") ;
    printf("Enter your name : ") ;
    scanf("%s",name) ;
    // if roll no frisr then fflush(stdin).
    printf("Enter your roll number : ") ;
    scanf("%d",&rollno) ;
    fprintf(fp,"Name : %s\n",name) ;
    fprintf(fp,"Roll number : %d\n",rollno) ;
    printf("Data saved successfully") ;
    fclose(fp) ;
}
void appendfile(FILE *fp)
{
    char name[20] ;
    int rollno ;

    fp = fopen("student.txt","a") ;
    printf("Enter your name : ") ;
    scanf("%s",name) ;
    // if roll no frisr then fflush(stdin).
    printf("Enter your roll number : ") ;
    scanf("%d",&rollno) ;
    fprintf(fp,"Name : %s\n",name) ;
    fprintf(fp,"Roll number : %d\n",rollno) ;
    printf("Data updated successfully") ;
    fclose(fp) ;
}