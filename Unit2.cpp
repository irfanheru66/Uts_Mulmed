//---------------------------------------------------------------------------
/*silahkan liat file .h terlebih dahulu!!.
*/
#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMateri *FMateri;
fungsiku *fungsi;//disini urg inisiasi nama classnya jadi fungsi dari fungsiku,

//lanjut ke paling bawah

//---------------------------------------------------------------------------
__fastcall TFMateri::TFMateri(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFMateri::BitBtn5Click(TObject *Sender)
{
//naaaah macam nii lah mantap wkwkwkw
fungsi->implementasi();
}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Timer1Timer(TObject *Sender)
{
Teks->Clear();
Teks->Lines->LoadFromFile(Filename[1]);
MateriImg->Picture->LoadFromFile(Imname[1]);
Timer1->Enabled = false;

}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Timer2Timer(TObject *Sender)
{
Teks->Clear();
Teks->Lines->LoadFromFile(Filename[2]);
MateriImg->Picture->LoadFromFile(Imname[2]);
Timer2->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Timer3Timer(TObject *Sender)
{
Teks->Clear();
Teks->Lines->LoadFromFile(Filename[3]);
MateriImg->Picture->LoadFromFile(Imname[3]);
Timer3->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TFMateri::Timer4Timer(TObject *Sender)
{
 Teks->Clear();
Teks->Lines->LoadFromFile(Filename[4]);

MateriImg->Picture->LoadFromFile(Imname[4]);
Timer4->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TFMateri::FormCreate(TObject *Sender)
{
MediaMusik->FileName = "musik2.wav";
MediaMusik->Open();
MediaMusik->Play();
}
//---------------------------------------------------------------------------
/*naaaah ini contoh isi void yang tadi, terus manggilnya bisa liat contoh
tombol close*/
void fungsiku::implementasi()
{
FUtama->Show();
FMateri->Hide();
}
//---------------------------------------------------------------------------
void fungsiku::SetTimer(int timerNo, int timerIntr, bool isTimerOn)
{
switch(timerNo){
 case 1:
  FMateri->Timer1->Enabled = isTimerOn;
  FMateri->Timer1->Interval = timerIntr;
  break;
 case 2:
  FMateri->Timer2->Enabled = isTimerOn;
  FMateri->Timer2->Interval = timerIntr;
  break;
 case 3:
  FMateri->Timer3->Enabled = isTimerOn;
  FMateri->Timer3->Interval = timerIntr;
  break;
 case 4:
  FMateri->Timer4->Enabled = isTimerOn;
  FMateri->Timer4->Interval = timerIntr;
  break;
 case 5:
  FMateri->Timer5->Enabled = isTimerOn;
  FMateri->Timer5->Interval = timerIntr;
  break;
 case 6:
  FMateri->Timer6->Enabled = isTimerOn;
  FMateri->Timer6->Interval = timerIntr;
  break;
 default:
  FMateri->Timer1->Enabled = isTimerOn;
  FMateri->Timer1->Interval = timerIntr;
}
}
//---------------------------------------------------------------------------
void fungsiku::SetVideo(String flName)
{
FMateri->MediaVideo->FileName = flName;
FMateri->MediaVideo->Open();
FMateri->MediaVideo->Display = FMateri->DisplayPnl;
FMateri->MediaVideo->DisplayRect = Rect (0,0, FMateri->DisplayPnl->Width, FMateri->DisplayPnl->Height);
FMateri->MediaVideo->Play();
}
//---------------------------------------------------------------------------
