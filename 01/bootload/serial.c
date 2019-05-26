#include "defines.h"
#include "serial.h"
#include <avr/io.h>

int serial_init(unsigned int baud){
  UCSR0B = (1<<RXEN0) | (1<<TXEN0);
  UCSR0C = (3<<UCSZ00);
  UBRR0H = (unsigned char)(baud >> 8);
  UBRR0L = (unsigned char)baud;
  return 0;
}

int serial_is_send_enable(){
  return UCSR0A & (1<<UDRE0);
}

int serial_send_byte(unsigned char data){
  while(!(UCSR0A & (1<<UDRE0)));
  UDR0 = data;
  return 0;
}

unsigned char USART_Receive(void){
  while(!(UCSR0A & (1<<RXC0)));
  return UDR0;
}
