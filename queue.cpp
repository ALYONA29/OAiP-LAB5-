//---------------------------------------------------------------------------

#pragma hdrstop

#include "queue.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

list *List;

void queue::initiz(queue *q)
{
    q->rear = 0;
	q->frnt = 0;
}

int queue::isempty(queue *q)
{
	if(q->frnt == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void queue::insert(queue *q, int x, int check)
{
	if(check == 0)
	{
		q->rear = 0;
		q->frnt = 0;
	}
	if((q->rear == 0) && (q->frnt == 0))
	{
		q->rear = List->init(x);
		q->frnt = q->rear;
	}
	else
	{
		q->rear = List->addelem(q->rear, x);
	}
}

int queue::test(queue *q)
{
	int x;
	x = q->frnt->field;
    return x;
}

