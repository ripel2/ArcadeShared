/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ATextBlock
*/

#pragma once

#include "ITextBlock.hpp"

namespace acd {
    class ATextBlock : public ITextBlock {
        public:
            /**
             * @brief Destroy the ATextBlock object
             */
            ~ATextBlock() override = default;

            /**
             * @brief Set the color of the block
             * @param color the color
             */
            void setColor(Color color) override final;
            /**
             * @brief Set the text of the block
             * @param text the text
             */
            void setText(const std::string &text) override final;
            /**
             * @brief Set the text position
             * @param line the line
             * @param column the column
             */
            void setTextPosition(std::size_t line, std::size_t column) override final;
            /**
             * @brief Init the text SFML
             * @param fontPath the path of the font
             * @param fontSize the font size
             */
            virtual void initTextSFML(const std::string &fontPath, std::size_t fontSize) override {};
            /**
             * @brief Init the text SDL
             * @param fontPath the path of the font
             * @param fontSize the font size
             */
            virtual void initTextSDL(const std::string &fontPath, std::size_t fontSize) override {};

            /**
             * @brief Get the color of the block
             * @return the color
             */
            Color getColor() const override final;
            /**
             * @brief Get the text of the block
             * @return the text
             */
            std::string &getText() const override final;
            /**
             * @brief Get the text position
             * @return the text position
             */
            std::pair<std::size_t, std::size_t> getTextPosition() const override final;
            /**
             * @brief Get the text SFML
             * @return the text SFML
             */
            virtual sf::Text &getTextSFML() const override {};
            /**
             * @brief Get the text SDL
             * @return the text SDL
             */
            virtual SDL_Texture &getTextSDL() const override {};
        protected:
            /**
             * @brief Construct a new ATextBlock object
             */
            ATextBlock();
        private:
            Color _color;
            std::string _text;
            std::size_t _line;
            std::size_t _column;
    };
}
