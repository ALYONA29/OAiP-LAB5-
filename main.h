//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TListBox *ListBox1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TEdit *Edit1;
	TButton *Button5;
	TButton *Button6;
	TEdit *Edit2;
	TButton *Button7;
	TButton *Button8;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	void __fastcall AddClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall PrintClick(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall DeleteElementClick(TObject *Sender);
	void __fastcall SizeClick(TObject *Sender);
	void __fastcall TaskAddClick(TObject *Sender);
	void __fastcall TaskPrintClick(TObject *Sender);
	void __fastcall TaskDeleteSameClick(TObject *Sender);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit2KeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
