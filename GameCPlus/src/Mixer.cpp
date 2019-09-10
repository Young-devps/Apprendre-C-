#include "Mixer.h"

Mixer::Mixer()
{
    //ctor
}

Mixer::~Mixer()
{
    //dtor
}


/*
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

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
        SDL_SetTextureColorMod(texture, 255, 28, 255);
        if(texture == NULL)
            std::cout << "Error: cannot Create" << std::endl;
    }
    SDL_FreeSurface(surface);
    return texture;
}


int main(int argc, char *argv[])
{

    SDL_Window *window = NULL;
    SDL_Texture *currentImage = NULL;
    SDL_Renderer *renderTarget = NULL;

    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    window =  SDL_CreateWindow("SDL TechCodeMadeEasy Series", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 20148) < 0)
        cout << "Error: " << Mix_GetError() << endl;

    Mix_Music *GameFinish = Mix_LoadMUS("son/GameFinish.mp3");
    Mix_Chunk *EffetSong = Mix_LoadWAV("son/playerNotificate.wav");

    bool isRunning = true;
    SDL_Event ev;

    while(isRunning)
    {
        while(SDL_PollEvent(&ev) != 0)
        {
            //Getting the quit and the keyboard events
            if(ev.type == SDL_QUIT)
                isRunning = false;
            else if(ev.type == SDL_KEYDOWN)
            {
                switch (ev.key.keysym.sym)
                {
                case SDLK_p:
                    if(!Mix_PlayingMusic())
                        Mix_PlayMusic(GameFinish, -1);
                    else if(Mix_PausedMusic())
                        Mix_ResumeMusic();
                    else
                        Mix_PauseMusic();
                    break;
                case SDLK_1:
                    Mix_PlayChannel(-1, EffetSong, 2);
                    break;
                case SDLK_s:
                    Mix_HaltMusic();
                    break;

                }
            }
        }

        SDL_RenderClear(renderTarget);
        SDL_RenderCopy(renderTarget, currentImage, NULL, NULL);
        //SDL_RenderCopy(renderTarget, text, NULL, &textRect);
        SDL_RenderPresent(renderTarget);
    }

    SDL_DestroyWindow(window);
    SDL_DestroyTexture(currentImage);
    SDL_DestroyRenderer(renderTarget);
    Mix_FreeChunk(EffetSong);
    Mix_FreeMusic(GameFinish);

    EffetSong = NULL;
    GameFinish = NULL;
    currentImage = NULL;
    window = NULL;
    renderTarget = NULL;


    IMG_Quit();
    SDL_Quit();

    return 0;
}


*/
