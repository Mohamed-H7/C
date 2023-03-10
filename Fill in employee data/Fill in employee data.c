#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int adrs_t_f;
char ulke[15];
char il[15];
char ilce[15];
char mahalle[15];
}adres;

typedef struct
{
int salary;
int bonus;
}Salary;

typedef struct
{
int id;
char first_name[15];
char last_name[15];
int age;
int children;
Salary s_b;
adres adress;
}employee;

//Global varibals
int adet=0;
employee *p;

void message();
void addition();
void update();
void delete_e();
void address();
void search();
void stats();
void print();

int main()
{
    int choose = 0;

    message();

    while (1)
    {
    printf("Available operations:-\n");
    printf("- Add employees data [1]\n");
    printf("- Update employee data [2]\n");
    printf("- Delete employee data [3]\n");
    printf("- Add the employee's address [4]\n");
    printf("- Searching for employe (By employee ID) [5]\n");
    printf("- Employees stats [6]\n");
    printf("- View all data [7]\n");
    printf("- Exit [8]\n");
    printf("> Choose a operation: ");
    scanf("%d",&choose);
    printf("--------------------\n");

    if (choose == 1)
    {
        addition();
    }
    else if (choose == 2)
    {
        update();

    }
    else if (choose == 3)
    {
        delete_e();
    }
    else if (choose == 4)
    {
        address();
    }
    else if (choose == 5)
    {
        search();
    }
    else if (choose == 6)
    {
        stats();
    }
    else if (choose == 7)
    {
        print();
    }
    else if (choose == 8)
    {
        free(p);
        break;
    }
    else
    {
        printf("Wrong choice, please re-try\n");
        printf("--------------------\n");
    }
    } // for whie

    printf("Thank you..\n");
    printf("--------------------");

    return 0;
}

void message()
{
    printf("---------Welcome to the workers library---------\n");
    printf("# This library is programmed to display workers data\n");
    printf("# You can add, edit and view the data in this library\n");
    printf("-------------------------------------------------\n");
    printf("# Notes:- \n");
    printf("- Please save the employee's number (ID) because it will be used to search for him, modify his data and delete it.\n");
    printf("- 100TL for each child will be added.\n");
    printf("-------------------------------------------------\n");
}

void addition()
{
    int tane=0;
    printf("How many employees do you want to add?\n");
    printf("> ");
    scanf("%d",&tane);
    printf("--------------------\n");

    int i,count,En;
    if(adet == 0)
    {
        adet = adet+tane;
        p=(employee*)malloc(adet*sizeof(employee));

        for(i=0;i<tane;i++)
        {
            printf("[Employee No. %d]\n",i+1);

            printf("Enter the employee ID\n");
            printf("> ");
            scanf("%d",&(p+i)->id);

            printf("Enter the name of the first employee\n");
            printf("> ");
            scanf("%s",(p+i)->first_name);

            printf("Enter the employee's last name\n");
            printf("> ");
            scanf("%s",(p+i)->last_name);

            printf("Enter the employee's age\n");
            printf("> ");
            scanf("%d",&(p+i)->age); 

            printf("Enter the employee's salary\n");
            printf("> ");
            scanf("%d",&(p+i)->s_b.salary);

            printf("Enter the number of the employee's children\n");
            printf("> ");
            scanf("%d",&(p+i)->children);

            int b;
            b = 100*(p+i)->children;
            (p+i)->s_b.bonus = b;
            printf("--------------------\n");
        }
    } // for if
    else
    {
        count=adet;
        adet= adet + tane;
        p=(employee *)realloc(p,adet*sizeof(employee));

        for(i=0;i<tane;i++)
        {
            En= 1 + count;
            printf("[Employee No. %d]\n",En);

            printf("Enter the employee ID\n");
            printf("> ");
            scanf("%d",&(p+count)->id);

            printf("Enter the name of the first employee\n");
            printf("> ");
            scanf("%s",(p+count)->first_name);

            printf("Enter the employee's last name\n");
            printf("> ");
            scanf("%s",(p+count)->last_name);

            printf("Enter the employee's age\n");
            printf("> ");
            scanf("%d",&(p+count)->age);

            printf("Enter the employee's salary\n");
            printf("> ");
            scanf("%d",&(p+count)->s_b.salary);

            printf("Enter the number of the employee's children\n");
            printf("> ");
            scanf("%d",&(p+count)->children);

            int b;
            b = 100*(p+count)->children;
            (p+count)->s_b.bonus = b;
            printf("--------------------\n");

            count++;
        }

    } //for else



}

void update()
{
    if (p == NULL){
        printf("There is no data to modify..\n");
        printf("--------------------\n");
        return 0;
    }

    int ID;
    int i,save;
    int y_n=0; // yes or no
    while (1)
    {
        printf("Enter the ID of the employee whose data you want to modify:\n");
        printf("> ");
        scanf("%d",&ID);
        for(i=0;i<adet;i++)
        {
            if ((p+i)->id == ID)
            {
               save = i;
               y_n=1;
               break;
            }
        } // For for
        if (y_n == 1){break;}
        printf("There is no data with this ID, please try again..\n");
        printf("--------------------\n");
    }

    int sel;
    printf("--------------------\n");
    printf("The employee's data has been found, what data do you want to modify?\n");
    while (1)
    {
        printf("- ID [1]\n");
        printf("- First Name [2]\n");
        printf("- Last name [3]\n");
        printf("- Age [4]\n");
        printf("- Salary [5]\n");
        printf("- children [6]\n");
        printf("- All data [7]\n");
        printf("> Select: ");
        scanf("%d",&sel);

        if (sel == 1) //ID
        {
            printf("--------------------\n");
            printf("Please enter the new ID:\n");
            printf("> ");
            scanf("%d",&(p+save)->id);

            printf("Data has been modified..\n");
            break;
        }
        else if(sel == 2) // f name
        {
            printf("--------------------\n");
            printf("Please enter the new first name:\n");
            printf("> ");
            scanf("%s",(p+save)->first_name);

            printf("Data has been modified..\n");
            break;
        }
        else if(sel == 3) // l name
        {
            printf("--------------------\n");
            printf("Please enter the new last name:\n");
            printf("> ");
            scanf("%s",(p+save)->last_name);

            printf("Data has been modified..\n");
            break;
        }
        else if(sel == 4) // age
        {
            printf("--------------------\n");
            printf("Please enter the new age:\n");
            printf("> ");
            scanf("%d",&(p+save)->age);

            printf("Data has been modified..\n");
            break;
        }
        else if(sel == 5) // salary
        {
            printf("--------------------\n");
            printf("Please enter the new salary:\n");
            printf("> ");
            scanf("%d",&(p+save)->s_b.salary);

            printf("Data has been modified..\n");
            break;
        }
        else if(sel == 6) //children
        {
            printf("--------------------\n");
            printf("Please enter the number of new children:\n");
            printf("> ");
            scanf("%d",&(p+save)->children);

            int b;
            b = 100*(p+save)->children;
            (p+save)->s_b.bonus = b;

            printf("Data has been modified..\n");
            break;
        }
        else if(sel == 7) //all data
        {
            printf("--------------------\n");
            printf("Please enter the new ID:\n");
            printf("> ");
            scanf("%d",&(p+save)->id);
            printf("\n");
            printf("Please enter the new first name:\n");
            printf("> ");
            scanf("%s",(p+save)->first_name);
            printf("\n");
            printf("Please enter the new last name:\n");
            printf("> ");
            scanf("%s",(p+save)->last_name);
            printf("\n");
            printf("Please enter the new age:\n");
            printf("> ");
            scanf("%d",&(p+save)->age);
            printf("\n");
            printf("Please enter the new salary:\n");
            printf("> ");
            scanf("%d",&(p+save)->s_b.salary);
            printf("\n");
            printf("Please enter the number of new children:\n");
            printf("> ");
            scanf("%d",&(p+save)->children);

            int b;
            b = 100*(p+save)->children;
            (p+save)->s_b.bonus = b;

            printf("Data has been modified..\n");
            break;
        }
        else
        {
            printf("--------------------\n");
            printf("Wrong choice, please re-try\n");
            printf("--------------------\n");
        } // for if
    } // for while

    printf("--------------------\n");
    printf("Printing new employee data..\n");
    printf("--------------------\n");
    printf("[Employee No. %d]\n",save+1);
    printf("- Employee ID: %d\n",(p+save)->id);
    printf("- First Name: %s\n",(p+save)->first_name);
    printf("- Last name: %s\n",(p+save)->last_name);
    printf("- Age: %d\n",(p+save)->age);
    printf("- Number of Children: %d\n",(p+save)->children);
    printf("- Salary: %dTL\n",(p+save)->s_b.salary);
    printf("- Bonus: %dTL\n",(p+save)->s_b.bonus);
    printf("--------------------\n");
}

void delete_e()
{
    if (p == NULL){
    printf("There is no data to delet..\n");
    printf("--------------------\n");
    return 0;
    }

    int ID;
    int i;
    int y_n=0; // yes or no
    while (1)
    {
        printf("Enter the ID of the employee whose data you want to delet:\n");
        printf("> ");
        scanf("%d",&ID);
        for(i=0;i<adet;i++)
        {
            if ((p+i)->id == ID)
            {
               (p+i)->id = -1;
               y_n=1;
               break;
            }
        } // For for
        if (y_n == 1){break;}
        printf("There is no data with this ID, please try again..\n");
        printf("--------------------\n");
    }
    printf("The employee data has been deleted successfully..\n");
    printf("--------------------\n");
}

void address()//
{
    if (p == NULL){
    printf("There is no data to add addresses to..\n");
    printf("--------------------\n");
    return 0;
    }

    int ID;
    int i,save;
    int y_n=0; // yes or no
    while (1)
    {
        printf("Enter the ID of the employee for whom you want to add an address:\n");
        printf("> ");
        scanf("%d",&ID);
        for(i=0;i<adet;i++)
        {
            if ((p+i)->id == ID)
            {
               save = i;
               y_n=1;
               break;
            }
        } // For for
        if (y_n == 1){break;}
        printf("There is no data with this ID, please try again..\n");
        printf("--------------------\n");
    }

    printf("--------------------\n");
    printf("- Ulke: ");
    scanf("%s",(p+save)->adress.ulke);

    printf("- il: ");
    scanf("%s",(p+save)->adress.il);

    printf("- ilce: ");
    scanf("%s",(p+save)->adress.ilce);

    printf("- Mahalle: ");
    scanf("%s",(p+save)->adress.mahalle);

    (p+save)->adress.adrs_t_f = 1;
    printf("--------------------\n");
    printf("The address has been added. You can print the data and confirm..\n");
    printf("--------------------\n");
}

void search()
{
    if (p == NULL){
    printf("There is no data to search..\n");
    printf("--------------------\n");
    return 0;
    }

    int ID;
    int i;
    int y_n=0; // yes or no
    while (1)
    {
        printf("Enter the ID of the employee you want to search for:\n");
        printf("> ");
        scanf("%d",&ID);
        for(i=0;i<adet;i++)
        {
            if ((p+i)->id == ID)
            {
                printf("--------------------\n");
                printf("Searching please wait..\n");
                printf("\n");
                printf("[Employee No. %d]\n",i+1);
                printf("- Employee ID: %d\n",(p+i)->id);
                printf("- First Name: %s\n",(p+i)->first_name);
                printf("- Last name: %s\n",(p+i)->last_name);
                printf("- Age: %d\n",(p+i)->age);
                printf("- Number of Children: %d\n",(p+i)->children);
                printf("- Salary: %dTL\n",(p+i)->s_b.salary);
                printf("- Bonus: %dTL\n",(p+i)->s_b.bonus);

                if ((p+i)->adress.adrs_t_f == 1)
                {
                    printf("- Employee Address:\n");
                    printf("%s, %s, %s %s.\n",(p+i)->adress.ulke,(p+i)->adress.il,(p+i)->adress.ilce,(p+i)->adress.mahalle);
                }

                printf("\n");
                printf("--------------------\n");
                y_n=1;
                break;
            }
        } // For for

        if (y_n == 1){break;}
        printf("There is no data with this ID, please try again..\n");
        printf("--------------------\n");
    }
}

void stats()
{
    if (p == NULL){
    printf("There is no data to calculate its stats..\n");
    printf("--------------------\n");
    return 0;
    }



    int total_salary = 0,t_number = adet,t_bonus = 0,t_age = 0;
    int i;
    for (i=0;i<adet;i++)
    {
        if ((p+i)->id == -1){
            t_number -= 1;
            continue;
        }
        total_salary +=(p+i)->s_b.salary;
        t_bonus += (p+i)->s_b.bonus;
        t_age +=(p+i)->age;
    }

    float average = (float) total_salary / t_number;
    int average_age = t_age / t_number;

    printf("[Employees Stats]\n");
    printf("- Number of Employees: %d\n",t_number);
    printf("- Average employee age: %d\n",average_age);
    printf("- Total employee salaries = %dTL\n",total_salary);
    printf("- Average employee salary: %.1fTL\n",average);
    printf("- The sum of the bonus that must be paid to the employees: %dTL\n",t_bonus);
    printf("--------------------\n");
}

void print()
{
    int i;
    if (p == NULL){
        printf("There is no data to print..\n");
    }
    else{
        printf("\n");
        for(i=0;i<adet;i++)
        {
            if ((p+i)->id == -1) {
                continue;
            }
            printf("[Employee No. %d]\n",i+1);
            printf("- Employee ID: %d\n",(p+i)->id);
            printf("- First Name: %s\n",(p+i)->first_name);
            printf("- Last name: %s\n",(p+i)->last_name);
            printf("- Age: %d\n",(p+i)->age);
            printf("- Number of Children: %d\n",(p+i)->children);
            printf("- Salary: %dTL\n",(p+i)->s_b.salary);
            printf("- Bonus: %dTL\n",(p+i)->s_b.bonus);
            if ((p+i)->adress.adrs_t_f == 1)
            {
             printf("- Employee Address:\n");
             printf("%s, %s, %s %s.\n",(p+i)->adress.ulke,(p+i)->adress.il,(p+i)->adress.ilce,(p+i)->adress.mahalle);
            }
            printf("\n");
        }
        } // for else
        printf("--------------------\n");
}

//
