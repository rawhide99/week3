#include <avr/io.h>
#include <avr/interrupt.h>
#define LED_PIN 7

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  self_delay(); // Function only for 500ms
}

void loop()
{
  
}

void self_delay()
{
  TCCR1A = 0;
  TCCR1B = 0;
  TCCR1B |= (1 << WGM12);
  TCCR1B |= (1 << CS12) | (1 << CS10); // Set prescaler to 1024
  OCR1A = 7812;                       // Calculation is done like (500 * 10^-3 = ((1024 * tick_counts)/16 * 10^6)) --> Configured as 500ms
  TIMSK1 |= (1 << OCIE1A);           // Enable Timer 1 Compare Match A interrupt
  sei();                            // Enable global interrupts
}

ISR(TIMER1_COMPA_vect) 
{
  static bool led_state = LOW;
  led_state = !led_state;
  digitalWrite(LED_PIN, led_state);
}
