//[...]
#include "ILI9341_STM32_Driver.h"
#include "ILI9341_GFX.h"

int main(void) {
	//[...]
	HAL_Init();
	// [...]

	while (1) {
		ILI9341_Fill_Screen(RED);
		ILI9341_Set_Rotation(SCREEN_HORIZONTAL_2);
		ILI9341_Draw_Text("Hello World!", 10, 10, BLACK, 1, WHITE);
		HAL_Delay(2000);
		ILI9341_Fill_Screen(BLUE);

		int x = 0;
		int y = 0;
		while (y < 240) {
			while ((x < 320) && (y < 240)) {

				if (x % 2) {
					ILI9341_Draw_Pixel(x, y, MAGENTA);
				}

				x++;
			}

			y++;
			x = 0;
		}

		x = 0;
		y = 0;

		while (y < 240) {
			while ((x < 320) && (y < 240)) {

				if (y % 2) {
					ILI9341_Draw_Pixel(x, y, GREEN);
				}

				x++;
			}

			y++;
			x = 0;
		}
		HAL_Delay(2000);
	}
}