#include <string>
#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include "extras/raygui.h"

using namespace std;

int main() {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1920;
    const int screenHeight = 1030;

    InitWindow(screenWidth, screenHeight, "Dress Up :)");

    Texture2D Dolly = LoadTexture("base_ph.png");
    Texture2D Hair = LoadTexture("hair_ph.png");
    string Page = "0";

    Rectangle HairDest = {0.0f, 0.0f, (float)Hair.width / 5, (float)Hair.height};

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
        DrawRectangleV({775, 25}, {300, 100}, PINK);
        DrawText("Hair", 775, 25, 20, RED);
        if (Page == "0") {
            DrawRectangleV({775, 150}, {190, 425}, WHITE);
            DrawTexturePro(Hair, {0, 0, 400, 900}, {775, 150, 190, 425}, {0, 0}, 0, WHITE);
            DrawRectangleV({990, 150}, {190, 425}, WHITE);
            DrawTexturePro(Hair, {401, 0, 400, 900}, {990, 150, 190, 425}, {0, 0}, 0, WHITE);


        }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}