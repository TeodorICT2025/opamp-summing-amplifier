int read_pot1=A0;
int read_pot2=A1;
int read_pot3=A2;
int read_output=A3;
int pot1=7;
int pot2=8;
int pot_amplifier=4;
void setup() {
  Serial.begin(9600);
  pinMode(pot1, OUTPUT);
  pinMode(pot2, OUTPUT);
  pinMode(pot_amplifier, OUTPUT);
  digitalWrite(pot1, HIGH);
  digitalWrite(pot2, HIGH);
  digitalWrite(pot_amplifier, OUTPUT);

}

void loop() {
  int x1=analogRead(read_pot1);
  float v1=float(x1) * (5.0/1023.0);
  int x2=analogRead(read_pot2);
  float v2=float(x2) * (5.0/1023.0);
  int x3=analogRead(read_pot3);
  float v3=float(x3) * (5.0/1023.0);
  Serial.print("V1 = ");
  Serial.print(v1);
  Serial.print(" ,  V2 = ");
  Serial.print(v2);
  Serial.print(" , Vamp = ");
  Serial.print(v3);
  Serial.print(" , Vout =  ");
  int read_out = analogRead(read_output);
  float v_out=read_out * (5.0/1023.0);
  Serial.println(v_out);

  delay(100);
}
