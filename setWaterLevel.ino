void setup()
{
    pinMode(A0, INPUT);
    Serial.begin(9600);
}
void loop()
{
    float value=analogRead(A0);
    Serial.println(value);
    float endValue=1025;
    if (value>= 0 && value<=200)
    {
        Serial.println("Yellow");
    }
    else if (value>= 201 && value<=900)
    {
        Serial.println("Green");
    }
    else
     {
        Serial.println("Red");
     }
    delay(100);
}
