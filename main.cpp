//---------------------------------------------------------------------------
#include <vcl.h>
#include <malloc.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#pragma hdrstop

#include "list2.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
queue  *q;
list2 *head, *mylist;
int check = 0;
int check2 = 0;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button3Click(TObject *Sender)
{
	if(Edit1->Text == "")
	{
		ShowMessage("Введите данные!");
	}
	else
	{
		int a = StrToInt(Edit1->Text);
		q->insert(q, a, check);
    	check++;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormCreate(TObject *Sender)
{
    q = (queue*)malloc(sizeof(queue*));
	q->initiz(q);
	Edit1->Clear();
	Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
	ListBox1->Clear();
	list *h;
	if(q->isempty(q) == 1)
	{
		ListBox1->Items->Add("Очередь пуста!");
	}
	else
	{
		for(h = q->frnt; h != NULL; h = h->ptr)
		{
		    ListBox1->Items->Add(IntToStr(h->field));
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button4Click(TObject *Sender)
{
     Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
	list *temp;
	int x;
	if(q->isempty(q) == 1)
	{
		ListBox1->Items->Add("Очередь пуста!");
		return ;
	}
	x = q->frnt->field;
	temp = q->frnt;
	q->frnt = q->frnt->ptr;
	free(temp);
    check--;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button5Click(TObject *Sender)
{
	ListBox1->Clear();
	ListBox1->Items->Add("Размер очереди : " + IntToStr(check));
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button6Click(TObject *Sender)
{
	 if(Edit2->Text == "")
	 {
		 ShowMessage("Введите данные!");
	 }
	 else
	 {
		 check2 = 0;
		 int number = rand() % 100 + 1;
		 for(int i = 0; i < StrToInt(Edit2->Text); i++)
		 {
			 number = rand() % 100 + 1;
			 if(check2 == 0)
			 {
				 head = mylist->init(number);
				 mylist = head;
			 }
			 else
			 {
				 mylist = mylist->addelem(mylist, number);
			 }
			 check2++;
     	 }
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button7Click(TObject *Sender)
{
	ListBox1->Clear();
	if(check2 == 0)
	{
		ShowMessage("Список пуст");
	}
	else
	{
		list2 *p;
		p = head;
		do {
			ListBox1->Items->Add(IntToStr(p->field));
			p = p->next;
     	} while (p != NULL);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button8Click(TObject *Sender)
{
    head = mylist->list_unique(head);
}
//---------------------------------------------------------------------------



void __fastcall TForm4::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	if((Key < '0' || Key > '9')&& Key != VK_BACK && Key != VK_DELETE && Key != 13)
	{

		ShowMessage("Недопустимый символ! Доступен ввод целых чисел.");
		Key = NULL;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
    if((Key < '0' || Key > '9')&& Key != VK_BACK && Key != VK_DELETE && Key != 13)
	{
		ShowMessage("Недопустимый символ! Доступен ввод целых чисел.");
		Key = NULL;
	}
}
//---------------------------------------------------------------------------

