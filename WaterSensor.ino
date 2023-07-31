void setup()
{
    pinMode(A0, INPUT);
}

void loop()
{
    int value=analogRead(A0);
    Serial.println(value);
}

