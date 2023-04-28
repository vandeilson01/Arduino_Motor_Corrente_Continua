//Ligando o motor pressionando o botão
// Ligar motor no pino 2 em serie com um resistor de 15 ohms
// para limitar a corrente em 40mA para nao sobrecarregar o Arduino
const int motorPin = 2; //pino entrada 2 arduino
const int buttonPin = 7; //pino entrada 7 arduino


const int motorPin2 = 8; //pino entrada 8 arduino
						//do motor 2


int buttonState = 0;//variavel button = 0
int motorState = 0;//variavel motor = 0

int motorState2 = 0;//variavel motor2 = 0
//function evento clink button = entrada
//ação motor girar = rodar
void setup() {
  //entrada button
  pinMode(buttonPin, INPUT);
  //saida motor 1
  pinMode(motorPin, OUTPUT);
  //saida motor 2
  pinMode(motorPin2, OUTPUT);
}

//apertando para funcionar
//funcao princial
void loop() {
  //pegando motor no projeto = variavel
  motorState = digitalRead(motorPin);  
  motorState2 = digitalRead(motorPin2);  
  
  //pegando button no projeto = variavel
  buttonState = digitalRead(buttonPin);
  
  //regra motor ligado
  if (buttonState == HIGH) {
    //laço do delay 1s | button ligado
   while(digitalRead(buttonPin)==HIGH){	delay(100);
                                       
  }
    
  //regra: o motor é igual a desligado
  if (motorState == LOW) {
    
    //desligar motor
    digitalWrite(motorPin, HIGH);
    
     digitalWrite(motorPin2, HIGH);
    
    //caso contratio
  } else {
    
    //motor desligado
    digitalWrite(motorPin, LOW);
    
    //motor desligado
    digitalWrite(motorPin2, LOW);
  }
  }
}
