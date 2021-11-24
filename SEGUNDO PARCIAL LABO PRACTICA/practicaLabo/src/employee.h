/*
 * employee.h
 *
 *  Created on: 16 nov. 2021
 *      Author: Asus
 */
#include "linkedlist.h"
#define TAM_NAME 128

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

typedef struct
{
    int id;
    char nombre[TAM_NAME];
    int horasTrabajadas;
    int sueldo;

}Employee;

Employee* employee_new();
Employee* employee_newParametros(int id, char* nombreStr, int horasTrabajadas, int sueldo);
Employee* employee_newParametrosString(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr);

void employee_delete(Employee* this);

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);
int employee_setIdStr(Employee* this, char* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);
int employee_setHorasTrabajadasStr(Employee* this, char* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);
int employee_setSueldoStr(Employee* this, char* sueldo);

int employee_showAnEmployee(LinkedList* list, int indice);
int employee_finder(int idEmployee, LinkedList* list);

int employee_SortbySalary(void* thisA, void* thisB);
int employee_SortbyHours(void* thisA, void* thisB);
int employee_SortbyName(void* thisA, void* thisB);
int employee_SortbyID(void* thisA, void* thisB);

void employee_IncreaseSalary(void* this);
int employee_Filter200PlusHours(void* this);


#endif /* EMPLOYEE_H_ */
