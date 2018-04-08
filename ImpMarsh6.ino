#define C_  12
#define C_d 13
#define D_  14
#define D_d 15
#define E_  16
#define F_  17
#define F_d 18
#define G_  19
#define G_d 20
#define A_  21
#define A_d 22
#define B_  23

#define C4  60
#define Cd4 61
#define D4  62
#define Dd4 63
#define E4  64
#define F4  65
#define Fd4 66
#define G4  67
#define Gd4 68
#define A4  69
#define Ad4 70
#define B4  71
#define C5  72
#define Cd5 73
#define D5  74
#define Dd5 75
#define E5  76
#define F5  77
#define Fd5 78
#define G5  79
#define Gd5 80
#define A5  81
#define Ad5 82
#define B5  83

#define pause -1
#define EOF -2

int zn1 = 32;
int zn2 = 96;

const char song1[50][2] = //32
{
  {pause, 32},
  {pause, 32},
  {pause, 32},
  {pause, 32},
  {G4, 8},
  {G4, 8},
  {G4, 8},
  {E4, 6},
  {Ad4, 2},
  {G4, 8},
  {E4, 6},
  {Ad4, 2},
  {G4, 16},
  {D5, 8},
  {D5, 8},
  {D5, 8},
  {Dd5, 6},
  {Ad4, 2},
  {Fd4, 8},
  {E4, 6},
  {Ad4, 2},
  {G4, 16},
  {G5, 8},
  {G4, 6},
  {G4, 2},
  {G5, 8},
  {Fd5, 6},
  {F5, 2},
  {E5, 2},
  {Dd5, 2},
  {E5, 4},
  {pause, 4},
  {Gd4, 4},
  {Cd5, 8},
  {C5, 6},
  {B4, 2},
  //--------------------
  //  {A_d, 4, 1 / 16.00},
  //  {A_, 4, 1 / 16.00},
  //  {A_d, 4, 1 / 8.00},
  //  {pause, 4, 1 / 8.00},
  //  {E_, 4, 1 / 8.00},
  //  {F_d, 4, 1 / 4.00},
  //  {E_, 4, 3 / 16.00},
  //  {F_, 4, 1 / 16.00},
  //  {A_d, 4, 1 / 4.00},
  //  {G_, 4, 3 / 16.00},
  //  {A_d, 4, 1 / 16.00},
  //  {D_, 5, 1 / 2.00},
  //  //--------------------
  //  {G_, 5, 1 / 4.00},
  //  {G_, 4, 3 / 16.00},
  //  {G_, 4, 1 / 16.00},
  //  {G_, 5, 1 / 4.00},
  //  {F_d, 5, 3 / 16.00},
  //  {F_, 5, 1 / 16.00},
  //  {E_, 5, 1 / 16.00},
  //  {D_d, 5, 1 / 16.00},
  //  {E_, 5, 1 / 8.00},
  //  {pause, 4, 1 / 8.00},
  //  {G_d, 4, 1 / 8.00},
  //  {C_d, 5, 1 / 4.00},
  //  {C_, 5, 3 / 16.00},
  //  {B_, 4, 1 / 16.00},
  //  //-------------------
  //  {A_d, 4, 1 / 16.00},
  //  {A_, 4, 1 / 16.00},
  //  {A_d, 4, 1 / 8.00},
  //  {pause, 4, 1 / 8.00},
  //  {E_, 4, 1 / 8.00},
  //  {F_d, 4, 1 / 4.00},
  //  {E_, 4, 3 / 16.00},
  //  {A_d, 4, 1 / 16.00},
  //  {G_, 4, 1 / 4.00},
  //  {E_, 4, 3 / 16.00},
  //  {A_d, 4, 1 / 16.00},
  //  {G_, 4, 1 / 2.00},
  {EOF, EOF}
};

const char song2[110][2] =//96
{
  {E4, 12},
  {pause, 12},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 6},
  {pause, 6},
  //----------------
  {E4, 12},
  {pause, 12},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 6},
  {pause, 6},
  //----------------
  {E4, 12},
  {pause, 12},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 6},
  {pause, 6},
  //----------------
  {E4, 12},
  {pause, 12},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 6},
  {pause, 6},
  //  //-----------------
  {E4, 12},
  {pause, 12},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 6},
  {pause, 6},
  //----------------
  {E4, 12},
  {pause, 12},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 6},
  {pause, 6},
  //  //----------------
  {E4, 12},
  {pause, 12},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {E4, 12},
  {E4, 3},
  {E4, 3},
  {E4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 3},
  {Ad4, 6},
  {pause, 6},
  //----------------

  {EOF, EOF}
};

#define TEMP 105.00

byte directionPin1 = 2;
byte stepPin1 = 3;
byte directionPin2 = 0;
byte stepPin2 = 1;
unsigned long dlitMs1 = 0;
unsigned long dlitMs2 = 0;
unsigned long period1 = 0;
unsigned long period2 = 0;
float freq1;
float freq2;
//unsigned long t0, t1, dt;
unsigned long n1t0 = 0, n1t1 = 0;
unsigned long n2t0 = 0, n2t1 = 0;
unsigned long s1t0 = 0, s1t1 = 0;
unsigned long s2t0 = 0, s2t1 = 0;
bool dir1 = 0;
bool dir2 = 0;
int pre_note1;
int pre_note2;
int i1 = 0;
int i2 = 0;
bool stepState1 = 1;
bool stepState2 = 1;

void setup()
{
  pinMode(directionPin1, OUTPUT);
  pinMode(stepPin1, OUTPUT);
  digitalWrite(directionPin1, dir1);
  pinMode(directionPin2, OUTPUT);
  pinMode(stepPin2, OUTPUT);
  digitalWrite(directionPin2, dir2);
}

void loop()
{
  //------------------------------------------
  s1t1 = millis();
  if (s1t1 - s1t0 >= dlitMs1)
  {
    s1t0 = s1t1;
    spellout1(song1[i1][0], song1[i1][1]);
    i1++;

    dir1 = !dir1;
    digitalWrite(directionPin1, dir1);
    if (song1[i1][0] == EOF)
      i1 = 0;
  }
  //------------------------------------------
  s2t1 = millis();
  if (s2t1 - s2t0 >= dlitMs2)
  {
    if (song2[i2][0] != EOF)
    {
    s2t0 = s2t1;
    spellout2(song2[i2][0], song2[i2][1]);
    i2++;

    dir2 = !dir2;
    digitalWrite(directionPin2, dir2);
    }
    else
    {
      //i2 = 0;
      digitalWrite(stepPin2, 0);
      digitalWrite(directionPin2, 0);
    }
      
  }
  //------------------------------------------
  if (song1[i1 - 1][0] != pause)
  {
    n1t1 = micros();
    if (n1t1 - n1t0 >= period1)
    {
      n1t0 = n1t1;
      changeStep1();
    }
  }
  //------------------------------------------
  if (song2[i2 - 1][0] != pause)
  {
    n2t1 = micros();
    if (n2t1 - n2t0 >= period2)
    {
      n2t0 = n2t1;
      changeStep2();
    }
  }
  //------------------------------------------
}

void spellout1(char note, char dlit)
{
  dlitMs1 = (4 * float(dlit/zn1) * (60.00 / float(TEMP))) * 1000;
  freq1 = 440 * pow(2, ((float(note) - 69) / 12));
  period1 = ((1e+0 / float(freq1)) * 1E+6) / 2e+0;
}

void spellout2(char note, char dlit)
{
  dlitMs2 = (4 * float(dlit/zn2) * (60.00 / float(TEMP))) * 1000;
  freq2 = 440 * pow(2, ((float(note) - 69) / 12));
  period2 = ((1e+0 / float(freq2)) * 1E+6) / 2e+0;
}

void changeStep1()
{
    digitalWrite(stepPin1, stepState1);
    stepState1 = !stepState1;
}
void changeStep2()
{
    digitalWrite(stepPin2, stepState2);
    stepState2 = !stepState2;
}

