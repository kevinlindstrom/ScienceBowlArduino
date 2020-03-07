int pwm = 3;	//initializing pin 2 as pwm
//const int in_1 = 8 ;
//const int in_2 = 9 ;
int Led = 13;

//For providing logic to L298 IC to choose the direction of the DC motor 

void setup()
{
pinMode(pwm,OUTPUT);  	//we have to set PWM pin as output
pinMode(Led, OUTPUT);
//pinMode(in_1,OUTPUT); 	//Logic pins are also set as output
//pinMode(in_2,OUTPUT);
}

void loop()
{
analogWrite(pwm,255);
digitalWrite(Led, HIGH);
delay(3000); 		
digitalWrite(Led, LOW);
analogWrite(pwm, 0);
delay(2000);
}
