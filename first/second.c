#include <stdint.h>

// Register addresses
#define RCC_BASE 0x40021000
#define GPIOC_BASE 0x40011000

#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE + 0x18)
#define GPIOC_CRH *(volatile uint32_t *)(GPIOC_BASE + 0x04)
#define GPIOC_ODR *(volatile uint32_t *)(GPIOC_BASE + 0x0C)

// Bit fields
#define RCC_IOPCEN (1 << 4)
#define GPIOC13 (1UL << 13)

void delay(volatile uint32_t count) {
    while (count--) {
        // Just decrement the counter
    }
}

int main(void) {
    // Enable clock for GPIOC
    RCC_APB2ENR |= RCC_IOPCEN;

    // Configure PC13 as output push-pull
    GPIOC_CRH &= 0xFF0FFFFF;
    GPIOC_CRH |= 0x00200000;

    while (1) {
        // Set PC13 (turn LED on)
        GPIOC_ODR &= ~GPIOC13; // Note: LED on the Blue Pill is active low
        delay(500000);

        // Reset PC13 (turn LED off)
        GPIOC_ODR |= GPIOC13; // LED off
        delay(500000);
    }
}
