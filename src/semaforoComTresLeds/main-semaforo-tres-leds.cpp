#include <Arduino.h>

#define LED_GREEN 15
#define LED_YELLOW 5
#define LED_RED 23
#define GREEN_TO_YELLOW_TIMER 6000
#define YELLOW_TO_RED_TIMER 2000
#define RED_TO_GREEN_TIMER 8000

void setup()
{
    // put your setup code here, to run once:
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_RED, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_RED, LOW);

    delay(GREEN_TO_YELLOW_TIMER);

    digitalWrite(LED_YELLOW, HIGH);
    digitalWrite(LED_GREEN, LOW);

    delay(YELLOW_TO_RED_TIMER);

    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_YELLOW, LOW);

    delay(RED_TO_GREEN_TIMER);
}
