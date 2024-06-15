const int numRows = 9;
const int numCols = 8;
int rowPins[numRows] = {3, 4, 5, 6, 7, 8, 9, 10, 11};
int colPins[numCols] = {A0, A1, A2, A3, A4, A5, 13, 12};

String letterA_vertical[] = {"00111100", "11000011", "11100111", "10011001", "11011011"};
String letterA_horizontal[] = {"111111000", "000110000", "000000011", "000000100", "000000010"};

String letterB_vertical[] = {""};
String letterB_horizontal[] = {""};

String letterC_vertical[] = {"00000000", "00111111"};
String letterC_horizontal[] = {"110000011", "111111111"};

String letterD_vertical[] = {""};
String letterD_horizontal[] = {""};

String letterE_vertical[] = {"00111111", "00000000"};
String letterE_horizontal[] = {"11111111", "11011011"};

String letterF_vertical[] = {"10000001", "10011111"};
String letterF_horizontal[] = {"00011011", "11111111"};

String letterG_vertical[] = {""};
String letterG_horizontal[] = {""};

String letterH_vertical[] = {"10011001", "10000001"};
String letterH_horizontal[] = {"11111111", "00011000"};

String letterI_vertical[] = {"10000001", "11100111"};
String letterI_horizontal[] = {"11000011", "11111111"};

String letterJ_vertical[] = {""};
String letterJ_horizontal[] = {""};

String letterK_vertical[] = {""};
String letterK_horizontal[] = {""};

String letterL_vertical[] = {"11000011", "11001111"};
String letterL_horizontal[] = {"11000000", "11111111"};

String letterM_vertical[] = {""};
String letterM_horizontal[] = {""};

String letterN_vertical[] = {""};
String letterN_horizontal[] = {""};

String letterO_vertical[] = {""};
String letterO_horizontal[] = {""};

String letterP_vertical[] = {""};
String letterP_horizontal[] = {""};

String letterQ_vertical[] = {""};
String letterQ_horizontal[] = {""};

String letterR_vertical[] = {""};
String letterR_horizontal[] = {""};

String letterS_vertical[] = {""};
String letterS_horizontal[] = {""};

String letterT_vertical[] = {"10000001", "11100111"};
String letterT_horizontal[] = {"00000011", "11111111"};

String letterU_vertical[] = {""};
String letterU_horizontal[] = {""};

String letterV_vertical[] = {""};
String letterV_horizontal[] = {""};

String letterW_vertical[] = {""};
String letterW_horizontal[] = {""};

String letterX_vertical[] = {""};
String letterX_horizontal[] = {""};

String letterY_vertical[] = {""};
String letterY_horizontal[] = {""};

String letterZ_vertical[] = {"00000000", "10011111", "11001111", "11100111", "11110011", "111110011"};
String letterZ_horizontal[] = {"110000011", "00100000", "00010000", "00001000", "00000100", "000000100"};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < numRows; i++) {
    pinMode(rowPins[i], OUTPUT);
  }
  for (int j = 0; j < numCols; j++) {
    pinMode(colPins[j], OUTPUT);
  }
  Serial.println("Enter a string (A-Z):");
}

void loop() {
  char name[] = "A";
  int length = sizeof(name) / sizeof(name[0]) - 1; // Exclude null terminator
  while (true) {
    for (int i = 0; i < length; i++) {
      displayLetter(name[i]);
    }
  }
}

void displayLetter(char letter) {
  String *verticalArray;
  String *horizontalArray;
  int arrayLen;

  switch (letter) {
    case 'A':
      verticalArray = letterA_vertical;
      horizontalArray = letterA_horizontal;
      arrayLen = sizeof(letterA_vertical) / sizeof(letterA_vertical[0]);
      break;
    case 'B':
      verticalArray = letterB_vertical;
      horizontalArray = letterB_horizontal;
      arrayLen = sizeof(letterB_vertical) / sizeof(letterB_vertical[0]);
      break;
    case 'C':
      verticalArray = letterC_vertical;
      horizontalArray = letterC_horizontal;
      arrayLen = sizeof(letterC_vertical) / sizeof(letterC_vertical[0]);
      break;
    case 'D':
      verticalArray = letterD_vertical;
      horizontalArray = letterD_horizontal;
      arrayLen = sizeof(letterD_vertical) / sizeof(letterD_vertical[0]);
      break;
    case 'E':
      verticalArray = letterE_vertical;
      horizontalArray = letterE_horizontal;
      arrayLen = sizeof(letterE_vertical) / sizeof(letterE_vertical[0]);
      break;
    case 'F':
      verticalArray = letterF_vertical;
      horizontalArray = letterF_horizontal;
      arrayLen = sizeof(letterF_vertical) / sizeof(letterF_vertical[0]);
      break;
    case 'G':
      verticalArray = letterG_vertical;
      horizontalArray = letterG_horizontal;
      arrayLen = sizeof(letterG_vertical) / sizeof(letterG_vertical[0]);
      break;
    case 'H':
      verticalArray = letterH_vertical;
      horizontalArray = letterH_horizontal;
      arrayLen = sizeof(letterH_vertical) / sizeof(letterH_vertical[0]);
      break;
    case 'I':
      verticalArray = letterI_vertical;
      horizontalArray = letterI_horizontal;
      arrayLen = sizeof(letterI_vertical) / sizeof(letterI_vertical[0]);
      break;
    case 'J':
      verticalArray = letterJ_vertical;
      horizontalArray = letterJ_horizontal;
      arrayLen = sizeof(letterJ_vertical) / sizeof(letterJ_vertical[0]);
      break;
    case 'K':
      verticalArray = letterK_vertical;
      horizontalArray = letterK_horizontal;
      arrayLen = sizeof(letterK_vertical) / sizeof(letterK_vertical[0]);
      break;
    case 'L':
      verticalArray = letterL_vertical;
      horizontalArray = letterL_horizontal;
      arrayLen = sizeof(letterL_vertical) / sizeof(letterL_vertical[0]);
      break;
    case 'M':
      verticalArray = letterM_vertical;
      horizontalArray = letterM_horizontal;
      arrayLen = sizeof(letterM_vertical) / sizeof(letterM_vertical[0]);
      break;
    case 'N':
      verticalArray = letterN_vertical;
      horizontalArray = letterN_horizontal;
      arrayLen = sizeof(letterN_vertical) / sizeof(letterN_vertical[0]);
      break;
    case 'O':
      verticalArray = letterO_vertical;
      horizontalArray = letterO_horizontal;
      arrayLen = sizeof(letterO_vertical) / sizeof(letterO_vertical[0]);
      break;
    case 'P':
      verticalArray = letterP_vertical;
      horizontalArray = letterP_horizontal;
      arrayLen = sizeof(letterP_vertical) / sizeof(letterP_vertical[0]);
      break;
    case 'Q':
      verticalArray = letterQ_vertical;
      horizontalArray = letterQ_horizontal;
      arrayLen = sizeof(letterQ_vertical) / sizeof(letterQ_vertical[0]);
      break;
    case 'R':
      verticalArray = letterR_vertical;
      horizontalArray = letterR_horizontal;
      arrayLen = sizeof(letterR_vertical) / sizeof(letterR_vertical[0]);
      break;
    case 'S':
      verticalArray = letterS_vertical;
      horizontalArray = letterS_horizontal;
      arrayLen = sizeof(letterS_vertical) / sizeof(letterS_vertical[0]);
      break;
    case 'T':
      verticalArray = letterT_vertical;
      horizontalArray = letterT_horizontal;
      arrayLen = sizeof(letterT_vertical) / sizeof(letterT_vertical[0]);
      break;
    case 'U':
      verticalArray = letterU_vertical;
      horizontalArray = letterU_horizontal;
      arrayLen = sizeof(letterU_vertical) / sizeof(letterU_vertical[0]);
      break;
    case 'V':
      verticalArray = letterV_vertical;
      horizontalArray = letterV_horizontal;
      arrayLen = sizeof(letterV_vertical) / sizeof(letterV_vertical[0]);
      break;
    case 'W':
      verticalArray = letterW_vertical;
      horizontalArray = letterW_horizontal;
      arrayLen = sizeof(letterW_vertical) / sizeof(letterW_vertical[0]);
      break;
    case 'X':
      verticalArray = letterX_vertical;
      horizontalArray = letterX_horizontal;
      arrayLen = sizeof(letterX_vertical) / sizeof(letterX_vertical[0]);
      break;
    case 'Y':
      verticalArray = letterY_vertical;
      horizontalArray = letterY_horizontal;
      arrayLen = sizeof(letterY_vertical) / sizeof(letterY_vertical[0]);
      break;
    case 'Z':
      verticalArray = letterZ_vertical;
      horizontalArray = letterZ_horizontal;
      arrayLen = sizeof(letterZ_vertical) / sizeof(letterZ_vertical[0]);
      break;
    default:
      return;
  }

  unsigned long displayStartTime = millis();
  while (millis() - displayStartTime < 1000) {  // Refresh for 1 second
    for (int i = 0; i < arrayLen; i++) {
      for (int j = 0; j < numRows; j++) {
        if (verticalArray[i].charAt(j) == '0') {
          digitalWrite(colPins[j], LOW);
        } else {
          digitalWrite(colPins[j], HIGH);
        }
        if (horizontalArray[i].charAt(j) == '1') {
          digitalWrite(rowPins[j], HIGH);
        } else {
          digitalWrite(rowPins[j], LOW);
        }
      }
      delay(2);  // Brief delay to allow the display to update
    }
  }
}
