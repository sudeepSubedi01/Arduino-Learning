// B = 3e42423e3e42423e
// O = 3c7ee7c3c3e77e3c
// Z = fffe0c183060ffff

const int numRows = 8;
const int numCols = 8;
int rowPins[numRows] = {4,5,6,7,8, 9, 10, 11}; 
int colPins[numCols] = {12,13,A5,A4,A3,A2,A1,A0};

String letterA_vertical[5] = {"00111100","11000011","11100111","10011001","11011011"};
String letterA_horizontal[5] = {"11111000","00110000","00000011","00000100","00000010"};

String letterH_vertical[2] = {"10011001","10000001"};
String letterH_horizontal[2] = {"11111111","00011000"};

String letterE_vertical[2] = {"00111111","00000000"};
String letterE_horizontal[2] = {"11111111","11011011"};

String letterC_vertical[2] = {"00000000", "00111111"};
String letterC_horizontal[2] = {"11000011", "11111111"};

String letterF_vertical[2] = {"10000001","10011111"};
String letterF_horizontal[2] = {"00011011","11111111"};

String letterI_vertical[2] = {"10000001","11100111"};
String letterI_horizontal[2] = {"11000011","11111111"};

String letterL_vertical[2] = {"11000011","11001111"};
String letterL_horizontal[2] = {"11000000","11111111"};

String letterT_vertical[2] = {"10000001","11100111"};
String letterT_horizontal[2] = {"00000011","11111111"};

String letterZ_vertical[5] = {"00000000","10011111","11001111","11100111","11110011"};
String letterZ_horizontal[5] = {"11000011","00100000","00010000","00001000","00000100"};

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
    //displayLetterA();
    displayLetterC();
    //delay(2000);
    //for(i=4;i<=19;i++){ digitalWrite(i,LOW);}
    //displayLetterH();
    //delay(2000);
    //for(i=4;i<=19;i++){ digitalWrite(i,LOW);}
    //displayLetterE();
    //delay(2000);
    //for(i=4;i<=19;i++){ digitalWrite(i,LOW);}
    //displayLetterF();
    //displayLetterI();
    //displayLetterL();
    //displayLetterT();
    //displayLetterZ();
  }
}

void displayLetterA() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < numCols; j++) {
      if (letterA_vertical[i].charAt(j) == '0') {
        digitalWrite(colPins[j], LOW);
      } else {
        digitalWrite(colPins[j], HIGH);
      }
      if (letterA_horizontal[i].charAt(j) == '1') {
        digitalWrite(rowPins[j], HIGH);
      } else {
        digitalWrite(rowPins[j], LOW); 
      }
    }
    delay(2); 
  }
}

void displayLetterE() {
  for (int i = 0; i < 2; i++) {
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
  for (int i = 0; i < 2; i++) {
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
  for(int i=0; i<2 ;i++){
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
  for (int i = 0; i < 2; i++) {
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
  for(int i=0; i<2 ;i++){
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
  for(int i=0; i<2 ;i++){
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
  for(int i=0; i<2 ;i++){
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
  void displayLetterZ(){
  for(int i=0; i<5 ;i++){
    for (int j=0; j<numCols ; j++){
      if(letterZ_vertical[i].charAt(j) == '0'){
        digitalWrite(colPins[j], LOW);
      }
      else{
        digitalWrite(colPins[j],HIGH);
      }
      if(letterZ_horizontal[i].charAt(j) == '0'){
        digitalWrite(rowPins[j], LOW);
      }
      else{
        digitalWrite(rowPins[j], HIGH);
      }
    }
    delay(2);
  }
}