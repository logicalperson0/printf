#include <unistd.h>

/**
 * _write - write a buffer to stdout
 * @buffer: buffer to be written
 * @size: size of the buffer
 *
 * Return: number of bytes written
 */

int _write(char *buffer, int size)
{
    int bytes_written = 0;

    bytes_written = write (1, buffer, size);
    return (bytes_written);
}
