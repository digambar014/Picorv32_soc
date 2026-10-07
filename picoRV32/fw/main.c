#define REG(addr)     (*(volatile unsigned int *)(addr))

#define UART_TX       REG(0x10000000UL)
#define UART_RX       REG(0x10000004UL)
#define UART_STATUS   REG(0x10000008UL)

#define TX_READY      (1u << 0)
#define RX_VALID      (1u << 1)

static void uart_putc(char c)
{
    while (!(UART_STATUS & TX_READY))
        ;
    UART_TX = (unsigned int)(unsigned char)c;
}

static void uart_puts(const char *s)
{
    while (*s)
        uart_putc(*s++);
}

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
        uart_puts("Hello Deepak from Nielit!\n");

    return 0;
}

