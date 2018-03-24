#include <mbed.h>
#include "components.h"

AssignmentBoard board;

LED blue(board.K64F_BLUE_LED);

Ticker pit;

void flash(void)
{
   static unsigned int phase=0;

   if(phase==0)
   {
     blue.on();
   }

   if(phase==1)
   {
     blue.off();
   }

   phase++;

   if(phase==3)
   {
     //Reset the phases.
     phase=0;
   }
}

int main(void)
{
  pit.attach(flash,0.5);

  while(1)
  {
    //ground.
  }
}
