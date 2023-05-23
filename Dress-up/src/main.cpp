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
    string Page = "H";

    Rectangle HairSource = {0.0f, 0.0f, (float) Hair.width / 5, (float) Hair.height};

    SetTargetFPS(60);
    //---------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        if (IsKeyPressed(MOUSE_BUTTON_LEFT)) {
            if (CheckCollisionPointRec(GetMousePosition(), {775, 25, 300, 100})) {
                Page = "H";
            } else if (CheckCollisionPointRec(GetMousePosition(), {775, 25, 300, 100})) {
                Page = "C";
            } else if (CheckCollisionPointRec(GetMousePosition(), {775, 150, 300, 300})) {
                if (Page == "H") {
                    HairSource = {400.0f, 0.0f, (float) Hair.width / 5, (float) Hair.height};
                }
            } else if (CheckCollisionPointRec(GetMousePosition(), {1100, 150, 300, 300})) {
                if (Page == "H") {
                    HairSource = {800.0f, 0.0f, (float) Hair.width / 5, (float) Hair.height};
                }
            } else if (CheckCollisionPointRec(GetMousePosition(), {1425, 150, 300, 300})) {
                if (Page == "H") {
                    HairSource = {1200.0f, 0.0f, (float) Hair.width / 5, (float) Hair.height};
                }
            } else if (CheckCollisionPointRec(GetMousePosition(), {775, 475, 300, 300})) {
                if (Page == "H") {
                    HairSource = {1600.0f, 0.0f, (float) Hair.width / 5, (float) Hair.height};
                }
            }
        }

        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------

        BeginDrawing();
        ClearBackground(PINK);
        DrawTexturePro(Dolly, {0, 0, 450, 800}, {100, 180, 450, 800}, {0, 0}, 0, WHITE);
        DrawTexturePro(Hair, HairSource, {100, 100, 400, 900}, {0, 0}, 0, WHITE);
        DrawRectangleV({750, 0}, {1170, 1030}, WHITE);
        DrawRectangleV({775, 25}, {300, 100}, PINK);
        DrawText("Hair", 775, 25, 20, RED);
        DrawRectangleV({1100, 25}, {300, 100}, PINK);
        DrawText("Clothes", 1100, 25, 20, RED);
        if (Page == "H") {
            DrawRectangleV({775, 150}, {300, 300}, WHITE);
            DrawTexturePro(Hair, {400, 0, 400, 900}, {775, 150, 133, 300}, {0, 0}, 0, WHITE);
            DrawRectangleV({1100, 150}, {300, 300}, WHITE);
            DrawTexturePro(Hair, {800, 0, 400, 900}, {110, 150, 133, 300}, {0, 0}, 0, WHITE);
            DrawRectangleV({1425, 150}, {300, 300}, WHITE);
            DrawTexturePro(Hair, {1200, 0, 400, 900}, {1425, 150, 133, 300}, {0, 0}, 0, WHITE);
            DrawRectangleV({775, 475}, {300, 300}, WHITE);
            DrawTexturePro(Hair, {1600, 0, 400, 900}, {775, 475, 133, 300}, {0, 0}, 0, WHITE);
        }

        EndDrawing();

        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    CloseWindow();        // Close window and OpenGL context

    //--------------------------------------------------------------------------------------
}