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

String letterF_vertical[hc] = {"10000001","10011111"};
String letterF_horizontal[hc] = {"00011011","11111111"};

String letterI_vertical[hc] = {"10000001","11100111"};
String letterI_horizontal[hc] = {"11000011","11111111"};

String letterL_vertical[hc] = {"11000011","11001111"};
String letterL_horizontal[hc] = {"11000000","11111111"};

String letterT_vertical[hc] = {"10000001","11100111"};
String letterT_horizontal[hc] = {"00000011","11111111"};

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
  int i;
  while (true) {
    //displayLetterC();
    //delay(2000);
    //for(i=4;i<=19;i++){ digitalWrite(i,HIGH);}
    //displayLetterH();
    //delay(2000);
    //for(i=4;i<=19;i++){ digitalWrite(i,LOW);}
    //displayLetterE();
    //delay(2000);
    //for(i=4;i<=19;i++){ digitalWrite(i,LOW);}
    //displayLetterF();
    //displayLetterI();
    //displayLetterL();
    displayLetterT();
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
void displayLetterF() {
  for (int i = 0; i < hc; i++) {
    for (int j = 0; j < numCols; j++) {
      if (letterF_vertical[i].charAt(j) == '0') {
        digitalWrite(colPins[j], LOW);
      } else {
        digitalWrite(colPins[j], HIGH);
      }
      if (letterF_horizontal[i].charAt(j) == '1') {
        digitalWrite(rowPins[j], HIGH);
      } else {
        digitalWrite(rowPins[j], LOW); 
      }
    }
    delay(2); 
  }
}
void displayLetterI(){
  for(int i=0; i<hc ;i++){
    for (int j=0; j<numCols ; j++){
      if(letterI_vertical[i].charAt(j) == '0'){
        digitalWrite(colPins[j], LOW);
      }
      else{
        digitalWrite(colPins[j],HIGH);
      }
      if(letterI_horizontal[i].charAt(j) == '0'){
        digitalWrite(rowPins[j], LOW);
      }
      else{
        digitalWrite(rowPins[j], HIGH);
      }
    }
    delay(2);
  }
}
void displayLetterL(){
  for(int i=0; i<hc ;i++){
    for (int j=0; j<numCols ; j++){
      if(letterL_vertical[i].charAt(j) == '0'){
        digitalWrite(colPins[j], LOW);
      }
      else{
        digitalWrite(colPins[j],HIGH);
      }
      if(letterL_horizontal[i].charAt(j) == '0'){
        digitalWrite(rowPins[j], LOW);
      }
      else{
        digitalWrite(rowPins[j], HIGH);
      }
    }
    delay(2);
  }
}
void displayLetterT(){
  for(int i=0; i<hc ;i++){
    for (int j=0; j<numCols ; j++){
      if(letterT_vertical[i].charAt(j) == '0'){
        digitalWrite(colPins[j], LOW);
      }
      else{
        digitalWrite(colPins[j],HIGH);
      }
      if(letterT_horizontal[i].charAt(j) == '0'){
        digitalWrite(rowPins[j], LOW);
      }
      else{
        digitalWrite(rowPins[j], HIGH);
      }
    }
    delay(2);
  }
}