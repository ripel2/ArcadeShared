/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ITextBlock
*/

#pragma once

#include <cstddef>
#include <string>
#include <utility>

#include "Colors.hpp"

namespace acd {
    class ITextBlock {
        public:
            /**
             * @brief Destructor of the text block
            */
            virtual ~ITextBlock() = 0;
            /**
             * @brief Set the position of the text block
            */
            virtual void setPosition(std::size_t line, std::size_t col) = 0;
            /**
             * @brief Get the position of the text block
             * @return A pair containing the line and the column
            */
            virtual std::pair<std::size_t, std::size_t> getPosition() const = 0;
            /**
             * @brief Set the text of the text block
             * @param text The text of the text block
            */
            virtual void setText(const std::string &text) = 0;
            /**
             * @brief Get the text of the text block
             * @return The text of the text block
            */
            virtual std::string getText() const = 0;
            /**
             * @brief Set the color of the text block foreground
             * @param color The color of the text block foreground
            */
            virtual void setForeColor(Color color) = 0;
            /**
             * @brief Get the color of the text block foreground
             * @return The color of the text block foreground
            */
            virtual Color getForeColor() const = 0;
            /**
             * @brief Set the color of the text block background
             * @param color The color of the text block background
            */
            virtual void setBackColor(Color color) = 0;
            /**
             * @brief Get the color of the text block background
             * @return The color of the text block background
            */
            virtual Color getBackColor() const = 0;
        protected:
        private:
    };
}
