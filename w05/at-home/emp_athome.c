//==============================================
// Name:           Hekmat Hamidi
// Student Number: 132645169
// Email:          hwhamidi@myseneca.ca
// Section:        NXX
// Workshop:       5 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 2
#define MAXSIZE 4

// Declare Struct Employee
struct Employee {
  int id;
  int age;
  double salary;
};

/* main program */
int main(void)
{
	int option = 0;
  int limit = 0;
  int eID;
  int temp;
	// Declare a struct Employee array "emp" with SIZE elements
	// and initialize all elements to zero
  struct Employee emp[MAXSIZE] = {{0}};


	printf("---=== EMPLOYEE DATA ===---\n\n");

	do
	{
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
    printf("3. Update Employee Salary\n");
    printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
    scanf("%d",&option);
		printf("\n");

		switch (option)
		{
		case 0:	// Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
      int i;
      for(i= 0; i < MAXSIZE; i++)
      {
        if(emp[i].id > 0){
        printf("%6d%9d%11.2lf\n",emp[i].id, emp[i].age, emp[i].salary);
        }
      }
      printf("\n");

			// Use "%6d%9d%11.2lf" formatting in a
			// printf statement to display
			// employee id, age and salary of
			// all  employees using a loop construct

			// The loop construct will be run for SIZE times
			// and will only display Employee data
			// where the EmployeeID is > 0

			break;

		case 2:	// Adding Employee
				// @IN-LAB
      printf("Adding Employee\n");
      printf("===============\n");
      if(limit !=MAXSIZE)
      {
        int i;
        for(i = 0; i < MAXSIZE; i++)
        {
          if(emp[i].id <= 0)
          {
          printf("Enter Employee ID: ");
          scanf("%d", &emp[i].id);
          printf("Enter Employee Age: ");
          scanf("%d", &emp[i].age);
          printf("Enter Employee Salary: ");
          scanf("%lf", &emp[i].salary);
          printf("\n");
          limit++;
          break;
          }
      }
      } else {
        printf("ERROR!!! Maximum Number of Employees Reached\n");
        printf("\n");
      }


			// Check for limits on the array and add employee
			// data accordingly.
			break;

    case 3:
    printf("Update Employee Salary\n");
    printf("======================\n");
    do {
    printf("Enter Employee ID: ");
    scanf("%d", &eID);
    int i;
    for(i = 0; i < MAXSIZE; i++)
      {
        if(eID == emp[i].id)
        {
          printf("The current salary is %.2lf\n", emp[i].salary);
          printf("Enter Employee New Salary: ");
          scanf("%lf", &emp[i].salary);
          temp = 1;
          printf("\n");
        }
      }
    if(temp == 0)
    {
    printf("*** ERROR: Employee ID not found! ***\n");
    }
    } while (temp != 1);
    temp = 0;
    break;

    case 4:
    printf("Remove Employee\n");
    printf("===============\n");
    do {
    printf("Enter Employee ID: ");
    scanf("%d", &eID);
    int i;
    for(i = 0; i < MAXSIZE; i++)
      {
        if(eID == emp[i].id)
        {
          printf("Employee %d will be removed\n", emp[i].id);
          printf("\n");
          emp[i].id = -1;
          limit--;
          temp = 1;
        }
	     }
    if(temp == 0)
    {
    printf("*** ERROR: Employee ID not found! ***\n");
    }
    } while (temp != 1);
    break;


		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	return 0;
}



/*
i;
       printf("Enter Employee ID: ");
       scanf("%d", eID);
       for(i = 0; i < MAXSIZE; i++)
       {
         if(eID == emp[i].id)
         {
           printf("The current salary is %11.2lf\n", emp[i].salary);
           printf("Enter Employee New Salary: ");
           scanf("%lf", &emp[i].salary);
           temp = 1;
         }
         else {
           printf("*** ERROR: Employee ID not found! ***\n");
         }
       }
*/


/*
Update Employee Salary
======================
Enter Employee ID: 123
*** ERROR: Employee ID not found! ***
Enter Employee ID: 321
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
The current salary is 33333.33
Enter Employee New Salary: 99999.99


Remove Employee
===============
Enter Employee ID: 789
*** ERROR: Employee ID not found! ***
Enter Employee ID: 987
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
Employee 333 will be removed
*/
