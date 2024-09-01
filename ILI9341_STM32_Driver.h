#ifndef ILI9341_STM32_DRIVER_H
#define ILI9341_STM32_DRIVER_H

#include "stm32g0xx_hal.h"

#define ILI9341_SCREEN_HEIGHT (240)
#define ILI9341_SCREEN_WIDTH  (320)

//SPI INSTANCE
#define HSPI_INSTANCE (&hspi1)

//CHIP SELECT PIN AND PORT, STANDARD GPIO
#define LCD_CS_PORT (GPIOA)
#define LCD_CS_PIN  (GPIO_PIN_4)

//DATA COMMAND PIN AND PORT, STANDARD GPIO
#define LCD_DC_PORT (GPIOB)
#define LCD_DC_PIN  (GPIO_PIN_11)

//RESET PIN AND PORT, STANDARD GPIO
#define LCD_RST_PORT (GPIOB)
#define LCD_RST_PIN  (GPIO_PIN_1)

#define BURST_MAX_SIZE (500)

#define BLACK       (0x0000)
#define NAVY        (0x000F)
#define DARKGREEN   (0x03E0)
#define DARKCYAN    (0x03EF)
#define MAROON      (0x7800)
#define PURPLE      (0x780F)
#define OLIVE       (0x7BE0)
#define LIGHTGREY   (0xC618)
#define DARKGREY    (0x7BEF)
#define BLUE        (0x001F)
#define GREEN       (0x07E0)
#define CYAN        (0x07FF)
#define RED         (0xF800)
#define MAGENTA     (0xF81F)
#define YELLOW      (0xFFE0)
#define WHITE       (0xFFFF)
#define ORANGE      (0xFD20)
#define GREENYELLOW (0xAFE5)
#define PINK        (0xF81F)

#define SCREEN_VERTICAL_1   (0)
#define SCREEN_HORIZONTAL_1 (1)
#define SCREEN_VERTICAL_2   (2)
#define SCREEN_HORIZONTAL_2 (3)

/*
 * @brief: Initialize SPI and GPIOs for the LCD
 *
 * @param: None
 *
 * @return: None
 */
void ILI9341_SPI_Init(void);

/*
 * @brief: Send single byte over SPI
 *
 * @param SPI_Data: Data to be sent over SPI
 *
 * @return: None
 */
void ILI9341_SPI_Send(uint8_t SPI_Data);

/*
 * @brief: Send single byte over SPI
 *
 * @param SPI_Data: Data to be sent over SPI
 *
 * @return: None
 */
void ILI9341_Write_Command(uint8_t Command);

/*
 * @brief: Write data to LCD
 *
 * @param Data: Data to be written to LCD
 *
 * @return: None
 */
void ILI9341_Write_Data(uint8_t Data);

/*
 * @brief: Set Address - Location block - to draw into
 *
 * @param X1: X coordinate of top left corner
 * @param Y1: Y coordinate of top left corner
 * @param X2: X coordinate of bottom right corner
 * @param Y2: Y coordinate of bottom right corner
 *
 * @return: None
 */
void ILI9341_Set_Address(uint16_t X1, uint16_t Y1, uint16_t X2, uint16_t Y2);

/*
 * @brief: Hardware reset
 *
 * @param: None
 *
 * @return: None
 */
void ILI9341_Reset(void);

/*
 * @brief: Set rotation of the screen
 *
 * @param Rotation: Rotation of the screen
 *
 * @return: None
 */
void ILI9341_Set_Rotation(uint8_t Rotation);

/*
 * @brief: Enable LCD
 *
 * @param: None
 *
 * @return: None
 */
void ILI9341_Enable(void);

/*
 * @brief: Init LCD
 *
 * @param: None
 *
 * @return: None
 */
void ILI9341_Init(void);

/*
 * @brief: Fill screen with colour
 *
 * @param Colour: Colour to fill screen with
 *
 * @return: None
 */
void ILI9341_Fill_Screen(uint16_t Colour);

/*
 * @brief: Draw single pixel at X,Y location
 *
 * @param X: X coordinate of pixel
 * @param Y: Y coordinate of pixel
 * @param Colour: Colour of pixel
 *
 * @return: None
 */
void ILI9341_Draw_Colour(uint16_t Colour);

/*
 * @brief: Draw single pixel at X,Y location
 *
 * Location is dependent on screen orientation. x0 and y0 locations change with orientations.
 * Using pixels to draw big simple structures is not recommended as it is really slow
 * Try using either rectangles or lines if possible
 *
 * @param X: X coordinate of pixel
 * @param Y: Y coordinate of pixel
 * @param Colour: Colour of pixel
 *
 * @return: None
 */
void ILI9341_Draw_Pixel(uint16_t X, uint16_t Y, uint16_t Colour);

/*
 * @brief: Draw horizontal line at X,Y location with specified length and colour
 *
 * @param X: X coordinate of line
 * @param Y: Y coordinate of line
 * @param Width: Length of line
 * @param Colour: Colour of line
 *
 * @return: None
 */
void ILI9341_Draw_Colour_Burst(uint16_t Colour, uint32_t Size);

/*
 * @brief: Draw horizontal line at X,Y location with specified length and colour
 *
 * @param X: X coordinate of line
 * @param Y: Y coordinate of line
 * @param Width: Length of line
 * @param Colour: Colour of line
 *
 * @return: None
 */
void ILI9341_Draw_Rectangle(uint16_t X, uint16_t Y, uint16_t Width, uint16_t Height, uint16_t Colour);

/*
 * @brief: Draw horizontal line at X,Y location with specified length and colour
 *
 * @param X: X coordinate of line
 * @param Y: Y coordinate of line
 * @param Width: Length of line
 * @param Colour: Colour of line
 *
 * @return: None
 */
void ILI9341_Draw_Horizontal_Line(uint16_t X, uint16_t Y, uint16_t Width, uint16_t Colour);

/*
 * @brief: Draw vertical line at X,Y location with specified length and colour
 *
 * @param X: X coordinate of line
 * @param Y: Y coordinate of line
 * @param Height: Length of line
 * @param Colour: Colour of line
 *
 * @return: None
 */
void ILI9341_Draw_Vertical_Line(uint16_t X, uint16_t Y, uint16_t Height, uint16_t Colour);

#endif

