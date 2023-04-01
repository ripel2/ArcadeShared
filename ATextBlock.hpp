/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ATextBlock
*/

#pragma once

#include "ITextBlock.hpp"

#include <SDL2/SDL.h>
#include <SFML/Graphics.hpp>

namespace acd {
    class ATextBlock : public ITextBlock {
        public:
            /**
             * @brief Construct a new ATextBlock object
             */
            ATextBlock() {};
            /**
             * @brief Destroy the ATextBlock object
             */
            ~ATextBlock() override = default;

            /**
             * @brief Set the color of the block
             * @param color the color
             */
            void setColor(Color color) override
            {
                _color = color;
            };
            /**
             * @brief Set the text of the block
             * @param text the text
             */
            void setText(const std::string &text) override
            {
                _text = text;
            };
            /**
             * @brief Set the text position
             * @param line the line
             * @param column the column
             */
            void setTextPosition(std::size_t line, std::size_t column) override
            {
                _line = line;
                _column = column;
            }
            /**
             * @brief Get the text SFML
             * @return the text SFML
             */
            const sf::Text &getTextSFML() const
            {
                return (_textSFML);
            };
            /**
             * @brief Get the text SDL
             * @return the text SDL
             */
            SDL_Texture *getTextSDL() const
            {
                return (_textSDL);
            }
            /**
             * @brief Init the text SFML
             * @param text the text
             */
            void initTextSFML(sf::Text text) override
            {
                _textSFML = text;
            };
            /**
             * @brief Init the text SDL
             * @param text the text
             */
            void initTextSDL(SDL_Texture *text) override
            {
                _textSDL = text;
            };
            /**
             * @brief Set the text SFML
             * @param text the text
            */
            void setTextSFML(sf::Text text)
            {
                _textSFML = text;
            };
            /**
             * @brief Set the text SDL
             * @param text the text
            */
            void setTextSDL(SDL_Texture *text)
            {
                _textSDL = text;
            };

            /**
             * @brief Get the color of the block
             * @return the color
             */
            Color getColor() const override
            {
                return (_color);
            }
            /**
             * @brief Get the text of the block
             * @return the text
             */
            const std::string &getText() const override
            {
                return (_text);
            }
            /**
             * @brief Get the text position
             * @return the text position
             */
            std::pair<std::size_t, std::size_t> getTextPosition() const override
            {
                return (std::make_pair(_line, _column));
            }
        private:
            Color _color;
            std::string _text;
            std::size_t _line;
            std::size_t _column;
            sf::Text _textSFML;
            SDL_Texture *_textSDL;
    };
}
