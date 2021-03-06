//hydro.h 

#ifndef hydro_H
#define hydro_H
#include "list.h"

int menu();
void pressEnter();
void displayHeader();
int readData(FlowList &x);
void display(int num, FlowList &x);
void addData(FlowList &x, int &num);
void removeData(FlowList &x, int & num);
double average(int num, FlowList &x);
double median(int num, FlowList &x);
void saveData(FlowList &x, int num);

#endif