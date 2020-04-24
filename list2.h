//---------------------------------------------------------------------------

#ifndef list2H
#define list2H
//---------------------------------------------------------------------------
#endif

#include "queue.h"

class list2 : public queue
{
  public:
	list2 *next;
	list2 *prev;
	list2* init(int a);
	list2* addelem(list2 *lst, int number);
	list2* deletelem(list2 *lst);
	list2* deletehead(list2 *root);
	list2* list_unique(list2* lst);
};
