//---------------------------------------------------------------------------

#pragma hdrstop

#include "list.h"
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)

list* list::addelem(list *lst, int number)
{
	list *temp, *p;
    temp = new list();
	p = lst->ptr;
	lst->ptr = temp;
	temp->field = number;
	temp->ptr = p;
	return(temp);
}

list* list::init(int a)
{
	list *lst;
	lst = new list();
	lst->field = a;
	lst->ptr = NULL;
	return(lst);
}

list* list::deletelem(list *lst, list *root)
{
	list *temp;
	temp = root;
	while (temp->ptr != lst)
	{
		temp = temp->ptr;
	}
	temp->ptr = lst->ptr;
	delete lst;
	return(temp);
}

list* list::deletehead(list *root)
{
  list *temp;
  temp = root->ptr;
  delete root;
  return(temp);
}