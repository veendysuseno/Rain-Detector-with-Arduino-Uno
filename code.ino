/* Program Detektor Hujan */

const int pinBuzzer = 7;
int pinSensor = A1;
int batasNilai = 500;

void setup() {
    Serial.begin(9600);
    pinMode(pinBuzzer, OUTPUT);
}
void loop() {
    int nilai = analogRead(pinSensor);
    Serial.print(nilai);
    if (nilai < batasNilai) {
    digitalWrite(pinBuzzer, HIGH);
    }
    else {
    digitalWrite(pinBuzzer, LOW);
    }
    delay(500);
}