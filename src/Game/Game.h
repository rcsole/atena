/**
 * Copyright 2014-present [Ricard Sole <@rcsole, ricard.solecasas@gmail.com>]
 */

#ifndef __Game__
#define __Game__

#include <SDL2/SDL.h>

#include <vector>

#include "../Textures/TextureManager.h"
#include "../Textures/Texture.h"

class Game {
 public:
     Game(const char* title,
            int xpos, int ypos,
            int width, int height,
            int flags);
    ~Game() {}

    void render();
    void update();
    void handleEvents();
    void clean();

    void enableSprites();
    void enableTextures();

    SDL_Renderer* getRenderer() { return m_pRenderer; }
    bool running() { return m_Running; }

 private:
    SDL_Window* m_pWindow;
    SDL_Renderer* m_pRenderer;

    bool m_Running;
};

#endif
