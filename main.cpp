#include <SDL2/SDL.h>

#include <stdio.h>
#include <cstdio>
#include <string>
#include <sstream>

#define SCREEN_WIDTH    640
#define SCREEN_HEIGHT   480
#define WINDOW_TITLE    "Hello SDL2!"
#define WINDOW_TEXT     "Hello World!"


// We make a custom stream handler for brievity
inline std::ostream& operator<<(std::ostream& os, SDL_version const& v) {
    os << int(v.major) << '.' << int(v.minor) << '.' << int(v.patch);
    return os;
}

//---------------------------------------------------------------------
//  MAIN
//---------------------------------------------------------------------
int main(int argc, char* args[]) {
    
    SDL_Window* window = NULL;                      // The window we are rendering to
    SDL_Surface* screenSurface = NULL;              // The surface contained by the window
    SDL_Event wEvent;                               // Enable the Window Event handler...
  
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf( "[ERROR] SDL could not initialize! SDL Error: %s\n", SDL_GetError());
        return 1;
    }
    
    window = SDL_CreateWindow(WINDOW_TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf( "[ERROR] Window could not be created! SDL Error: %s\n", SDL_GetError());
        return 1;
    }
    
    screenSurface = SDL_GetWindowSurface(window);
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x80, 0x80, 0x80));     // Set a gray background canvas
    SDL_UpdateWindowSurface(window);
    
    SDL_Color fgC1 = { 0xff,0xff,0xff }, bgC1 = {0x00,0x00,0xa0};                               // white text on blue background
    SDL_Color fgC2 = { 0x00,0x00,0x00 }, bgC2 = {0xff,0x00,0xff};                               // black text on magenta background

    SDL_UpdateWindowSurface(window);
    
    //-----------------------------------------------------
    // Wait for Events to quit & close the window
    //-----------------------------------------------------
    SDL_Delay(1000);  // Wait 1 sec for greasy fingers
    bool eQuit = false;
    while (!eQuit) {
        while(SDL_PollEvent(&wEvent)) {
            switch (wEvent.type) {
                case SDL_QUIT:              eQuit = true; break;
                case SDL_KEYDOWN:           eQuit = true; break;
                case SDL_MOUSEBUTTONDOWN:   eQuit = true; break;
                case SDL_WINDOWEVENT_CLOSE: eQuit = true; break;
            default:
                //SDL_Log("Window %d got unknown event %d\n", wEvent.window.windowID, wEvent.window.event);
                break;
            }
        }
        SDL_Delay(16); // Keep < 500 [ms]
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}