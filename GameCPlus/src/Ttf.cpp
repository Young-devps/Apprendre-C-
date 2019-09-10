#include "Ttf.h"

Ttf::Ttf()
{
    //ctor
}

Ttf::~Ttf()
{
    //dtor
}



/*

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>


using namespace std;
SDL_Texture *Loadtexture(string filepath, SDL_Renderer *renderTarget)
{
    SDL_Texture *texture = NULL;
    SDL_Surface *surface = IMG_Load(filepath.c_str());
    if(surface == NULL)
        std::cout << "Error: surface Null " << std::endl;
    else
    {
        SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, 255, 0, 0));
        texture = SDL_CreateTextureFromSurface(renderTarget, surface);
        if(texture == NULL)
            std::cout << "Error: cannot Create" << std::endl;
    }
    SDL_FreeSurface(surface);
    return texture;
}


int main(int argc, char *argv[])
{
    const int FPS = 60;
    float FrameTime = 0;
    int prevTime = 0;
    int currentTime = 0;
    float deltaTime = 0;
    float moveSpeed = 200.0f;
    const Uint8 *keyState;


    SDL_Window *window = NULL;
    SDL_Texture *currentImage = NULL;
    SDL_Renderer *renderTarget = NULL;
    SDL_Rect playerRect;
    int frameWidth, frameHeight;
    int textureWidth, textureHeight;
    SDL_Rect playerPosition;
    playerPosition.x = playerPosition.y = 0;
    playerPosition.w = playerPosition.h = 60;

    SDL_Init(SDL_INIT_VIDEO);
    if(TTF_Init() < 0)
        cout << "Error: " << TTF_GetError() << endl;

    int imgFlags = IMG_INIT_PNG | IMG_INIT_JPG ;
    if(!IMG_Init(imgFlags) & imgFlags)
        cout << "Error: " << IMG_GetError() << endl;

    window =  SDL_CreateWindow("SDL TechCodeMadeEasy Series", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    currentImage = Loadtexture("images/walk.jpg", renderTarget);

    SDL_QueryTexture(currentImage, NULL, NULL, &textureWidth, &textureHeight);

    frameWidth = textureWidth / 2;
    frameHeight = textureHeight / 4;

    playerRect.x = playerRect.y = 0;
    playerRect.w = frameWidth;
    playerRect.h = frameHeight;

    TTF_Font *font = TTF_OpenFont("font/arial.TTF", 16);
    SDL_Color color;
    color = {144, 77, 32, 255};
    SDL_Surface *textSurface  =  TTF_RenderText_Solid(font, "TechCodeFacilMadeEasy Game Play", color);
    SDL_Texture *text = SDL_CreateTextureFromSurface(renderTarget, textSurface);
    SDL_Rect textRect;
    textRect.x = textRect.y = 0;

    SDL_QueryTexture(text, NULL, NULL, &textRect.w, &textRect.h);

    SDL_FreeSurface(textSurface);
    textSurface = NULL;

    SDL_SetRenderDrawColor(renderTarget, 255, 255, 255, 0xFF);

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
        if(keyState[SDL_SCANCODE_RIGHT])
            playerPosition.x += moveSpeed * deltaTime;
        else if(keyState[SDL_SCANCODE_LEFT])
            playerPosition.x -= moveSpeed * deltaTime;


        FrameTime += deltaTime;

        if(FrameTime >= 0.25f)
        {
            FrameTime = 0;
            playerRect.x += frameWidth;
            if(playerRect.x >= textureWidth)
                playerRect.x = 0;
        }

        SDL_RenderClear(renderTarget);
        SDL_RenderCopy(renderTarget, currentImage, &playerRect, &playerPosition);
        SDL_RenderCopy(renderTarget, text, NULL, &textRect);
        SDL_RenderPresent(renderTarget);
    }

    SDL_DestroyWindow(window);
    SDL_DestroyTexture(currentImage);
    SDL_DestroyTexture(text);
    SDL_DestroyRenderer(renderTarget);
    currentImage = NULL;
    window = NULL;
    renderTarget = NULL;
    text = NULL;

    TTF_Quit();
    IMG_Quit();
    SDL_Quit();

    return 0;
}

*/
