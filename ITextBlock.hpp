/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ITextBlock
*/

#pragma once

#include <SFML/Graphics.hpp>
#include <SDL2/SDL.h>
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
             * @brief Get the text SFML
             * @return the text SFML
             */
            virtual const sf::Text &getTextSFML() const = 0;
            /**
             * @brief Get the text SDL
             * @return the text SDL
             */
            virtual SDL_Texture *getTextSDL() const = 0;
            /**
             * @brief Init the text SFML
             * @param text the text
             */
            virtual void initTextSFML(sf::Text text) = 0;
            /**
             * @brief Init the text SDL
             * @param text the text
             */
            virtual void initTextSDL(SDL_Texture *text) = 0;
            /**
             * @brief Set the text SFML
             * @param text the text
            */
            virtual void setTextSFML(sf::Text text) = 0;
            /**
             * @brief Set the text SDL
             * @param text the text
            */
            virtual void setTextSDL(SDL_Texture *text) = 0;
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
    };
}
