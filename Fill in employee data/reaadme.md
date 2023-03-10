# Fill in employee data
With this code, you can write employee data, delete it, modify it, print it on the screen, and search for a specific employee.
**Nots:-**
1. A structure named "employee" was created to store employee data.
2. A structure was created in which salary and bonus information is stored in the name of "Salary" and added to the "employee" structure.
3. A structure was created to store the address information under the name of "adres" and added to the "employee" structure.
4. Define a global variable named "adet" to store the number of employees.
5. A global pointer named "p" of type "employee" is used to create a place in memory and this pointer can be used to store, modify, print etc. It is used to move in the space reserved for memory.
6. When adding the child's data to the employee, 100 TL is added for each child and this is kept as an allowance for the employee under the name of "bonus".
7. Please save the employee ID (ID) when entering, because there is no need to search for it, change its data, etc. will be used for.
### Functions description:-
- addition()
> This function is used to add employee data.

> When calling this function, you are prompted to enter the number of employees whose data you want to enter.

> You can call this function several times and add multiple workers without affecting the old data.

> The first time this function is called, the "malloc()" function is used to allocate the required size of memory. If you call the function again, the "realloc()" function is used to reset the memory size and set the new size for the data to be stored.
- update()
> This function is used to update the data of the added employees.

> Employee ID (ID) is used to search and then replace employee data.

> You can change any data type for this employee or change all data at once.

> After changing the employee's data, this employee's new data is printed.
- delete_e()
> This function is used to delete employee data.

> Employee ID (ID) is used to search and then delete employee data.

> In this function, when an employee's data is deleted, the employee ID is changed to -1 and other functions are told that if an employee ID is -1, this data will be ignored as if it does not exist.
- address()
> This function is used to add an address to the employee.

> Employee ID (ID) is used to search employee data and add an address to it.

> You can add country, city, province and county in this function.

> When adding an address to an employee, the value "adrs_t_f" becomes 1, informing other jobs that this employee has a printable address.

> After adding an employee's address, you can print the employee's data and that address will appear among the employee's data.
- search()
> This function is used to search for a specific employee with (ID) and the employee's data is printed on the screen.
- stats()
> This function is used to show statistics about added employees data.

> You can find out the current number of employees, the average age of the employees, the total salary of the employees, the average salary of the employees and the total incentive amounts to be paid to the employees.

> If there is an employee whose data has been deleted, they will not be included in the statistics.
- print()
>  This function is used to print all the data of the added employees.

## Information about the file:-
- **Code Type:** Assignment for AVP-1 course at Necmettin Erbakan University
- **Date of writing the code:** 12/25/2022
- **The language of the text inside the code:** English
