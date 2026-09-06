/* Adapter from Micron's (format, argument array) convention to C's
 * stdio. General over any format string composed of the supported
 * specifiers; no varargs are constructed at run time, each specifier
 * dispatches to a fixed-arity call. */
#include <stdio.h>
#include <stdint.h>

// tag::adapter[]
void format(const char* fmt, void** args)
{
    int a = 0;
    while (*fmt) {
        if (*fmt == '%') {
            switch (*++fmt) {
            case 'd': printf("%d", *(int32_t*)args[a++]); break;
            case 's': fputs((const char*)args[a++], stdout); break;
            case 'c': putchar(*(char*)args[a++]); break;
            case '%': putchar('%'); break;
            /* ... further specifiers follow the same pattern ... */
            }
        } else
            putchar(*fmt);
        fmt++;
    }
}
// end::adapter[]

int main(void)
{
    int32_t n = 42; char c = 'x';
    void* args[] = { "world", &n, &c };
    format("hello %s: n = %d, c = %c (100%%)\n", args);
    return 0;
}
