//Animation Sprite

/*#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>


using namespace std;
SDL_Texture *Loadtexture(string filepath, SDL_Renderer *renderTarget)
{
    SDL_Texture *texture = NULL;
    SDL_Surface *surface = IMG_Load(filepath.c_str());
    if(surface == NULL)
        std::cout << "Error: surface Null " << std::endl;
    else
    {
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
    int FrameTime = 0;

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

    int imgFlags = IMG_INIT_PNG | IMG_INIT_JPG ;
    if(!IMG_Init(imgFlags) & imgFlags)
        cout << "Error: " << IMG_GetError() << endl;

    window =  SDL_CreateWindow("SDL TechCodeMadeEasy Series", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    currentImage = Loadtexture("images/bb.jpg", renderTarget);

    SDL_QueryTexture(currentImage, NULL, NULL, &textureWidth, &textureHeight);

    frameWidth = textureWidth / 2;
    frameHeight = textureHeight / 4;

    playerRect.x = playerRect.y = 0;
    playerRect.w = frameWidth;
    playerRect.h = frameHeight;


    SDL_SetRenderDrawColor(renderTarget, 255, 0, 255, 0xFF);

    bool isRunning = true;
    SDL_Event ev;

    while(isRunning)
    {
        while(SDL_PollEvent(&ev) != 0)
        {
            //Getting the quit and the keyboard events
            if(ev.type == SDL_QUIT)
                isRunning = false;
        }

        FrameTime++;

        if(FPS / FrameTime == 5)
        {
            FrameTime = 0;
            playerRect.x += frameWidth;
            if(playerRect.x >= textureWidth)
                playerRect.x = 0;
        }

        SDL_RenderClear(renderTarget);
        SDL_RenderCopy(renderTarget, currentImage, &playerRect, &playerPosition);
        SDL_RenderPresent(renderTarget);
    }

    SDL_DestroyWindow(window);
    SDL_DestroyTexture(currentImage);
    SDL_DestroyRenderer(renderTarget);
    currentImage = NULL;
    window = NULL;
    renderTarget = NULL;

    SDL_Quit();

    return 0;
}
*/
