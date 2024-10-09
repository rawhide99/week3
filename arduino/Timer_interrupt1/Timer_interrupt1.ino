// CS1 - clock select bits for timer 1
// TCCR1A-Timer/Counter Control Register A for timer 1
// TCCR1B-Timer/Counter Control Register B for timer 1
// OCR1A- Output Control Register A for timer 1
// TIMSK1- Timer/Counter Interrupt Mask Register for timer 1

#include <avr/io.h>
#include <avr/interrupt.h>

#define LED_PIN 7  // Define the pin for the LED

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  // Configure Timer 1
  TCCR1A = 0;                             // Normal operation
  TCCR1B = 0;                            // Clear control register
  TCCR1B |= (1 << WGM12);               // Set CTC mode
  TCCR1B |= (1 << CS12) | (1 << CS10); // Set prescaler to 1024
  OCR1A = 15624;                      // Set compare match value for 1 second (16MHz / 1024 - 1)
  TIMSK1 |= (1 << OCIE1A);           // Enable Timer 1 Compare A Match interrupt
  sei();                            // Enable global interrupts
}

// Timer 1 Compare A Match interrupt service routine
ISR(TIMER1_COMPA_vect) 
{
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
}
