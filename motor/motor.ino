int pwm = A2;	//initializing pin 2 as pwm
//const int in_1 = 8 ;
//const int in_2 = 9 ;

//For providing logic to L298 IC to choose the direction of the DC motor 

void setup()
{
pinMode(pwm,OUTPUT);  	//we have to set PWM pin as output
//pinMode(in_1,OUTPUT); 	//Logic pins are also set as output
//pinMode(in_2,OUTPUT);
}

void loop()
{
//For Clock wise motion , in_1 = High , in_2 = Low
analogWrite(pwm,255);

//Clockwise for 3 secs
delay(3000); 		

//For brake
analogWrite(pwm, 0);
delay(1000);
}
