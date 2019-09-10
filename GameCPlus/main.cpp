#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "Player.h"

using namespace std;


int main(int argc, char *argv[])
{

    SDL_Window *window = NULL;
    SDL_Renderer *renderTarget = NULL;
    int currentTime = 0;
    int prevTime = 0;
    float deltaTime = 0.0f;
    const Uint8 *keyState;

    SDL_Init(SDL_INIT_VIDEO);

    window =  SDL_CreateWindow("SDL TechCodeMadeEasy Series", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    Player player1(renderTarget, "images/walk.jpg", 0, 0, 2, 4);
    Player player2(renderTarget, "images/walk.jpg", 600, 400, 2, 4);

    bool isRunning = true;
    SDL_Event ev;

    while(isRunning)
    {
        prevTime = currentTime;
        currentTime = SDL_GetTicks();
        deltaTime = (currentTime - prevTime) / 1000.0f;
        while(SDL_PollEvent(&ev) != 0)
        {
            //Getting the quit and the keyboard events
            if(ev.type == SDL_QUIT)
                isRunning = false;
        }

        keyState = SDL_GetKeyboardState(NULL);

        SDL_RenderClear(renderTarget);
        player1.Update(deltaTime, keyState);
        player2.Update(deltaTime, keyState);
        player1.Draw(renderTarget);
        player2.Draw(renderTarget);
        SDL_RenderPresent(renderTarget);
    }

    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderTarget);

    window = NULL;
    renderTarget = NULL;

    IMG_Quit();
    SDL_Quit();

    return 0;
}
