#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
     int  book_num;
     char book_name[40];
     char book_author[40];
     int  pages;
};
int main()
{
     struct library b[20];
     int    ch,n,i,count = 0;
     char   temp[40];
     do
     {
          printf("Welcome to library!");
          printf("\n1.Add library details");
          printf("\n2.Display library details");
          printf("\n3.Display books of given author");
          printf("\n4.Count number of books");
          printf("\n5.Exit");
          printf("\nEnter Your Choice:");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("Add Details of %d library\n",n);
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("Enter library No.     : ");
                         scanf("%d",&b[i].book_num);
                         printf("library Name          : ");
                         scanf("%s",b[i].book_name);
                         printf("Enter Author Name  : ");
                         scanf("%s",b[i].book_author);
                         printf("Enter No. of Pages : ");
                         scanf("%d",&b[i].pages);
                     }
                    break;
               case 2:
                    printf("\nDetails of library");
                    printf("Book No.   Book Name  Author Name  No. of Pages");
                    for( i = 0 ; i < n ; i++)
                    {
                         printf("\n %d\t  %s\t  %s\t  %d",b[i].book_num,b[i].book_name,b[i].book_author,b[i].pages);
                    }
                    printf("\n\n");
                    break;
             case 3:
                    printf("\nEnter Author Name: ");
                    scanf("%s",temp);
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].book_author,temp) == 0)
                         {
                              printf("\n%s\n",b[i].book_name);
                         }
                    }
                    break;
               case 4 :
                    for( i = 0 ; i < n ; i++)
                    {
                         count++;
                    }
                    printf("\nTotal number of books in Library : %d\n",count);
                    break;
               case 5 :
                    exit(0);
          }
     }while(ch != 5);
     return 0;
}
