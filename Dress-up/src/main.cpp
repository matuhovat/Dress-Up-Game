#include <string>

#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include "extras/raygui.h"

int main() {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1920;
    const int screenHeight = 1030;

    InitWindow(screenWidth, screenHeight, "Dress Up :)");

    Texture2D Dolly = LoadTexture("base_ph.png");

    SetTargetFPS(60);
    //---------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------



        //----------------------------------------------------------------------------------


        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(PINK);
        DrawTexturePro(Dolly, {0, 0, 450, 800}, {100, 180, 450, 800}, {0, 0}, 0,  WHITE);
        DrawRectangleV({750, 0}, {1170, 1030}, WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}