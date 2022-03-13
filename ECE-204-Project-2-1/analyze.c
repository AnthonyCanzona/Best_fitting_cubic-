#include <assert.h>
#include <math.h>
#include "analyze.h"
#include <stddef.h>
#include <stdlib.h>

// You can add other functions if you want to perform
// other calculations indepenent of these functions.

void data_init( data_t *p_this, double step_size ) {
  // Your implementation here...
  //p_this->detAtA = 435600;

  p_this->entries_ = NULL;
  p_this->entries_ = (double *)malloc( 10*sizeof(double) );
  for (size_t k = 0; k < 10; ++k ){
    p_this->entries_[k] = 0.0;
  }
}

void data_destroy( data_t *p_this ) {
  // Your implementation here...
  free(p_this->entries_);
}

void data_append( data_t *p_this, double new_value ) {
  // Your implementation here...
  for (size_t k = 9; k < 10; k--) {    
    p_this->entries_ [k] = p_this->entries_ [k - 1];
  }
  p_this->entries_ [0] = new_value;
}

  double data_current( data_t *p_this ) {
  // Your implementation here...

  /*double a_0 =  (269280*p_this->entries_ [9])+
                (166320*p_this->entries_ [8])+
                (83160*p_this->entries_ [7])+
                (19800*p_this->entries_ [6])+
                (-23760*p_this->entries_ [5])+
                (-47520*p_this->entries_ [4])+
                (-51480*p_this->entries_ [3])+
                (-35640*p_this->entries_ [2])+
                (0*p_this->entries_ [1])+
                (55440*p_this->entries_ [0]);*/

  double a_0 =  (0.823776223776224*p_this->entries_ [9])+
                (0.313286713286713*p_this->entries_ [8])+
                (0.019580419580420*p_this->entries_ [7])+
                (-0.106293706293706*p_this->entries_ [6])+
                (-0.113286713286713*p_this->entries_ [5])+
                (-0.050349650349650*p_this->entries_ [4])+
                (0.033566433566434*p_this->entries_ [3])+
                (0.089510489510490*p_this->entries_ [2])+
                (0.068531468531469*p_this->entries_ [1])+
                (-0.078321678321678*p_this->entries_ [0]);

  //return a_0 / p_this->detAtA ;
  return a_0;
}

double data_next( data_t *p_this ) {
    // Your implementation here...
  /*double a_2 =  (9900*p_this->entries_ [9])+
                (3300*p_this->entries_ [8])+
                (-1650*p_this->entries_ [7])+
                (-4950*p_this->entries_ [6])+
                (-6600*p_this->entries_ [5])+
                (-6600*p_this->entries_ [4])+
                (-4950*p_this->entries_ [3])+
                (-1650*p_this->entries_ [2])+
                (3300*p_this->entries_ [1])+
                (9900*p_this->entries_ [0]);

  double a_1 =  (112860*p_this->entries_ [9])+
                (48180*p_this->entries_ [8])+
                (-1650*p_this->entries_ [7])+
                (-36630*p_this->entries_ [6])+
                (-56760*p_this->entries_ [5])+
                (-62040*p_this->entries_ [4])+
                (-52470*p_this->entries_ [3])+
                (-28050*p_this->entries_ [2])+
                (11220*p_this->entries_ [1])+
                (65340*p_this->entries_ [0]);
          
  double a_0 =  (269280*p_this->entries_ [9])+
                (166320*p_this->entries_ [8])+
                (83160*p_this->entries_ [7])+
                (19800*p_this->entries_ [6])+
                (-23760*p_this->entries_ [5])+
                (-47520*p_this->entries_ [4])+
                (-51480*p_this->entries_ [3])+
                (-35640*p_this->entries_ [2])+
                (0*p_this->entries_ [1])+
                (55440*p_this->entries_ [0]); */

  double a_3 =  (0.008158508158508*p_this->entries_ [9])+
                (-0.002719502719503*p_this->entries_ [8])+
                (-0.006798756798757*p_this->entries_ [7])+
                (-0.006021756021756*p_this->entries_ [6])+
                (-0.002331002331002*p_this->entries_ [5])+
                (0.002331002331002*p_this->entries_ [4])+
                (0.006021756021756*p_this->entries_ [3])+
                (0.006798756798757*p_this->entries_ [2])+
                (0.002719502719503*p_this->entries_ [1])+
                (-0.008158508158508*p_this->entries_ [0]);

  double a_2 =  (0.132867132867133*p_this->entries_ [9])+
                (-0.029137529137529*p_this->entries_ [8])+
                (-0.095571095571096*p_this->entries_ [7])+
                (-0.092657342657343*p_this->entries_ [6])+
                (-0.046620046620047*p_this->entries_ [5])+
                (0.016317016317016*p_this->entries_ [4])+
                (0.069930069930070*p_this->entries_ [3])+
                (0.087995337995338*p_this->entries_ [2])+
                (0.044289044289044*p_this->entries_ [1])+
                (-0.087412587412587*p_this->entries_ [0]);

  double a_1 =  (0.635198135198135*p_this->entries_ [9])+
                (-0.014763014763015*p_this->entries_ [8])+
                (-0.317210567210567*p_this->entries_ [7])+
                (-0.361693861693862*p_this->entries_ [6])+
                (-0.237762237762238*p_this->entries_ [5])+
                (-0.034965034965035*p_this->entries_ [4])+
                (0.157148407148407*p_this->entries_ [3])+
                (0.249028749028749*p_this->entries_ [2])+
                (0.151126651126651*p_this->entries_ [1])+
                (-0.226107226107226*p_this->entries_ [0]);

  double a_0 =  (0.823776223776224*p_this->entries_ [9])+
                (0.313286713286713*p_this->entries_ [8])+
                (0.019580419580420*p_this->entries_ [7])+
                (-0.106293706293706*p_this->entries_ [6])+
                (-0.113286713286713*p_this->entries_ [5])+
                (-0.050349650349650*p_this->entries_ [4])+
                (0.033566433566434*p_this->entries_ [3])+
                (0.089510489510490*p_this->entries_ [2])+
                (0.068531468531469*p_this->entries_ [1])+
                (-0.078321678321678*p_this->entries_ [0]);

  return (a_3 + a_2 + a_1 + a_0);
  //return (a_2 + a_1 + a_0) / p_this->detAtA ;
}