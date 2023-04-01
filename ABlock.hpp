/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ABlock
*/

#pragma once

#include "IBlock.hpp"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SFML/Graphics.hpp>

namespace acd {
    class ABlock : public IBlock {
        public:
            /**
             * @brief Construct a new ABlock object
             */
            ABlock() = default;
            /**
             * @brief Destroy the ABlock object
             */
            ~ABlock() override = default;

            /**
             * @brief Set texture paths
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            void setTextures(const std::string &foregroundPath, const std::string &backgroundPath) override
            {
                _foregroundPath = foregroundPath;
                _backgroundPath = backgroundPath;
            }
            /**
             * @brief Set the colors and the character of the block
             * @param foreground the foreground color
             * @param background the background color
             * @param characters the characters
             */
            void loadTexturesNcurses(Color foreground, Color background, char characters[2]) override {
                _ncursesForeground = foreground;
                _ncursesBackground = background;
                _ncursesCharacters[0] = characters[0];
                _ncursesCharacters[1] = characters[1];
            }
            /**
             * @brief Get the foreground color Ncurses
             * @return the foreground color
             */
            Color getForegroundColorNcurses() override
            {
                return _ncursesForeground;
            }
            /**
             * @brief Get the background color Ncurses
             * @return the background color
             */
            Color getBackgroundColorNcurses() override
            {
                return _ncursesBackground;
            }
            /**
             * @brief Get the characters Ncurses
             * @return the characters
             */
            char *getCharactersNcurses() override
            {
                return _ncursesCharacters;
            }
        private:
            Color _ncursesForeground;
            Color _ncursesBackground;
            char _ncursesCharacters[2];
            std::string _foregroundPath;
            std::string _backgroundPath;
    };
}
