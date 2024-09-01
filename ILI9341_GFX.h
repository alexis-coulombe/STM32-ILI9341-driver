//-----------------------------------
//	How to use this library
//-----------------------------------
//
//	-If using MCUs other than STM32G0 you will have to change the #include "stm32g0xx_hal.h" in the ILI9341_GFX.h to your respective .h file
//
//	If using "ILI9341_STM32_Driver" then all other prequisites to use the library have already been met
//	Simply include the library and it is ready to be used
//
//-----------------------------------

#ifndef ILI9341_GFX_H
#define ILI9341_GFX_H

#include "stm32g0xx_hal.h"

#define HORIZONTAL_IMAGE	0
#define VERTICAL_IMAGE		1

/*
 * @brief: Draw hollow circle at X,Y location with specified radius and colour. X and Y represent circles center
 *
 * @param X: X coordinate of circle center
 * @param Y: Y coordinate of circle center
 * @param Radius: Radius of circle
 * @param Colour: Colour of circle
 *
 * @return: None
 */
void ILI9341_Draw_Hollow_Circle(uint16_t X, uint16_t Y, uint16_t Radius, uint16_t Colour);

/*
 * @brief: Draw filled circle at X,Y location with specified radius and colour. X and Y represent circles center
 *
 * @param X: X coordinate of circle center
 * @param Y: Y coordinate of circle center
 * @param Radius: Radius of circle
 * @param Colour: Colour of circle
 *
 * @return: None
 */
void ILI9341_Draw_Filled_Circle(uint16_t X, uint16_t Y, uint16_t Radius, uint16_t Colour);

/*
 * @brief: Draw hollow rectangle at X,Y location with specified width, height and colour. X and Y represent top left corner
 *
 * @param X: X coordinate of top left corner
 * @param Y: Y coordinate of top left corner
 * @param Width: Width of rectangle
 * @param Height: Height of rectangle
 * @param Colour: Colour of rectangle
 *
 * @return: None
 */
void ILI9341_Draw_Hollow_Rectangle_Coord(uint16_t X0, uint16_t Y0, uint16_t X1, uint16_t Y1, uint16_t Colour);

/*
 * @brief: Draw filled rectangle at X,Y location with specified width, height and colour. X and Y represent top left corner
 *
 * @param X: X coordinate of top left corner
 * @param Y: Y coordinate of top left corner
 * @param Width: Width of rectangle
 * @param Height: Height of rectangle
 * @param Colour: Colour of rectangle
 *
 * @return: None
 */
void ILI9341_Draw_Filled_Rectangle_Coord(uint16_t X0, uint16_t Y0, uint16_t X1, uint16_t Y1, uint16_t Colour);

/*
 * @brief: Draws a character (fonts imported from fonts.h) at X,Y location with specified font colour, size and Background colour
 * See fonts.h implementation of font on what is required for changing to a different font when switching fonts libraries
 *
 * @param X: X coordinate of top left corner
 * @param Y: Y coordinate of top left corner
 * @param Width: Width of rectangle
 * @param Height: Height of rectangle
 * @param Colour: Colour of rectangle
 *
 * @return: None
 */
void ILI9341_Draw_Char(char Character, uint8_t X, uint8_t Y, uint16_t Colour, uint16_t Size, uint16_t Background_Colour);

/*
 * @brief: Draws an array of characters (fonts imported from fonts.h) at X,Y location with specified font colour, size and Background colour
 * See fonts.h implementation of font on what is required for changing to a different font when switching fonts libraries
 *
 * @param Text: String to be displayed
 * @param X: X coordinate of top left corner
 * @param Y: Y coordinate of top left corner
 * @param Colour: Colour of rectangle
 * @param Size: Size of font
 * @param Background_Colour: Background colour of font
 *
 * @return: None
 */
void ILI9341_Draw_Text(const char* Text, uint16_t X, uint16_t Y, uint16_t Colour, uint16_t Size, uint16_t Background_Colour);

/*
 * @brief: Draws a full screen picture from flash. Image converted from RGB .jpeg/other to C array using online converter
 *
 * USING CONVERTER: http://www.digole.com/tools/PicturetoC_Hex_converter.php
 * 65K colour (2Bytes / Pixel)
 *
 * @param Text: String to be displayed
 * @param X: X coordinate of top left corner
 * @param Y: Y coordinate of top left corner
 * @param Colour: Colour of rectangle
 * @param Size: Size of font
 * @param Background_Colour: Background colour of font
 *
 * @return: None
 */
void ILI9341_Draw_Image(const char* Image_Array, uint8_t Orientation);

#endif
