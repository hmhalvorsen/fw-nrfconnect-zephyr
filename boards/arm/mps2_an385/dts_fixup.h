/* SoC level DTS fixup file */

#define DT_NUM_IRQ_PRIO_BITS			DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

/* CMSDK APB Timers */
#define DT_CMSDK_APB_TIMER0			DT_ARM_CMSDK_TIMER_40000000_BASE_ADDRESS
#define DT_CMSDK_APB_TIMER_0_IRQ		DT_ARM_CMSDK_TIMER_40000000_IRQ_0

#define DT_CMSDK_APB_TIMER1			DT_ARM_CMSDK_TIMER_40001000_BASE_ADDRESS
#define DT_CMSDK_APB_TIMER_1_IRQ 		DT_ARM_CMSDK_TIMER_40001000_IRQ_0

/* CMSDK APB Dual Timer */
#define DT_CMSDK_APB_DTIMER			DT_ARM_CMSDK_DTIMER_40002000_BASE_ADDRESS
#define DT_CMSDK_APB_DUALTIMER_IRQ		DT_ARM_CMSDK_DTIMER_40002000_IRQ_0

/* CMSDK APB Universal Asynchronous Receiver-Transmitter (UART) */
#define DT_CMSDK_APB_UART0			DT_ARM_CMSDK_UART_40004000_BASE_ADDRESS
#define DT_CMSDK_APB_UART_0_IRQ_TX		DT_ARM_CMSDK_UART_40004000_IRQ_0
#define DT_CMSDK_APB_UART_0_IRQ_RX		DT_ARM_CMSDK_UART_40004000_IRQ_1
#define DT_UART_CMSDK_APB_PORT0_IRQ_PRI		DT_ARM_CMSDK_UART_40004000_IRQ_0_PRIORITY
#define DT_UART_CMSDK_APB_PORT0_BAUD_RATE	DT_ARM_CMSDK_UART_40004000_CURRENT_SPEED
#define DT_UART_CMSDK_APB_PORT0_NAME		DT_ARM_CMSDK_UART_40004000_LABEL

#define DT_CMSDK_APB_UART1			DT_ARM_CMSDK_UART_40005000_BASE_ADDRESS
#define DT_CMSDK_APB_UART_1_IRQ_TX		DT_ARM_CMSDK_UART_40005000_IRQ_0
#define DT_CMSDK_APB_UART_1_IRQ_RX		DT_ARM_CMSDK_UART_40005000_IRQ_1
#define DT_UART_CMSDK_APB_PORT1_IRQ_PRI		DT_ARM_CMSDK_UART_40005000_IRQ_0_PRIORITY
#define DT_UART_CMSDK_APB_PORT1_BAUD_RATE	DT_ARM_CMSDK_UART_40005000_CURRENT_SPEED
#define DT_UART_CMSDK_APB_PORT1_NAME		DT_ARM_CMSDK_UART_40005000_LABEL

#define DT_CMSDK_APB_UART2			DT_ARM_CMSDK_UART_40006000_BASE_ADDRESS
#define DT_CMSDK_APB_UART_2_IRQ_TX		DT_ARM_CMSDK_UART_40006000_IRQ_0
#define DT_CMSDK_APB_UART_2_IRQ_RX		DT_ARM_CMSDK_UART_40006000_IRQ_1
#define DT_UART_CMSDK_APB_PORT2_IRQ_PRI		DT_ARM_CMSDK_UART_40006000_IRQ_0_PRIORITY
#define DT_UART_CMSDK_APB_PORT2_BAUD_RATE	DT_ARM_CMSDK_UART_40006000_CURRENT_SPEED
#define DT_UART_CMSDK_APB_PORT2_NAME		DT_ARM_CMSDK_UART_40006000_LABEL

#define DT_CMSDK_APB_UART3			DT_ARM_CMSDK_UART_40007000_BASE_ADDRESS
#define DT_CMSDK_APB_UART_3_IRQ_TX		DT_ARM_CMSDK_UART_40007000_IRQ_0
#define DT_CMSDK_APB_UART_3_IRQ_RX		DT_ARM_CMSDK_UART_40007000_IRQ_1
#define DT_UART_CMSDK_APB_PORT3_IRQ_PRI		DT_ARM_CMSDK_UART_40007000_IRQ_0_PRIORITY
#define DT_UART_CMSDK_APB_PORT3_BAUD_RATE	DT_ARM_CMSDK_UART_40007000_CURRENT_SPEED
#define DT_UART_CMSDK_APB_PORT3_NAME		DT_ARM_CMSDK_UART_40007000_LABEL

#define DT_CMSDK_APB_UART4			DT_ARM_CMSDK_UART_40009000_BASE_ADDRESS
#define DT_CMSDK_APB_UART_4_IRQ_TX		DT_ARM_CMSDK_UART_40009000_IRQ_0
#define DT_CMSDK_APB_UART_4_IRQ_RX		DT_ARM_CMSDK_UART_40009000_IRQ_1
#define DT_UART_CMSDK_APB_PORT4_IRQ_PRI		DT_ARM_CMSDK_UART_40009000_IRQ_0_PRIORITY
#define DT_UART_CMSDK_APB_PORT4_BAUD_RATE	DT_ARM_CMSDK_UART_40009000_CURRENT_SPEED
#define DT_UART_CMSDK_APB_PORT4_NAME		DT_ARM_CMSDK_UART_40009000_LABEL

/* CMSDK APB Watchdog */
#define DT_CMSDK_APB_WDOG			DT_ARM_CMSDK_WATCHDOG_40008000_BASE_ADDRESS

/* CMSDK AHB General Purpose Input/Output (GPIO) */
#define DT_CMSDK_AHB_GPIO0			DT_ARM_CMSDK_GPIO_40010000_BASE_ADDRESS
#define DT_IRQ_PORT0_ALL			DT_ARM_CMSDK_GPIO_40010000_IRQ_0

#define DT_CMSDK_AHB_GPIO1			DT_ARM_CMSDK_GPIO_40011000_BASE_ADDRESS
#define DT_IRQ_PORT1_ALL			DT_ARM_CMSDK_GPIO_40011000_IRQ_0

#define DT_CMSDK_AHB_GPIO2			DT_ARM_CMSDK_GPIO_40012000_BASE_ADDRESS
#define DT_IRQ_PORT2_ALL			DT_ARM_CMSDK_GPIO_40012000_IRQ_0

#define DT_CMSDK_AHB_GPIO3			DT_ARM_CMSDK_GPIO_40013000_BASE_ADDRESS
#define DT_IRQ_PORT3_ALL			DT_ARM_CMSDK_GPIO_40013000_IRQ_0

/* I2C SBCon */
#define DT_I2C_SBCON_0_BASE_ADDR		DT_ARM_VERSATILE_I2C_40022000_BASE_ADDRESS
#define DT_I2C_SBCON_0_NAME			DT_ARM_VERSATILE_I2C_40022000_LABEL

#define DT_I2C_SBCON_1_BASE_ADDR		DT_ARM_VERSATILE_I2C_40023000_BASE_ADDRESS
#define DT_I2C_SBCON_1_NAME			DT_ARM_VERSATILE_I2C_40023000_LABEL

#define DT_I2C_SBCON_2_BASE_ADDR		DT_ARM_VERSATILE_I2C_40029000_BASE_ADDRESS
#define DT_I2C_SBCON_2_NAME			DT_ARM_VERSATILE_I2C_40029000_LABEL

#define DT_I2C_SBCON_3_BASE_ADDR		DT_ARM_VERSATILE_I2C_4002A000_BASE_ADDRESS
#define DT_I2C_SBCON_3_NAME			DT_ARM_VERSATILE_I2C_4002A000_LABEL

/* End of SoC Level DTS fixup file */
