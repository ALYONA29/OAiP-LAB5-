//---------------------------------------------------------------------------

#ifndef listH
#define listH
//---------------------------------------------------------------------------
#endif

class list
{
  public:
	  int field;
	  list *ptr;
	  list* addelem(list *lst, int number);
	  list* init(int a);
	  list* deletelem(list *lst, list *root);
	  list* deletehead(list *root);
};