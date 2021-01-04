//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
Timer1->Enabled = True;
MediaPlayer1->FileName = "implementasi-intro.wav";
MediaPlayer1->Open();
MediaPlayer1->Play();
MediaPlayer2->FileName = "1implementasi.wmv";
MediaPlayer2->Open();
MediaPlayer2->DisplayRect = Rect (0,0, Panel1->Width, Panel1->Height);
Button2->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
Timer1->Enabled = false;
MediaPlayer1->Stop();
MediaPlayer2->Play();
Timer2->Enabled = true;
Button2->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer2Timer(TObject *Sender)
{
Timer2->Enabled = false;
MediaPlayer2->Stop();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
Timer1->Enabled = false;
Timer2->Enabled = false;
MediaPlayer2->Close();
MediaPlayer2->Close();
FMateri->MediaMusik->Play();
FUtama->Show();
Form3->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
Timer2->Enabled = false;
MediaPlayer2->Stop();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
Timer1->Enabled = false;
MediaPlayer1->Stop();
MediaPlayer2->Play();
Timer2->Enabled = true;
Button2->Enabled = true;
}
//---------------------------------------------------------------------------

