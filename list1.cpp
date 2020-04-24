//---------------------------------------------------------------------------

#pragma hdrstop

#include "list1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

list* list::addelem(list *lst, int number)
{
	list *temp, *p;
	temp = (list*)malloc(sizeof(list));
	p = lst->ptr;
	lst->ptr = temp;
	temp->field = number;
	temp->ptr = p;
	return(temp);
}

list* list::init(int a)
{
	list *lst;
	lst = (list*)malloc(sizeof(list));
	lst->field = a;
	lst->ptr = NULL;
	return(lst);
}