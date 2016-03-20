#include <sevensd.h>

SevenSD *ssd;
SevenSD *d7;



void setup() {
  // put your setup code here, to run once:
  ssd = new SevenSD(12,11,2,3,4,10,8,6);
  

  
  
}

void loop() {  
  ssd->writeSegments(1,0,0,0,0,0,0,0);
  delay(100);
  ssd->writeSegments(0,1,0,0,0,0,0,0);
  delay(100);
  ssd->writeSegments(0,0,0,0,0,0,1,0);
  delay(100);
  ssd->writeSegments(0,0,0,0,1,0,0,0);
  delay(100);
  ssd->writeSegments(0,0,0,1,0,0,0,0);
  delay(100);
  ssd->writeSegments(0,0,1,0,0,0,0,0);
  delay(100);
  ssd->writeSegments(0,0,0,0,0,0,1,0);
  delay(100);
  ssd->writeSegments(0,0,0,0,0,1,0,0);
  delay(100);
  
}
