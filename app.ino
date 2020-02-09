int i = 0;

void setup()
{
    pinMode(6, OUTPUT);
}

void loop()
{
    for (i = 255; i >= 0; i -= 1)
    {
        analogWrite(6, i);
        delay(10);
    }
    for (i = 0; i <= 255; i += 1)
    {
        analogWrite(6, i);
        delay(10);
    }
}