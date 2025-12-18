#include <raylib.h>

int main() {
    InitWindow(1280, 720, "Aetherbound");

    while (!WindowShouldClose()) {
        
        BeginDrawing();
        ClearBackground(SKYBLUE);
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
