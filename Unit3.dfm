object Form3: TForm3
  Left = 561
  Top = 239
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Contoh Implementasi'
  ClientHeight = 498
  ClientWidth = 875
  Color = clGradientActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 48
    Top = 24
    Width = 794
    Height = 39
    Caption = 'Berikut Contoh Implementasi Smart Waste management.....'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Calibri'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Panel1: TPanel
    Left = 224
    Top = 96
    Width = 425
    Height = 209
    Caption = 'Panel1'
    TabOrder = 0
    object MediaPlayer1: TMediaPlayer
      Left = 88
      Top = 64
      Width = 253
      Height = 30
      Visible = False
      TabOrder = 0
    end
    object MediaPlayer2: TMediaPlayer
      Left = 88
      Top = 112
      Width = 253
      Height = 30
      Display = Panel1
      Visible = False
      TabOrder = 1
    end
  end
  object Button1: TButton
    Left = 72
    Top = 368
    Width = 185
    Height = 65
    Caption = 'MAIN MENU'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 632
    Top = 368
    Width = 177
    Height = 65
    Caption = 'STOP VIDEO'
    Enabled = False
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 360
    Top = 368
    Width = 177
    Height = 65
    Caption = 'PLAY VIDEO'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 7000
    OnTimer = Timer1Timer
    Left = 56
    Top = 112
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 15000
    OnTimer = Timer2Timer
    Left = 112
    Top = 112
  end
end
