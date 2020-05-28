//---------------------------------------------------------------------------

#ifndef taskH
#define taskH
//---------------------------------------------------------------------------
#endif

#include "queue.h"

class task : public queue
{
  public:
	void initiz(task *q);
	int isempty(task *q);
	void insert(task *q, int x, int check);
	void list_unique(task* lst);
};
