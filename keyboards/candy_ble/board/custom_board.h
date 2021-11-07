#ifndef CUSTOM_BOARD_H
#define CUSTOM_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#define GPIO(port, pin) ((port << 6) | pin)


/*
#ifdef FLIPPED_NRFMICRO //flipped nRFMicro 0.03 (jumpers on the on/off switch side)

#define PIN20 GPIO(0,15)
#define PIN19 GPIO(0,17)
#define PIN18 GPIO(0,20)
#define PIN17 GPIO(0,13)
#define PIN16 GPIO(0,24)
#define PIN15 GPIO(0,9)
#define PIN14 GPIO(0,10)
#define PIN13 GPIO(1,6)

#define PIN12 GPIO(1,11)
#define PIN11 GPIO(0,28)
#define PIN10 GPIO(0,3)
#define PIN9 GPIO(1,13)
#define PIN8 GPIO(0,2)
#define PIN7 GPIO(0,29)
#define PIN6 GPIO(0,31)
#define PIN5 GPIO(0,30)

#else // regular nRFMicro 0.03 (jumpers on the USB connector side)
*/

#define PIN_1 GPIO(0,24)
#define PIN_2 GPIO(0,13)
#define PIN_3 GPIO(1,6)
#define PIN_4 GPIO(1,4)

#define PIN_5 GPIO(0,10)
#define PIN_6 GPIO(0,12)
#define PIN_7 GPIO(0,22)
#define PIN_8 GPIO(0,20)
#define PIN_9 GPIO(0,17)
#define PIN_10 GPIO(0,15)

#define PIN_11 GPIO(1,11)
#define PIN_12 GPIO(0,5)
#define PIN_13 GPIO(0,3)
#define PIN_14 GPIO(0,28)
#define PIN_15 GPIO(1,13)
#define PIN_16 GPIO(0,2)
#define PIN_17 GPIO(0,29)
#define PIN_18 GPIO(0,31)
#define PIN_19 GPIO(0,30)

#define PIN_20 GPIO(0,0)
#define PIN_21 GPIO(0,6)

#define PIN_22 GPIO(0,8)
#define PIN_23 GPIO(1,9)

#define PIN23 GPIO(0,4)	//analog batter
#define PIN16 GPIO(0,1)
// #endif
//un used pins 001
#define LED_PIN GPIO(1,10)
#define RESET_PIN GPIO(0,18)
#define SWO_PIN GPIO(1,0)
#define DFU_PIN GPIO(1,2)
#define SWITCH_PIN GPIO(0,26)
#define BOOT GPIO(0,7)
// #define POWER_PIN GPIO(1,9)
#define POWER_PIN BOOT

// i2c pins
#define CONFIG_PIN_SDA PIN_21
#define CONFIG_PIN_SCL PIN_23

//#define NRF_LOG_ENABLED 0
//#define NRF_LOG_BACKEND_SERIAL_USES_UART 0
//#define NRF_LOG_BACKEND_SERIAL_UART_TX_PIN 5
#define NRF_LOG_BACKEND_UART_TX_PIN 1
//#define DEBUG
// Low frequency clock source to be used by the SoftDevice
#ifdef S210
// #define NRF_CLOCK_LFCLKSRC      NRF_CLOCK_LFCLKSRC_XTAL_20_PPM
#else

// NRF_CLOCK_LF_SRC_RC - internal oscillator
// NRF_CLOCK_LF_SRC_XTAL - external crystal
// using E73 internal oscillator (assume there's no external crystal soldered)
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_RC,            \
                                 .rc_ctiv       = 16,                                \
                                 .rc_temp_ctiv  = 2,                                \
                                 .xtal_accuracy = 0}

#endif


#ifdef __cplusplus
}
#endif

#endif // CUSTOM_BOARD_H
