#ifndef _SERIAL_H_
#define _SERIAL_H_

int serial_init(unsigned int baud);
int serial_is_send_enable(void);
int serial_send_byte(unsigned char data);

#endif // _SERIAL_H_
