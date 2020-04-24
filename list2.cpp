//---------------------------------------------------------------------------

#pragma hdrstop

#include "list2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

list2* list2::init(int a)
{
	list2 *lst;
	lst = (list2*)malloc(sizeof(list2));
	lst->field = a;
	lst->next = NULL;
	lst->prev = NULL;
	return(lst);
}

list2* list2::addelem(list2 *lst, int number)
{
	list2 *temp, *p;
	temp = (list2*)malloc(sizeof(list2));
	p = lst->next;
	lst->next = temp;
	temp->field = number;
	temp->next = p;
	temp->prev = lst;
	if (p != NULL)
	{
		p->prev = temp;
	}
	return(temp);
}

list2* list2::deletelem(list2 *lst)
{
	list2 *prev, *next;
	prev = lst->prev;
	next = lst->next;
	if (prev != NULL)
	{
		prev->next = lst->next;
	}
	if (next != NULL)
	{
		next->prev = lst->prev;
	}
	free(lst);
	return(prev);
}

list2* list2::deletehead(list2 *root) {
	list2 *temp;
	temp = root->next;
	temp->prev = NULL;
	free(root);   // освобождение памяти текущего корня
	return(temp); // новый корень списка
}

list2* list2::list_unique(list2* lst)
{
	list2 *t, *p, *i, *prev, *temp;
	int first = 0;
	for(p = lst; p != NULL; p = p->next)
	{
		bool check = false;
		temp = p;
        prev = p;
		for(i = p->next; i != NULL; )
		{
			if(i->field == p->field)
			{
				check = true;
                t = prev->next = i->next;
                free(i);
                i = t;
                continue;
            }
            prev = i;
			i = i->next;
		}
		if(check == true && first == 0)
		{
			p->next = deletehead(p);
			lst = deletehead(p);
			first = 0;
		}
		else if(check == true)
		{
			deletelem(p);
			first++;
		}
		else
		{
			first++;
		}
	}
	return lst;
}

