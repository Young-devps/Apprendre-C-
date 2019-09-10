#include "Player.h"
#include <SDL2/SDL_image.h>
#include <iostream>

Player::Player(SDL_Renderer *renderTarget, std::string filepath, int x, int y, int frameX, int frameY)
{
    //ctor
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

    SDL_QueryTexture(texture, NULL, NULL, &cropRect.w, cropRect.h);

    positionRect.x = x;
    positionRect.y = y;

    textureWidth = cropRect.w;

    cropRect.w /= frameX;
    cropRect.h /= frameY;

    frameWidth = positionRect.w = cropRect.w;
    frameHeight = positionRect.h = cropRect.h;

    isActive = false;

    static int playerNumber = 0;
    playerNumber++;

    if(playerNumber == 0)
    {
        keys[0] = SDL_SCANCODE_W;
        keys[1] = SDL_SCANCODE_S;
        keys[2] = SDL_SCANCODE_A;
        keys[3] = SDL_SCANCODE_D;
    }
    else
    {
        keys[0] = SDL_SCANCODE_UP;
        keys[1] = SDL_SCANCODE_DOWN;
        keys[2] = SDL_SCANCODE_LEFT;
        keys[3] = SDL_SCANCODE_RIGHT;
    }

    moveSpeed = 200.0f;
}



Player::~Player()
{
    //dtor
    SDL_DestroyTexture(texture);
}


void Player::Update(float delta, const Uint8 *KeyboadState)
{
    isActive = true;
    if(KeyboadState[keys[0]])
    {
        positionRect.y -= moveSpeed * delta;
        cropRect.y = frameWidth * 2;
    }
    else if(KeyboadState[keys[1]])
    {
        positionRect.y += moveSpeed * delta;
        cropRect.y = 0;
    }
    else if(KeyboadState[keys[2]])
    {
        positionRect.x -= moveSpeed * delta;
        cropRect.y = frameHeight;
    }
    else if(KeyboadState[keys[3]])
    {
        positionRect.x += moveSpeed * delta;
        cropRect.y = frameHeight * 2;
    }
    else
        isActive = false;



    if(isActive)
    {
        frameCounter += delta;

        if(frameCounter >= 0.25f)
        {
            frameCounter = 0;
            cropRect.x += frameWidth;
            if(cropRect.x >= textureWidth)
                cropRect.x = 0;
        }
    }
    else
    {
        frameCounter = 0;
        cropRect.x = frameWidth;
    }
}


void Player::Draw(SDL_Renderer *renderTarget)
{
    SDL_RenderCopy(renderTarget, texture, &cropRect, &positionRect);
}
