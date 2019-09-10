#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <SDL2/SDL.h>


class Player
{
    public:
        Player(SDL_Renderer *renderTarget, std::string filepath, int x, int y, int frameX, int frameY);
        virtual ~Player();
        void Update(float delta, const Uint8 *keyState);
        void Draw(SDL_Renderer *renderTarget);
        SDL_Rect positionRect;

    protected:

    private:
        SDL_Rect cropRect;
        SDL_Texture *texture;
        float moveSpeed;
        float frameCounter;
        int frameWidth, frameHeight;
        int textureWidth;
        bool isActive;
        SDL_Scancode keys[4];
};

#endif // PLAYER_H
