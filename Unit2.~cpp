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
Timer1->Enabled = false;
Timer2->Enabled = false;
Timer3->Enabled = false;
Timer4->Enabled = false;
FUtama->Show();
FMateri->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Timer1Timer(TObject *Sender)
{
Teks->Clear();
Teks->Lines->LoadFromFile(Filename[1]);
MateriImg->Picture->LoadFromFile(Imname[1]);
Timer1->Enabled = false;

if (Timer2->Enabled == false){
Button1->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Timer2Timer(TObject *Sender)
{
Teks->Clear();
Teks->Lines->LoadFromFile(Filename[2]);
MateriImg->Picture->LoadFromFile(Imname[2]);
Timer2->Enabled = false;

if (Timer3->Enabled == false){
Button1->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Timer3Timer(TObject *Sender)
{
Teks->Clear();
Teks->Lines->LoadFromFile(Filename[3]);
MateriImg->Picture->LoadFromFile(Imname[3]);
Timer3->Enabled = false;

if (Timer4->Enabled == false){
Button1->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Timer4Timer(TObject *Sender)
{
 Teks->Clear();
Teks->Lines->LoadFromFile(Filename[4]);

MateriImg->Picture->LoadFromFile(Imname[4]);
Timer4->Enabled = false;

Button1->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TFMateri::FormCreate(TObject *Sender)
{
MediaMusik->FileName = "musik2.wav";
MediaMusik->Open();
MediaMusik->Play();
}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Button1Click(TObject *Sender)
{
Timer1->Enabled = false;
Timer2->Enabled = false;
Timer3->Enabled = false;
Timer4->Enabled = false;
if (materinya == "Definisi") {
  FUtama->definisi();
} else if (materinya == "Perbedaan") {
  FUtama->perbedaan();
} else if (materinya == "CaraKerja"){
  FUtama->carakerja();
}
}
//---------------------------------------------------------------------------

