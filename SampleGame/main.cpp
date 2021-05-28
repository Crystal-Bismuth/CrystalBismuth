/*******************************************************************************************
*
*   raylib-cpp [core] example - Basic window
*
*   Welcome to raylib-cpp!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib-cpp. :)
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib-cpp is licensed under an unmodified zlib/libpng license (View raylib-cpp.hpp for details)
*
*   Copyright (c) 2021 Rob Loach (@RobLoach)
*
********************************************************************************************/

#include "GraphicsSystem.h"


int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 800;
    int screenHeight = 450;
    //raylib::Color textColor = LIGHTGRAY;
    //raylib::Window window(screenWidth, screenHeight, "raylib [core] example - basic window");
    
    
    GraphicsSystem* gs = new GraphicsSystem();

    gs->init(screenWidth, screenHeight);

    
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (gs->isRunning())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        gs->debugDraw();
        //----------------------------------------------------------------------------------
    }

    return 0;
}
