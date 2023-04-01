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
             * @brief Load texture from file SFML
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            void loadTexturesSFML(const std::string &foregroundPath, const std::string &backgroundPath) override
            {
                _foregroundTextureSFML = std::make_unique<sf::Texture>();
                _backgroundTextureSFML = std::make_unique<sf::Texture>();
                _foregroundTextureSFML->loadFromFile(foregroundPath);
                _backgroundTextureSFML->loadFromFile(backgroundPath);
            }
            /**
             * @brief Load texture from file SDL
             * @param foregroundPath the path to the foreground file
             * @param backgroundPath the path to the background file
             */
            void loadTexturesSDL(const std::string &foregroundPath, const std::string &backgroundPath) override
            {
                _foregroundTextureSDL = std::make_unique<SDL_Texture *>();
                _backgroundTextureSDL = std::make_unique<SDL_Texture *>();
                *_foregroundTextureSDL = nullptr;
                *_backgroundTextureSDL = nullptr;
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
             * @brief Get the foreground texture SFML
             * @return the foreground texture
             */
            std::shared_ptr<sf::Texture> getForegroundTextureSFML() override
            {
                return _foregroundTextureSFML;
            }
            /**
             * @brief Get the background texture SFML
             * @return the background texture
             */
            std::shared_ptr<sf::Texture> getBackgroundTextureSFML() override
            {
                return _backgroundTextureSFML;
            }
            /**
             * @brief Get the foreground texture SDL
             * @return the foreground texture
             */
            std::shared_ptr<SDL_Texture *> getForegroundTextureSDL() override
            {
                return _foregroundTextureSDL;
            }
            /**
             * @brief Get the background texture SDL
             * @return the background texture
             */
            std::shared_ptr<SDL_Texture *> getBackgroundTextureSDL() override
            {
                return _backgroundTextureSDL;
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
            std::shared_ptr<sf::Texture> _foregroundTextureSFML;
            std::shared_ptr<sf::Texture> _backgroundTextureSFML;
            std::shared_ptr<SDL_Texture *> _foregroundTextureSDL;
            std::shared_ptr<SDL_Texture *> _backgroundTextureSDL;
    };
}
