#define PULSE_PIN 2
#define LED_PIN 7

volatile unsigned long start_time = 0;
volatile unsigned long pulseWidth = 0;
volatile bool ledState = false;

void setup() 
{
    Serial.begin(9600);
    pinMode(PULSE_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    attachInterrupt(digitalPinToInterrupt(PULSE_PIN), rising_edge, RISING);
}

void loop() 
{
    if (pulseWidth > 0) 
    {
        Serial.print("Pulse Width: ");
        Serial.print(pulseWidth);
        Serial.println(" microseconds");
        pulseWidth = 0; // Reset pulse width
    }

    if (ledState) 
    {
        digitalWrite(LED_PIN, HIGH);
        delay(100);
        digitalWrite(LED_PIN, LOW);
        ledState = false; // Reset the flag
    }
}

void rising_edge() 
{
    start_time = micros();
    ledState = true; // Set the flag to turn on the LED
    attachInterrupt(digitalPinToInterrupt(PULSE_PIN), falling_edge, FALLING);
}

void falling_edge() 
{
    pulseWidth = micros() - start_time; // Calculate pulse width
    attachInterrupt(digitalPinToInterrupt(PULSE_PIN), rising_edge, RISING);
}
