//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#include <math.h>
#pragma hdrstop

#include "AsinhronPanel.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TForm1 *Form1;
int Xn=220,Yn=220;
float fr=40,x,y,t=0;
float T;
int a=0;
int he;




//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RotateTimer(TObject *Sender)
{
 //X Y f

/* if(Starter->Checked==true){
 float omega;
       if(t<=T){
         omega=6.28;
         omega=omega * fr;
         T=1/fr;

         //x=Xn  * cos(omega * t);
         //y=Yn * cos(omega * t);
         t=t+0.001;

         tvalue->Caption=FloatToStr(t);
         x=1;
         y=1;

         Label1->Caption=FloatToStr(x);
         Label2->Caption=FloatToStr(y);
         }

       //if(t>=T){t=0;x=0;y=0;
       //tvalue->Caption=FloatToStr(t);
       //Label1->Caption=StrToInt(x);
       //  Label2->Caption=StrToInt(y);}


       } */

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
//if(Rotate->Enabled==false){Rotate->Enabled=true;}
//else if(Rotate->Enabled==true){Rotate->Enabled=false;}
//t=0;x=0;y=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
Xn=TrackBar1->Position;
xvalue->Caption=StrToInt(Xn);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar2Change(TObject *Sender)
{
Yn=TrackBar2->Position;
yvalue->Caption=StrToInt(Yn);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar3Change(TObject *Sender)
{
fr=TrackBar3->Position;
frequency->Caption=StrToInt(fr);
Rotate->Interval=he/fr;
Label6->Caption=IntToStr(Rotate->Interval);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StarterClick(TObject *Sender)
{
t=0;x=0;y=0;
//M->Canvas->FilRect();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::T2Timer(TObject *Sender)
{float omega=6.28; int xm,ym;
if(Starter->Checked==true){t=t+0.0001; tvalue->Caption=FloatToStr(t);
                                      omega=omega * fr;
                                      omg->Caption=FloatToStr(omega);

                                      M->Canvas->Pen->Color=clWhite;
                                      M->Canvas->MoveTo(M->Width/2,M->Height/2);
                                      M->Canvas->LineTo((int)x/2+M->Width/2,M->Height/2-(int)y/2);
                                      M->Canvas->Pixels[(int)x/2+M->Width/2][M->Height/2-(int)y/2]=(TColor)RGB(50,50,50);
                                      xm=(int)x/2+M->Width/2;ym=M->Height/2-(int)y/2;
                                      //M->Canvas->MoveTo(0,ym);M->Canvas->LineTo(360,ym);
                                      //M->Canvas->MoveTo(xm,0);M->Canvas->LineTo(xm,360);

                                      M->Canvas->MoveTo(180,180);M->Canvas->LineTo(180,ym);
                                      M->Canvas->MoveTo(180,180);M->Canvas->LineTo(xm,180);

                                      x=Xn  * sin(omega * t);
                                      y=Yn * cos(omega * t);

                                      M->Canvas->Pen->Color=clBlack;
                                      M->Canvas->MoveTo(M->Width/2,M->Height/2);
                                      M->Canvas->LineTo((int)x/2+M->Width/2,M->Height/2-(int)y/2);



                                      M->Canvas->MoveTo(xm,ym);
                                      M->Canvas->Pen->Color=clBlue;
                                      M->Canvas->LineTo((int)x/2+M->Width/2,M->Height/2-(int)y/2);

                                      M->Canvas->Pen->Color=clYellow;
                                      M->Canvas->Pixels[(int)x/2+M->Width/2][M->Height/2-(int)y/2]=(TColor)RGB(0,255,60);

                                      xm=(int)x/2+M->Width/2;ym=M->Height/2-(int)y/2;

                                      M->Canvas->Pen->Color=clGreen;
                                      M->Canvas->MoveTo(180,180);M->Canvas->LineTo(180,ym);
                                      M->Canvas->MoveTo(180,180);M->Canvas->LineTo(xm,180);



                                      Label1->Caption=FloatToStr(x);
                                      Label2->Caption=FloatToStr(y);


T=1/fr;
if(t>=T){t=0;x=0;y=0;}

 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar4Change(TObject *Sender)
{
 he=TrackBar4->Position;
 T2->Interval=(1000-he)/fr;
}
//---------------------------------------------------------------------------