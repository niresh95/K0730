
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int status=0;
int buzzer=2;
int knopPin=7;
int nieuweKnop;
int oudeKnop=1;

int status2=0;
int buzzer2=5;
int knopPin2=6;
int nieuweKnop2;
int oudeKnop2=1;



void setup()
{
	Serial.begin(9600);
	pinMode(buzzer, OUTPUT);
	pinMode(knopPin, INPUT);
	pinMode(buzzer2, OUTPUT);
	pinMode(knopPin2, INPUT);
}

void loop()
{
	nieuweKnop=digitalRead(knopPin);
	nieuweKnop2=digitalRead(knopPin2);
	
	if(oudeKnop==0 && nieuweKnop==1){
		if(status==0){
			tone(buzzer,1000);
			status=1;
		} else {
			noTone(buzzer);
			status=0;
		}
	}
	if(oudeKnop2==0 && nieuweKnop2==1){
		if(status2==0){
			tone(buzzer2,1000);
			status2=1;
		} else {
			noTone(buzzer2);
			status2=0;
		}
	}
	oudeKnop=nieuweKnop;
	oudeKnop2=nieuweKnop2;
}
