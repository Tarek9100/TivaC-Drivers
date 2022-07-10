#ifndef MCU_HW.h
#define MCU_HW.h

#define CORE_PERIPH_BASEADDR 						0xE000E000U
#define APINT 										*((volatile u32*)(OXD0C + CORE_PERIPH_BASEADDR))
#define INTCTRL										*((volatile u32*)(OXD04 + CORE_PERIPH_BASEADDR))































#endif