/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ABlock
*/

#pragma once

#include "IBlock.hpp"

namespace acd {
    class ABlock : public IBlock {
        public:
            /**
             * @brief Destroy the ABlock object
             */
            ~ABlock() override = default;

            /**
             * @brief Load texture from file SFML
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            void loadTexturesSFML(const std::string &foregroundPath, const std::string &backgroundPath) override {}
            /**
             * @brief Load texture from file SDL
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            void loadTexturesSDL(const std::string &foregroundPath, const std::string &backgroundPath) override {}
            /**
             * @brief Set the colors and the character of the block
             * @param foreground the foreground color
             * @param background the background color
             * @param characters the characters
             */
            void loadTexturesNcurses(Color foreground, Color background, char characters[2]) override {}
            /**
             * @brief Get the foreground texture SFML
             * @return the foreground texture
             */
            unique_ptr<sf::Texture> getForegroundTextureSFML() override { return nullptr; }
            /**
             * @brief Get the background texture SFML
             * @return the background texture
             */
            unique_ptr<sf::Texture> getBackgroundTextureSFML() override { return nullptr; }
            /**
             * @brief Get the foreground texture SDL
             * @return the foreground texture
             */
            unique_ptr<SDL_Texture> getForegroundTextureSDL() override { return nullptr; }
            /**
             * @brief Get the background texture SDL
             * @return the background texture
             */
            unique_ptr<SDL_Texture> getBackgroundTextureSDL() override { return nullptr; }
            /**
             * @brief Get the foreground color Ncurses
             * @return the foreground color
             */
            Color getForegroundColorNcurses() override {}
            /**
             * @brief Get the background color Ncurses
             * @return the background color
             */
            Color getBackgroundColorNcurses() override {}
            /**
             * @brief Get the characters Ncurses
             * @return the characters
             */
            char *getCharactersNcurses() override {}
        protected:
            /**
             * @brief Construct a new ABlock object
             */
            ABlock() = default;
    };
}
