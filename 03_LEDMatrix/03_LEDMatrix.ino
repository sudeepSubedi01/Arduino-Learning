const int numRows = 8;
const int numCols = 8;
const int hc=2;
int rowPins[numRows] = {4,5,6,7,8, 9, 10, 11}; // Rows are connected to pins 8, 9, 10, 11, 12
int colPins[numCols] = {12,13,A5,A4,A3,A2,A1,A0};    // Columns are connected to pins 3, 4, 5, 6, 7

String letterH_vertical[hc] = {"10011001","10000001"};
String letterH_horizontal[hc] = {"11111111","00011000"};

String letterE_vertical[hc] = {"00111111","00000000"};
String letterE_horizontal[hc] = {"11111111","11011011"};

String letterC_vertical[hc] = {"00000000", "00111111"};
String letterC_horizontal[hc] = {"11000011", "11111111"};
void setup() {
  Serial.begin(9600);
  for (int i = 0; i < numRows; i++) {
    pinMode(rowPins[i], OUTPUT);
  }
  for (int j = 0; j < numCols; j++) {
    pinMode(colPins[j], OUTPUT);
  }
}

void loop() {
  while (true) {
    //displayLetterH();
    //delay(1000);
    //displayLetterE();
    //delay(1000);
    displayLetterC();
  }
}

void displayLetterE() {
  for (int i = 0; i < hc; i++) {
    for (int j = 0; j < numCols; j++) {
      if (letterE_vertical[i].charAt(j) == '0') {
        digitalWrite(colPins[j], LOW);
      } else {
        digitalWrite(colPins[j], HIGH);
      }
      if (letterE_horizontal[i].charAt(j) == '1') {
        digitalWrite(rowPins[j], HIGH);
      } else {
        digitalWrite(rowPins[j], LOW); 
      }
    }
    delay(2); 
  }
}
void displayLetterH() {
  for (int i = 0; i < hc; i++) {
    for (int j = 0; j < numCols; j++) {
      if (letterH_vertical[i].charAt(j) == '0') {
        digitalWrite(colPins[j], LOW);
      } else {
        digitalWrite(colPins[j], HIGH);
      }
      if (letterH_horizontal[i].charAt(j) == '1') {
        digitalWrite(rowPins[j], HIGH);
      } else {
        digitalWrite(rowPins[j], LOW); 
      }
    }
    delay(2); 
  }
}
void displayLetterC(){
  for(int i=0; i<hc ;i++){
    for (int j=0; j<numCols ; j++){
      if(letterC_vertical[i].charAt(j) == '0'){
        digitalWrite(colPins[j], LOW);
      }
      else{
        digitalWrite(colPins[j],HIGH);
      }
      if(letterC_horizontal[i].charAt(j) == '0'){
        digitalWrite(rowPins[j], LOW);
      }
      else{
        digitalWrite(rowPins[j], HIGH);
      }
    }
    delay(2);
  }
}