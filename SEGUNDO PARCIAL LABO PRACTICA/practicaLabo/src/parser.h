/*
 * parser.h
 *
 *  Created on: 16 nov. 2021
 *      Author: Asus
 */

#include "linkedlist.h"
#include "employee.h"

#ifndef PARSER_H_
#define PARSER_H_

int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee);

int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee);

int parser_writeToBinary(FILE* pFile , LinkedList* pArrayListEmployee);

int parser_writeToText(FILE* pFile , LinkedList* pArrayListEmployee);

#endif /* PARSER_H_ */
