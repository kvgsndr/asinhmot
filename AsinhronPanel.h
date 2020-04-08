//---------------------------------------------------------------------------
#ifndef AsinhronPanelH
#define AsinhronPanelH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
#include <vcl\ComCtrls.hpp>
//---------------------------------------------------------------------------

int d;

class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TTimer *Rotate;
        TLabel *Label1;
        TLabel *Label2;
        TTrackBar *TrackBar1;
        TTrackBar *TrackBar2;
        TTrackBar *TrackBar3;
        TLabel *X;
        TLabel *Y;
        TLabel *f;
        TLabel *frequency;
        TLabel *yvalue;
        TLabel *xvalue;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *tvalue;
        TLabel *Label5;
        TCheckBox *Starter;
        TLabel *Label6;
        TLabel *name;
        TTimer *T2;
        TLabel *Label8;
        TLabel *omg;
        TImage *M;
        TTrackBar *TrackBar4;
        void __fastcall RotateTimer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall TrackBar2Change(TObject *Sender);
        void __fastcall TrackBar3Change(TObject *Sender);
        void __fastcall StarterClick(TObject *Sender);
        void __fastcall T2Timer(TObject *Sender);
        void __fastcall TrackBar4Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
