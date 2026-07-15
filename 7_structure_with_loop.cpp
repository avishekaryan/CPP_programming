//wap to display information of 5 students.
#include <stdio.h>
#include <string.h>

struct student
{
	char s[100],a[100];
	int id,r;
	double c;
}; 
int main()
{   struct student S [5];
    int i;
	for(i=0 ; i<5 ;i++)
	{
		printf("Student_id: ");
		scanf("%d" , &S[i].id);
		printf("Student_name: ");
		scanf(" %[^\n]" , S[i].s);
		printf("Roll_no.: ");
		scanf("%d" , &S[i].r);
		printf("Contact_no.: ");
		scanf("%ld" ,&S[i].c);
	}
	for(i=0 ; i<5 ; i++)
	{printf("Student_id= %d  \tStudent_name= %s" , S[i].id , S[i].s);
	 printf("\tRoll_no.= %d  \tContact_no.: %ld\n" , S[i].r ,S[i].c);
	}
	return 0;
}
