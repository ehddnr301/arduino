
void setup()
{
    Serial.begin(9600);

    pinMode(6, INPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    if (digitalRead(6) == HIGH)
    {
        digitalWrite(12, HIGH);
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);
    }
    delay(10);
}