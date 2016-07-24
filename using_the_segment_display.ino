// setup data

//class digitDisplay {
//  
//  class segmentDisplay {
//    
//    int segmentState[8] = {0, 0, 0, 0, 0, 0, 0, 0};  // Array to hold segment data: [ A, B, C, D, E, F, G, DP ]
//    
//    public:
//    
//    void clearSegments() {
//      for (int i = 0; i < 8; i++) {
//        segmentState[i] = 0;
//      }
//    }
//    
//    void setSegments(int segmentArr[8]) {
//      for (int i = 0; i < 8; i++) {
//        segmentState[i] = segmentArr[i];
//      }
//    }
//    
//  };
//  
//  segmentDisplay digit1;
//  segmentDisplay digit2;
//  segmentDisplay digit3;
//  segmentDisplay digit4;
//  
//  digit1.clearSegments();
//  
//};

class segmentDisplay {
  public:
    segmentDisplay(/*int*, int*/);
    segmentDisplay(int*, int);
    
    void setAnodes(int*);
    void setCathode(int);
    
    void setSegments(int*);
    void clearSegments();
    
    void clearPattern(int*);
    void getPattern(char, int*, boolean);
    
    void displaySegments();
  private:
    int anodes[8];
    int cathode;
    
    int state[8];
};

segmentDisplay::segmentDisplay(/*int a[], int c*/) {
  
  /*for(int i = 0; i < 8; i++) {
    anodes[i] = a[i];
  }
  cathode = c;*/
  
  clearSegments();
}

segmentDisplay::segmentDisplay(int a[], int c) {
  
  for(int i = 0; i < 8; i++) {
    anodes[i] = a[i];
  }
  cathode = c;
  
  clearSegments();
}

void segmentDisplay::setAnodes(int a[8]) {
  
  for(int i = 0; i < 8; i++) {
    anodes[i] = a[i];
  }
}

void segmentDisplay::setCathode(int c) {
  
  cathode = c;
}

void segmentDisplay::setSegments(int data[]) {
  
  for(int i = 0; i < 8; i++) {
    state[i] = data[i];
  }
}

void segmentDisplay::clearSegments() {
  
  for(int i = 0; i < 8; i++) {
    state[i] = 0;
  }
}

void segmentDisplay::displaySegments() {
  
  for(int i = 0; i < 8; i++) {
    
    digitalWrite(anodes[i], state[i]);
  }
  
  digitalWrite(cathode, 0);
}

void segmentDisplay::getPattern(char name, int patternContainer[], boolean decimal) {
  
  if(name == '0') {
    
    patternContainer[0] = 1;
    patternContainer[1] = 1;
    patternContainer[2] = 1;
    patternContainer[3] = 1;
    patternContainer[4] = 1;
    patternContainer[5] = 1;
    patternContainer[6] = 0;
    patternContainer[7] = 0;
    
  } else if(name == '1') {
    
    patternContainer[0] = 0;
    patternContainer[1] = 1;
    patternContainer[2] = 1;
    patternContainer[3] = 0;
    patternContainer[4] = 0;
    patternContainer[5] = 0;
    patternContainer[6] = 0;
    patternContainer[7] = 0;
    
  }else if(name == '2') {
    
    patternContainer[0] = 1;
    patternContainer[1] = 1;
    patternContainer[2] = 0;
    patternContainer[3] = 1;
    patternContainer[4] = 1;
    patternContainer[5] = 0;
    patternContainer[6] = 1;
    patternContainer[7] = 0;
    
  }else if(name == '3') {
    
    patternContainer[0] = 1;
    patternContainer[1] = 1;
    patternContainer[2] = 1;
    patternContainer[3] = 1;
    patternContainer[4] = 0;
    patternContainer[5] = 0;
    patternContainer[6] = 1;
    patternContainer[7] = 0;
    
  }else if(name == '4') {
    
    patternContainer[0] = 0;
    patternContainer[1] = 1;
    patternContainer[2] = 1;
    patternContainer[3] = 0;
    patternContainer[4] = 0;
    patternContainer[5] = 1;
    patternContainer[6] = 1;
    patternContainer[7] = 0;
    
  }else if(name == '5') {
    
    patternContainer[0] = 1;
    patternContainer[1] = 0;
    patternContainer[2] = 1;
    patternContainer[3] = 1;
    patternContainer[4] = 0;
    patternContainer[5] = 1;
    patternContainer[6] = 1;
    patternContainer[7] = 0;
    
  }else if(name == '6') {
    
    patternContainer[0] = 1;
    patternContainer[1] = 0;
    patternContainer[2] = 1;
    patternContainer[3] = 1;
    patternContainer[4] = 1;
    patternContainer[5] = 1;
    patternContainer[6] = 1;
    patternContainer[7] = 0;
    
  }else if(name == '7') {
    
    patternContainer[0] = 1;
    patternContainer[1] = 1;
    patternContainer[2] = 1;
    patternContainer[3] = 0;
    patternContainer[4] = 0;
    patternContainer[5] = 0;
    patternContainer[6] = 0;
    patternContainer[7] = 0;
    
  }else if(name == '8') {
    
    patternContainer[0] = 1;
    patternContainer[1] = 1;
    patternContainer[2] = 1;
    patternContainer[3] = 1;
    patternContainer[4] = 1;
    patternContainer[5] = 1;
    patternContainer[6] = 1;
    patternContainer[7] = 0;
    
  }else if(name == '9') {
    
    patternContainer[0] = 1;
    patternContainer[1] = 1;
    patternContainer[2] = 1;
    patternContainer[3] = 1;
    patternContainer[4] = 0;
    patternContainer[5] = 1;
    patternContainer[6] = 1;
    patternContainer[7] = 0;
    
  }else if(name == '.') {
    
    patternContainer[0] = 0;
    patternContainer[1] = 0;
    patternContainer[2] = 0;
    patternContainer[3] = 0;
    patternContainer[4] = 0;
    patternContainer[5] = 0;
    patternContainer[6] = 0;
    patternContainer[7] = 1;
    
  }else {
    patternContainer[0] = 0;
    patternContainer[1] = 0;
    patternContainer[2] = 0;
    patternContainer[3] = 0;
    patternContainer[4] = 0;
    patternContainer[5] = 0;
    patternContainer[6] = 0;
    patternContainer[7] = 0;
  }
  //else if(name == 'n') {  // Empty array is filled with discarded memory from the stack, random values and old information.  interesting.
//    
//  }
  if(decimal == true) {
    patternContainer[7] = 1;
  }
  
  //return patternContainer;
}




class digitDisplay {
  public:
    digitDisplay(int*, int*); // defign the number of digits
    
    void clearDisplay();
    
    void displayDigit(int);
    void displayOff();
    void sweep(int);
    
    void clearDigit(int);
    void setDigit(int, char, boolean = false);  // Use one byte to display characters on the display
    
    
    
  private:
    int anodes[8];
    int cathodes[4];
    
    segmentDisplay digit1;
    segmentDisplay digit2;
    segmentDisplay digit3;
    segmentDisplay digit4;
    
    segmentDisplay digits[4] = {
      digit1,
      digit2,
      digit3,
      digit4
    };
    
};

digitDisplay::digitDisplay(int a[8], int c[4]) {
  
  for(int i = 0; i < 8; i++) {
    
    anodes[i] = a[i];
  }
  for(int i = 0; i < 4; i++) {
    
    cathodes[i] = c[i];
  }
  
//  digit1.setAnodes(anodes);
//  digit1.setCathode(cathodes[0]);
//  digit2.setAnodes(anodes);
//  digit2.setCathode(cathodes[1]);
//  digit3.setAnodes(anodes);
//  digit3.setCathode(cathodes[2]);
//  digit4.setAnodes(anodes);
//  digit4.setCathode(cathodes[3]);
  for(int i = 0; i < 4; i++) {
    
    digits[i].setAnodes(anodes);
    digits[i].setCathode(cathodes[i]);
  }
  
}

void digitDisplay::clearDisplay() {
  
//  digit1.clearSegments();
//  digit2.clearSegments();
//  digit3.clearSegments();
//  digit4.clearSegments();
  
  for(int i = 0; i < 4; i++) {
    
    digits[i].clearSegments();
  }
}

void digitDisplay::clearDigit(int digit) {
  
  digits[digit].clearSegments();
}

void digitDisplay::setDigit(int digit, char character, boolean dec) {
  
  int pattern[8];
  
  digits[digit].getPattern(character, pattern, dec);
  digits[digit].setSegments(pattern);
}

void digitDisplay::displayDigit(int digit) {
  
  digits[digit].displaySegments();
}

void digitDisplay::sweep(int waitTime) {
  
  for(int i = 0; i < 4; i++) {
    
    displayOff();
    displayDigit(i);
    delay(waitTime);
  }
  displayOff();
}

void digitDisplay::displayOff() {
  
  for(int i = 0; i < 8; i++) {
    
    digitalWrite(anodes[i], 0);
  }
  for(int i = 0; i < 4; i++) {
    
    digitalWrite(cathodes[i], 1);
  }
}

void intToChar(int input, char characters[], int padding = 4) {  // only works for numbers less than 10... :(
//  
//  if(input > 9999) {
//    
//  } else if(input > 999) {
//    
//  } else if(input > 99) {
//    
//  } else if(input > 9) {
//    
//  } else {
//    
//  }
  int x = 10;
  int digit = 0;
  while(true) {
    if(input / x > 0) {
      x *= 10;
      digit += 1;
    } else {
      break;
    }
  }
  
//  if(true) {
//    for(int i = 0; i < 4; i++) {
//      characters[i] = '0';
//    }
//  }

  while(true) {
    if(input > 9) {
      characters[digit] = '0' + (input % 10);
      digit--;
      input /= 10;
    } else {
      characters[digit] = '0' + input;
      break;
    }
  }
  
//  for(int i = padding; i > 0; i--) {  // messed something up
//    
//    if(padding - (digit + 1) - i > 0) {
//      characters[i] = '0';
//    } else {
//      
//      if(input > 9) {
//        characters[i] = '0' + (input % 10);
//        //digit--;
//        input /= 10;
//      } else {
//        characters[i] = '0' + input;
//        //break;
//      }
//    }
//  }
  
}



// Display pins
int cathodes[4] = {2, 1, 3, 0};
int anodes[8] = {4, 5, 6, 7, 8, 9, 10, 11};

// Button pins
int hrBut = 13;
int minBut = 12;

// Display settings
int waitTime = 1;  // Time to display each digit before moving to the next one

// Count down settings
int value = 0;  // Stores current display value
int countDown = 9999;  // Number to count down from

// Timer variables
long currentTime;
long startTime;
long offsetms = 120000;
int HR_MS = 3600000;
int MIN_MS = 60000;
int displayValue;

char characters[4] = {};

digitDisplay dDisplay (anodes, cathodes);



void setup() {
  
  //set up outputs
  //cathodes
  for(int i = 0; i < 4; i++) {
    
    pinMode(cathodes[i], OUTPUT);
  }
  // anodes
  for(int i = 0; i < 8; i++) {
    
    pinMode(anodes[i], OUTPUT);
  }
  
  startTime = millis();
  
  randomSeed(analogRead(0));
  
  intToChar(random(101, 201), characters);
////  
  dDisplay.setDigit(0, characters[0]);
  dDisplay.setDigit(1, characters[1]);
  dDisplay.setDigit(2, characters[2]);
  dDisplay.setDigit(3, characters[3]);
  
}


void loop() {
  currentTime = (millis() - startTime) + 10000;
  dDisplay.sweep(waitTime);
  
//  for(int i = 0; i< 4; i++) {
//    characters[i] = 'n';
//  }
//  intToChar(value, characters);
//  value = countDown - (currentTime / 100);
  
  //displayValue = (currentTime / HR_MS * 100)/* = the hours with two zeros*/ + (currentTime / MIN_MS % 60);/* = the minutes*/  // 1min = 60,000ms, 1hr = 3,600,000ms
//  displayValue = currentTime / 6000 % 12 * 100 + currentTime / 100 % 60;
//  intToChar(displayValue, characters, 4);
  
 // intToChar(random(89, 101), characters);
 
// if(currentTime % 250 < 10) {
//   intToChar(random(89, 101), characters);
// }

  if(digitalRead(13)) {
    
    intToChar(random(101, 201), characters);
  }
  
  //dDisplay.clearDisplay();
  dDisplay.setDigit(0, characters[0]);
  dDisplay.setDigit(1, characters[1]);
  dDisplay.setDigit(2, characters[2]);
  dDisplay.setDigit(3, characters[3]);
  
}
