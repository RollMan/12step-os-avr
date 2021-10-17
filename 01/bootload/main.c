#include "defines.h"
#include "serial.h"
#include "lib.h"
#include <avr/io.h>

int main(void)
{
  serial_init(51);
  puts((unsigned char *)"Hello World!\n");
  while(1);
  return 0;
}
