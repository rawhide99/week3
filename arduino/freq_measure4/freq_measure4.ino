#include <TimerOne.h>
#define MS 1000000

#define SIGNAL_PIN 2  // Only arduino PINS 2 and 3 are capable of external Interrupts
#define LED_PIN 7

volatile unsigned long edge_count = 0;
volatile int measuring = 0; 

void setup() 
{
    Serial.begin(9600);
    pinMode(SIGNAL_PIN, INPUT_PULLUP);
    pinMode(LED_PIN, OUTPUT);

    Timer1.initialize(MS);
    Timer1.attachInterrupt(timerISR);

    attachInterrupt(digitalPinToInterrupt(SIGNAL_PIN), countEdges, RISING);
}

void loop() 
{
    if (measuring) 
    {
        digitalWrite(LED_PIN, HIGH);
    } 
    else 
    {
        digitalWrite(LED_PIN, LOW);
    }
}

void timerISR() 
{
    // Frequency calculation logic
    float frequency = edge_count; // Get the current count of edges
    edge_count = 0;                // Reset the count

    // Print frequency
    Serial.print("Frequency: ");
    Serial.print(frequency);
    Serial.println(" Hz");

    // Turn off measuring state
    measuring = false;
}

void countEdges() 
{
    edge_count++; // Increment edge count
    measuring = true; // Set measuring to true when counting edges
}

