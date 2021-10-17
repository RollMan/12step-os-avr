#include "defines.h"
#include "serial.h"
#include <avr/io.h>

int serial_init(unsigned int baud){
  UBRRH = (unsigned char)(baud >> 8);
  UBRRL = (unsigned char)baud;
  UCSRC = (3<<UCSZ0) | (1<<USBS);
  UCSRB = (1<<RXEN) | (1<<TXEN);
  return 0;
}

int serial_is_send_enable(){
  return UCSRA & (1<<UDRE);
}

int serial_send_byte(unsigned char data){
  while(!(UCSRA & (1<<UDRE)));
  UDR = data;
  return 0;
}

unsigned char USART_Receive(void){
  while(!(UCSRA & (1<<RXC)));
  return UDR;
}
