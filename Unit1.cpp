//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFUtama *FUtama;
//---------------------------------------------------------------------------
__fastcall TFUtama::TFUtama(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFUtama::BitDefinisiClick(TObject *Sender)
{
FMateri->Show();
FUtama->Hide();
definisi();
}
//---------------------------------------------------------------------------
void TFUtama::definisi()
{
FMateri->Button1->Enabled = false;
FMateri->LblJdl->Caption = "Kenalan yuk sama Smart Waste Management!"  ;
FMateri->Teks->Lines->LoadFromFile("1Definisi.txt");
FMateri->MateriImg->Picture->LoadFromFile("Definisi.bmp");

FMateri->Imname[1] = "Definisi-2.bmp";
FMateri->Filename[1] = "1Definisi2.txt";
FMateri->Timer1->Enabled = true;
FMateri->Timer1->Interval = 5000;
FMateri->materinya = "Definisi";
}
//---------------------------------------------------------------------------
void __fastcall TFUtama::BitBtn5Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFUtama::BitBedaClick(TObject *Sender)
{
FMateri->Show();
FUtama->Hide();
perbedaan();
}
//---------------------------------------------------------------------------
void TFUtama::perbedaan()
{
FMateri->Button1->Enabled = false;
FMateri->LblJdl->Caption = "Kenapa sih Smart Waste Management ini keren??";
FMateri->MateriImg->Picture->LoadFromFile("Perbedaan.bmp");

FMateri->Teks->Lines->LoadFromFile("3Perbedaan.txt");
FMateri->materinya = "Perbedaan";
}
//---------------------------------------------------------------------------
void __fastcall TFUtama::BitCaraKerjaClick(TObject *Sender)
{
FMateri->Show();
FUtama->Hide();
carakerja();
}
//---------------------------------------------------------------------------
void TFUtama::carakerja()
{
FMateri->Button1->Enabled = false;
FMateri->LblJdl->Caption = "Gimana sih Smart Waste Management??"  ;

FMateri->Show();
FMateri->Teks->Lines->LoadFromFile("2Cara Kerja.txt");
FMateri->MateriImg->Picture->LoadFromFile("Cara-Kerja.bmp");

FMateri->Imname[1] = "Cara-Kerja-Micro.bmp";
FMateri->Filename[1] = "2Cara Kerja2.txt";
FMateri->Timer1->Enabled = true;
FMateri->Timer1->Interval = 5000;

FMateri->Imname[2] = "Cara-Kerja-Sensor.bmp";
FMateri->Filename[2] = "2Cara Kerja2.txt";
FMateri->Timer2->Enabled = true;
FMateri->Timer2->Interval = 7500;

FMateri->Imname[3] = "Cara-Kerja-Modem.bmp";
FMateri->Filename[3] = "2Cara Kerja3.txt";
FMateri->Timer3->Enabled = true;
FMateri->Timer3->Interval = 10000;

FMateri->Imname[4] = "Cara-Kerja-Truk.bmp";
FMateri->Filename[4] = "2Cara Kerja4.txt";
FMateri->Timer4->Enabled = true;
FMateri->Timer4->Interval = 15000;
FMateri->materinya = "CaraKerja";
}
//---------------------------------------------------------------------------
void __fastcall TFUtama::BitImplementasiClick(TObject *Sender)
{
Form3->Show();
FMateri->MediaMusik->Stop();
FUtama->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFUtama::BitBtn6Click(TObject *Sender)
{
FMateri->MediaMusik->Stop();
Form4->Show();
FUtama->Hide();
}
//---------------------------------------------------------------------------

