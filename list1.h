//---------------------------------------------------------------------------

#ifndef list1H
#define list1H
//---------------------------------------------------------------------------
#endif

class list
{
  public:
	int field;
	list *ptr;
	list* addelem(list *lst, int number);
	list* init(int a);
};