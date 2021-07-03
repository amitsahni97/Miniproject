#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int i,j;
int main_text;
void menu();
struct date{
	int month,date,year;
};
static struct{
	char name[60];
	int id;
	int age;
	char address[30];
	char nationality[20];
	double phone;
	char branch[20];
	float pending_fees;
	struct date dob;
    struct date admission;
    struct date leave;
}add,check;
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
void new_student()

{
    int choice;
    FILE *ptr;

    ptr=fopen("record.dat","a+");
    id:
    system("cls");
    printf("*******************ADD STUDENT RECORD********************** ");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.admission.month,&add.admission.date,&add.admission.year);
    printf("\nEnter the id:");
    scanf("%d",&check.id);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.id,add.name,&add.dob.month,&add.dob.date,&add.dob.year,&add.age,add.address,add.nationality,&add.phone,add.branch,&add.pending_fees,&add.admission.month,&add.admission.date,&add.admission.year)!=EOF)
    {
        if (check.id==add.id)
            {
			   printf("Id already in use!");
               fordelay(1000000000);
               goto id;
            
			}
			
			
			
    }
    add.id=check.id;
    printf("\nEnter the student's name:");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.date,&add.dob.year);
    printf("\nEnter the age:");
    scanf("%d",&add.age);
    printf("\nEnter the address:");
    scanf("%s",add.address);
    printf("\nEnter nationality:");
    scanf("%s",add.nationality);
    printf("\nEnter the pending fees: ");
    scanf("%lf",&add.pending_fees);
    printf("\nEnter the admission date: ");
    scanf("%d/%d/%d",&add.admission.month,&add.admission.date,&add.admission.year);
    printf("\nEnter the degree complete date: ");
    scanf("%d/%d/%d",&add.leave.month,&add.leave.date,&add.leave.year);
    fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",add.id,add.name,add.dob.month,add.dob.date,add.dob.year,add.age,add.address,add.nationality,add.phone,add.pending_fees,add.admission.month,add.admission.date,add.admission.year,add.leave.month,add.leave.date,add.leave.year);
	fclose(ptr);
    printf("\nStudent record added successfully!");

	
}

