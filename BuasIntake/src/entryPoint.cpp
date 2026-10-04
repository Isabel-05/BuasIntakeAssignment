#include <iostream>
#include <raylib.h>

int main() {
    InitWindow(800, 450, "Hello raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, world!", 300, 210, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
	return 0;
}