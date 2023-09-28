#ifndef MAIN_H
#define MAIN_H

/* Binary to unsigned int conversion */
unsigned int binary_to_uint(const char *binary_string);

/* Print binary representation of unsigned long int */
void print_binary(unsigned long int number);

/* Get bit value at index in unsigned long int */
int get_bit(unsigned long int number, unsigned int index);

/* Set bit at index in unsigned long int */
int set_bit(unsigned long int *number, unsigned int index);

/* Clear bit at index in unsigned long int */
int clear_bit(unsigned long int *number, unsigned int index);

/* Calculate differing bits between two unsigned long ints */
unsigned int flip_bits(unsigned long int number1, unsigned long int number2);

/* Convert string to integer */
int _atoi(const char *s);

/* Output character */
int _putchar(char character);

/* Check system endianness */
int get_endianness(void);

#endif

