object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Lab5'
  ClientHeight = 456
  ClientWidth = 516
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 143
    Top = 7
    Width = 105
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1089#1074#1086#1105' '#1095#1080#1089#1083#1086':'
  end
  object Label3: TLabel
    Left = 279
    Top = 68
    Width = 87
    Height = 13
    Caption = #1089#1083#1091#1095#1072#1081#1085#1099#1093' '#1095#1080#1089#1077#1083
  end
  object EnterNRandomNumber: TEdit
    Left = 230
    Top = 65
    Width = 41
    Height = 21
    TabOrder = 0
  end
  object RemoveAll: TButton
    Left = 176
    Top = 351
    Width = 169
    Height = 42
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1089#1087#1080#1089#1086#1082
    TabOrder = 1
    OnClick = RemoveAllClick
  end
  object RemoveFromBegin: TButton
    Left = 176
    Top = 406
    Width = 169
    Height = 41
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1080#1079' '#1085#1072#1095#1072#1083#1072' '#1086#1095#1077#1088#1077#1076#1080
    TabOrder = 2
    OnClick = RemoveFromBeginClick
  end
  object AddOwnNumber: TButton
    Left = 279
    Top = 24
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 3
    OnClick = AddOwnNumberClick
  end
  object EnterOwnNumber: TEdit
    Left = 143
    Top = 26
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object ListQueue: TListBox
    Left = 0
    Top = 0
    Width = 129
    Height = 448
    ItemHeight = 13
    TabOrder = 5
  end
  object AddRandomNumber: TButton
    Left = 212
    Top = 112
    Width = 154
    Height = 41
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1089#1083#1091#1095#1072#1081#1085#1086#1077' '#1095#1080#1089#1083#1086
    TabOrder = 6
    OnClick = AddRandomNumberClick
  end
  object AddNRandomNumber: TButton
    Left = 149
    Top = 63
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 7
    OnClick = AddNRandomNumberClick
  end
  object Sort: TButton
    Left = 176
    Top = 296
    Width = 137
    Height = 49
    Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 8
    OnClick = SortClick
  end
end
