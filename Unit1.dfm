object FUtama: TFUtama
  Left = 287
  Top = 158
  Width = 867
  Height = 510
  Caption = 'Menu Utama'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 849
    Height = 465
  end
  object LblJdl: TLabel
    Left = 112
    Top = 24
    Width = 618
    Height = 32
    Caption = 'Waste Management sebagai Bagian dari Smart City'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clTeal
    Font.Height = -27
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object BitDefinisi: TBitBtn
    Left = 368
    Top = 152
    Width = 121
    Height = 41
    Caption = 'Definisi'
    TabOrder = 0
    OnClick = BitDefinisiClick
  end
  object BitBeda: TBitBtn
    Left = 368
    Top = 200
    Width = 121
    Height = 41
    Caption = 'Perbedaan'
    TabOrder = 1
  end
  object BitCaraKerja: TBitBtn
    Left = 368
    Top = 248
    Width = 121
    Height = 41
    Caption = 'Cara Kerja'
    TabOrder = 2
  end
  object BitImplementasi: TBitBtn
    Left = 368
    Top = 296
    Width = 121
    Height = 41
    Caption = 'Contoh Implementasi'
    TabOrder = 3
  end
  object BitBtn5: TBitBtn
    Left = 720
    Top = 416
    Width = 121
    Height = 41
    Caption = 'Close'
    TabOrder = 4
    OnClick = BitBtn5Click
  end
  object BitBtn6: TBitBtn
    Left = 8
    Top = 416
    Width = 121
    Height = 41
    Caption = 'Credit'
    TabOrder = 5
  end
end
