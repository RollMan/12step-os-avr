#include "defines.h"
#include "serial.h"
#include "lib.h"
#include <avr/io.h>

int main(void)
{
  serial_init(0);
  puts("Hello World!\n");
  while(1);
  return 0;
}
