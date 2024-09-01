# ILI9431 STM32 SPI Driver
Add files from this repository to your project, add to path in STMCubeIDE.
Refer to example.c for a simple code to add to your main.c

Replace defines in ILI9341_STM32_Driver.h to your settings. 
Default is using SPI1_SCK / SPI1_MOSI, PA4 (*CS*), PB11 (*DC*), PB1 (*RESET*). 
- HSPI_INSTANCE
- LCD_CS_PORT
- LCD_CS_PIN
- LCD_DC_PORT
- LCD_DC_PIN
- LCD_RST_PORT
- LCD_RST_PIN

SPI1 (or the SPI interface that you are using) must be **"Transmit only master"** and **"Data Size"** must be 8 bits.
