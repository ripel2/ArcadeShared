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
#include <memory>

#include "Colors.hpp"

namespace acd {
    class IBlock {
        public:
            /**
             * @brief Destroy the IBlock object
             */
            virtual ~IBlock() = default;

            /**
             * @brief Set the textures of the block
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            virtual void setTextures(const std::string &foregroundPath, const std::string &backgroundPath) = 0;
            /**
             * @brief Set the colors and the character of the block
             * @param foreground the foreground color
             * @param background the background color
             * @param characters the characters
             */
            virtual void loadTexturesNcurses(Color foreground, Color background, char characters[2]) = 0;
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
