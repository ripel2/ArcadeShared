/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** TextBlock
*/

#pragma once

#include <string>
#include <utility>

#include "Colors.hpp"

namespace acd {
    class TextBlock {
        public:
            /**
             * @brief Construct a new TextBlock object
             */
            TextBlock()
                : _foreColor(Color::WHITE), _backColor(Color::WHITE), _text(""), _line(0), _column(0)
            {};
            /**
             * @brief Destroy the TextBlock object
             */
            ~TextBlock() = default;

            /**
             * @brief Set the color of the block (background)
             * @param color the color
             */
            void setBackColor(Color color)
            {
                _backColor = color;
            };
            /**
             * @brief Set the color of the block
             * @param color the color
             */
            void setColor(Color color)
            {
                _foreColor = color;
            };
            /**
             * @brief Set the text of the block
             * @param text the text
             */
            void setText(const std::string &text)
            {
                _text = text;
            };
            /**
             * @brief Set the text position
             * @param line the line
             * @param column the column
             */
            void setTextPosition(std::size_t line, std::size_t column)
            {
                _line = line;
                _column = column;
            }
            Color getBackColor() const
            {
                return (_backColor);
            }
            /**
             * @brief Get the color of the block
             * @return the color
             */
            Color getColor() const
            {
                return (_foreColor);
            }
            /**
             * @brief Get the text of the block
             * @return the text
             */
            const std::string &getText() const
            {
                return (_text);
            }
            /**
             * @brief Get the text position
             * @return the text position
             */
            std::pair<std::size_t, std::size_t> getTextPosition() const
            {
                return (std::make_pair(_line, _column));
            }
        private:
            Color _foreColor;
            Color _backColor;
            std::string _text;
            std::size_t _line;
            std::size_t _column;
    };
}
