int Bomba_1 = 8;
int Bomba_2 = 9;
int Bomba_3 = 10;
int Bomba_4 = 11;

int Sensor_1 = A3;
int Sensor_2 = A2;
int Sensor_3 = A1;
int Sensor_4 = A0;

void setup() {
  pinMode(Bomba_1, OUTPUT);
  pinMode(Sensor_1, INPUT);
  
  pinMode(Bomba_2, OUTPUT);
  pinMode(Sensor_2, INPUT);
  
  pinMode(Bomba_3, OUTPUT);
  pinMode(Sensor_3, INPUT);
  
  pinMode(Bomba_4, OUTPUT);
  pinMode(Sensor_4, INPUT);
  Serial.begin(9600);
}

void loop() {
  int almacenador_1 = analogRead(Sensor_1);
  int valor_1 = (almacenador_1 / 10.23); // Valor de humedad
    
  int almacenador_2 = analogRead(Sensor_2);
  int valor_2 = (almacenador_2 / 10.23); // Valor de humedad
  
  int almacenador_3 = analogRead(Sensor_3);
  int valor_3 = (almacenador_3 / 10.23); // Valor de humedad
    
  int almacenador_4 = analogRead(Sensor_4);
  int valor_4 = (almacenador_4 / 10.23); // Valor de humedad
  
  if(valor_1 >= 60){
    digitalWrite(Bomba_1, LOW);
    }
  else if (valor_1 < 60){
    digitalWrite(Bomba_1, HIGH);
  }
  
  if(valor_2 >= 60){
    digitalWrite(Bomba_2, LOW);
    }
  else if (valor_2 < 60){
    digitalWrite(Bomba_2, HIGH);
  }
  
  if(valor_3 >= 60){
    digitalWrite(Bomba_3, LOW);
    }
  else if (valor_3 < 60){
    digitalWrite(Bomba_3, HIGH);
  }

  if(valor_4 >= 60){
    digitalWrite(Bomba_4, LOW);
    }
  else if (valor_4 < 60){
    digitalWrite(Bomba_4, HIGH);
  }
  
  Serial.print("Valor_1: "); 
  Serial.println(valor_1);
  Serial.print("Valor_2: "); 
  Serial.println(valor_2);
  Serial.print("Valor_3: "); 
  Serial.println(valor_3);
  Serial.print("Valor_4: "); 
  Serial.println(valor_4);
  Serial.println("---------------");
  delay(2000);
}