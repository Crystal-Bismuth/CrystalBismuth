//Brandon L'Abbe

#include "..\raylib-cpp\include\raylib-cpp.hpp"

int main()
{
	// Initialization
	//--------------------------------------------------------------------------------------
	int screenWidth = 800;
	int screenHeight = 450;
	raylib::Color background(RAYWHITE);
	raylib::Color textColor(LIGHTGRAY);
	raylib::Window w(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!w.ShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		background.ClearBackground();

		textColor.DrawText("Congrats! You created your first window!", 190, 200, 20);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	return 0;
}
