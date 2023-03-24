/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** TextBlock
*/

#pragma once

#include <cstddef>
#include <string>
#include <utility>

#include "Colors.hpp"

namespace acd {
    class TextBlock {
        public:
            /**
             * @brief Construct a new Text Block object
             * @param line The line of the text block
             * @param col The column of the text block
             * @param text The text of the text block
             * @param foreColor The color of the text block foreground
             * @param backColor The color of the text block background
            */
            TextBlock(std::size_t line, std::size_t col, const std::string &text, Color foreColor = Color::WHITE, Color backColor = Color::BLACK);
            /**
             * @brief Destructor of the text block
            */
            ~TextBlock();
            /**
             * @brief Set the position of the text block
            */
            void setPosition(std::size_t line, std::size_t col);
            /**
             * @brief Get the position of the text block
             * @return A pair containing the line and the column
            */
            std::pair<std::size_t, std::size_t> getPosition() const;
            /**
             * @brief Set the text of the text block
             * @param text The text of the text block
            */
            void setText(const std::string &text);
            /**
             * @brief Get the text of the text block
             * @return The text of the text block
            */
            std::string getText() const;
            /**
             * @brief Set the color of the text block foreground
             * @param color The color of the text block foreground
            */
            void setForeColor(Color color);
            /**
             * @brief Get the color of the text block foreground
             * @return The color of the text block foreground
            */
            Color getForeColor() const;
            /**
             * @brief Set the color of the text block background
             * @param color The color of the text block background
            */
            void setBackColor(Color color);
            /**
             * @brief Get the color of the text block background
             * @return The color of the text block background
            */
            Color getBackColor() const;
        protected:
        private:
            std::size_t _line;
            std::size_t _col;
            std::string _text;
            Color _foreColor;
            Color _backColor;
    };
}
