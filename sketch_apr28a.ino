#include "pitches.h"
#define speaker 3

int NOTE_DUR = 137;	// This value can be 
// modified to change the tempo


void play(int note, int dur)
{
  tone(speaker, note);
  delay(dur*NOTE_DUR);
  noTone(speaker); 
  delay(dur*NOTE_DUR/3);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(speaker,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
play(NOTE_A4,2);//PEA
play(NOTE_C5,2);//CHES
play(NOTE_A4,2);//PEA
play(NOTE_C5,2);//CHES
play(NOTE_A4,2);//PEA
play(NOTE_C5,1);
play(NOTE_A4,2);
play(NOTE_C5,1);
play(NOTE_A4,1);
play(NOTE_C5,1);

play(NOTE_B4,2);//PEA
play(NOTE_D5,2);//CHES
play(NOTE_B4,2);//PEA
play(NOTE_D5,2);//CHES
play(NOTE_B4,2);//PEA
play(NOTE_D5,1);
play(NOTE_B4,2);
play(NOTE_D5,1);
play(NOTE_B4,1);
play(NOTE_D5,1);

play(NOTE_E5,4);
play(NOTE_E5,4);
play(NOTE_G5,4);
play(NOTE_A5,4);
play(NOTE_D5,4);
play(NOTE_C5,2);
play(NOTE_A4,2);
play(NOTE_E5,4);
play(NOTE_E5,4);

}
