/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** IBlock
*/

#pragma once

#include <SFML/Graphics.hpp>
#include <SDL2/SDL.h>
#include <ncurses.h>

#include "Colors.hpp"

namespace acd {
    class IBlock {
        public:
            /**
             * @brief Destroy the IBlock object
             */
            virtual ~IBlock() = default;

            /**
             * @brief Load texture from file SFML
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            virtual void loadTexturesSFML(const std::string &foregroundPath, const std::string &backgroundPath) = 0;
            /**
             * @brief Load texture from file SDL
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            virtual void loadTexturesSDL(const std::string &foregroundPath, const std::string &backgroundPath) = 0;
            /**
             * @brief Set the colors and the character of the block
             * @param foreground the foreground color
             * @param background the background color
             * @param characters the characters
             */
            virtual void loadTexturesNcurses(Color foreground, Color background, char characters[2]) = 0;
            /**
             * @brief Get the foreground texture SFML
             * @return the foreground texture
             */
            virtual sf::Texture &getForegroundTextureSFML() = 0;
            /**
             * @brief Get the background texture SFML
             * @return the background texture
             */
            virtual sf::Texture &getBackgroundTextureSFML() = 0;
            /**
             * @brief Get the foreground texture SDL
             * @return the foreground texture
             */
            virtual SDL_Texture &getForegroundTextureSDL() = 0;
            /**
             * @brief Get the background texture SDL
             * @return the background texture
             */
            virtual SDL_Texture &getBackgroundTextureSDL() = 0;
            /**
             * @brief Get the foreground color Ncurses
             * @return the foreground color
             */
            virtual Color getForegroundColorNcurses() = 0;
            /**
             * @brief Get the background color Ncurses
             * @return the background color
             */
            virtual Color getBackgroundColorNcurses() = 0;
            /**
             * @brief Get the characters Ncurses
             * @return the characters
             */
            virtual char *getCharactersNcurses() = 0;
    };
}
