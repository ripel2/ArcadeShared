/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ITextBlock
*/

#pragma once

#include <SDL2/SDL.h>
#include <SFML/Graphics.hpp>
#include <ncurses.h>
#include <string>
#include <functional>

#include "Colors.hpp"

namespace acd {
    class ITextBlock {
        public:
            /**
             * @brief Destroy the ITextBlock object
             */
            virtual ~ITextBlock() = default;

            /**
             * @brief Set the color of the block
             * @param color the color
             */
            virtual void setColor(Color color) = 0;
            /**
             * @brief Set the text of the block
             * @param text the text
             */
            virtual void setText(const std::string &text) = 0;
            /**
             * @brief Set the text position
             * @param line the line
             * @param column the column
             */
            virtual void setTextPosition(std::size_t line, std::size_t column) = 0;
            /**
             * @brief Init the text SFML
             * @param fontPath the path of the font
             * @param fontSize the font size
             */
            virtual void initTextSFML(const std::string &fontPath, std::size_t fontSize) = 0;
            /**
             * @brief Init the text SDL
             * @param fontPath the path of the font
             * @param fontSize the font size
             */
            virtual void initTextSDL(const std::string &fontPath, std::size_t fontSize) = 0;

            /**
            * @brief Get the color of the block
            * @return the color
            */
            virtual Color getColor() const = 0;
            /**
             * @brief Get the text of the block
             * @return the text
             */
            virtual const std::string &getText() const = 0;
            /**
             * @brief Get the text position
             * @return the position
             */
            virtual std::pair<std::size_t, std::size_t> getTextPosition() const = 0;
            /**
             * @brief Get the text SFML
             * @return the text
             */
            virtual sf::Text &getTextSFML() const = 0;
            /**
             * @brief Get the text SDL
             * @return the text
             */
            virtual SDL_Texture &getTextSDL() const = 0;
    };
}
