//global functions list

void enter();





void setup ()
{
    Serial.begin(baudrate);
Wire.begin(device_address);
printdebug();

scan();

Serial.print(F("\nI2C Scanner"));
}