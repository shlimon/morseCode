

const int LED = D7;
const int GAP=500;
const int CHAR_GAP = 1500;
const int DIT = 1000;
const int DAH = 2000;

void setup() 
{
  pinMode(LED, OUTPUT);
}



void morseCode(char name[])
{
    for(int i = 0; i < strlen(name); i++ )
    {
        switch(name[i])
        {
            case 'a':
            	digitalWrite(LED, HIGH);
            	delay(DIT);
            	digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'b':
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'c':
		        digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'd':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'e':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'f':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'g':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'h':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'i':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'j':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'k':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'l':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'm':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'n':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'o':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'p':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'q':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'r':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 's':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 't':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'u':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'v':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'w':
        		digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'x':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'y':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            case 'z':
        		digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DAH);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(GAP);
                digitalWrite(LED, HIGH);
                delay(DIT);
                digitalWrite(LED, LOW);
                delay(CHAR_GAP);
                break;
            
        }
    }
}


void loop() 
{
    morseCode("shakwat");
    

}