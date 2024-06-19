const int numRows = 9;
const int numCols = 8;
int rowPins[numRows] = {3, 4, 5, 6, 7, 8, 9, 10, 11};
int colPins[numCols] = {A0, A1, A2, A3, A4, A5, 13, 12};

String letterA_vertical[] = {"00111100", "11000011", "11100111", "10011001", "11011011"};
String letterA_horizontal[] = {"111111000", "000110000", "000000011", "000000100", "000000010"};

String letterB_vertical[] = {"00000011","00000001","00111100","00000001"};
String letterB_horizontal[] = {"100000001","010000010","001101100","000010000"};

String letterC_vertical[] = {"11000000","10000000","00111111"};
String letterC_horizontal[] = {"100000001","01000001","001111100"};

String letterD_vertical[] = {"00000011","00000001","10011100"};
String letterD_horizontal[] = {"100000001","010000010","001111100"};

String letterE_vertical[] = {"00111111","10000000","11000001","00000011"};
String letterE_horizontal[] = {"011111110","100000001","010000010","000110000"};

String letterF_vertical[] = {"00111111", "11000001","11000011","10000000" };
String letterF_horizontal[] = {"111111110", "000000010","000110000","000000001"};

String letterG_vertical[] = {"11000000","11000011","10000001","00111100","11110011","00111111",""};
String letterG_horizontal[] ={"000000001","100000000","010000010","001110000","000110000","000001100",""};

String letterH_vertical[] = {"00111100", "11000011"};
String letterH_horizontal[] = {"111111111", "000110000"};

String letterI_vertical[] = {"10000001", "11100111","00000000"};
String letterI_horizontal[] = {"100000001", "11111111","010000010"};

String letterJ_vertical[] = {"00000000", "11110011", "11000111", "10111111", "00111111"};
String letterJ_horizontal[] = {"000000011", "011111100", "110000000", "010000000", "001000000"};

String letterK_vertical[] = {"00111111","11011111","11101111","11110111","11111011","11111101","11111110"};
String letterK_horizontal[] = {"111111111","000110000","001111000","011001100","110000110","100000011","010000001"};

String letterL_vertical[] = {"00111111","11000000","11000001"};
String letterL_horizontal[] = {"111111111","100000000","010000000"};

String letterM_vertical[] = {""};
String letterM_horizontal[] = {""};

String letterN_vertical[] = {"00111000","00110100","00101100","00011100","00111101"};
String letterN_horizontal[] = {"110000000","001100000","000011000","000000110","000000001"};

String letterO_vertical[] = {"11000011","00111100","10111101"};
String letterO_horizontal[] = {"110000011","001111100","010000010"};

String letterP_vertical[] = {"00111111","10000001","11111100"};
String letterP_horizontal[] = {"111111110","000110011","000011111"};

String letterQ_vertical[] = {"11000011","00111100","10111101","11000010","00111000","00110100"};
String letterQ_horizontal[] = {"110000011","001111100","010000010","100000000","001000000","000100000"};

String letterR_vertical[] = {"01111111","10111111","11011111","11101111","11110011","11111101","11111110"};
String letterR_horizontal[] = {"111111110","111111111","000110011","001110011","010110011","100011110","100001100"};

String letterS_vertical[] = {"10000000","00111111","1000000","00000001","11111100"};
String letterS_horizontal[] = {"000000011","000011110","000110000","110000000","01110000"};

String letterT_vertical[] = {"10000001","00000000", "11100111"};
String letterT_horizontal[] = {"000000001","000000010", "111111111"};

String letterU_vertical[] = {"01111110","10111101","11000011","","","",""};
String letterU_horizontal[] = {"001111111","011111111","110000000","","","","",""};

String letterV_vertical[] = {""};
String letterV_horizontal[] = {""};

String letterW_vertical[] = {"00111100","","","","","",""};
String letterW_horizontal[] = {"111111111","","","","","",""};

String letterX_vertical[] = {"01111110","10111101","11011011","11100111","","",""};
String letterX_horizontal[] = {"110000011","011000110","0011011001","000111000","","",""};

String letterY_vertical[] = {"01111110","10111101","11011011","11100111"};
String letterY_horizontal[] = {"000000011","000000110","000001100","111111000"};

String letterZ_vertical[] = {"01111110","10011111","11001111","11100111", "11110011", "11111001"};
String letterZ_horizontal[] = {"110000011","111000011","110100011","110010011", "110001011", "110000111"};

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
  char name[] = "TUJHE NIRCHI LAGI TOH NEI KYA KARU";
  // char name[]="Z";
  int length = sizeof(name) / sizeof(name[0]) - 1; // Exclude null terminator
  while (true) {
    for (int i = 0; i < length-1; i++) {
      load_first_letter(name[i]);
    }
  }
}

void load_first_letter(char letter) {
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
}

void display_letter()

  unsigned long displayStartTime = millis();
  while (millis() - displayStartTime < 1000) {
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
      delay(2); 
    }
  }
}

