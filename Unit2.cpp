//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMateri *FMateri;
//---------------------------------------------------------------------------
__fastcall TFMateri::TFMateri(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFMateri::BitBtn5Click(TObject *Sender)
{
FUtama->Show();
FMateri->Hide();
}
//---------------------------------------------------------------------------

