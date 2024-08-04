#define IR A1
#define IR2 A2
#define IR3 A3
#define IR4 A4
#define IR5 A5
int ir1;
int ir2;
int ir3;
int ir4;
int ir5;

void setup() {
  Serial.begin(9600);
  pinMode(IR, INPUT_PULLUP);
  pinMode(IR2, INPUT_PULLUP);
pinMode(IR3, INPUT_PULLUP);
  pinMode(IR4, INPUT_PULLUP);
 pinMode(IR5, INPUT_PULLUP);
}

void loop() {
  ir1 = analogRead(IR);
  ir2 = analogRead(IR2);
  ir3 = analogRead(IR3);
  ir4 = analogRead(IR4);
  ir5 = analogRead(IR5);

  Serial.print(ir1);
  Serial.print("\t");
  Serial.print(ir2);
  Serial.print("\t");
  Serial.print(ir3);
  Serial.print("\t");
  Serial.print(ir4);
  Serial.print("\t");
  Serial.print(ir5);
  Serial.print("\n");

  delay(100);
}
