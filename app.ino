
void setup()
{
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(13, HIGH);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(1000);
    digitalWrite(13, LOW);
    delay(2000);
}
