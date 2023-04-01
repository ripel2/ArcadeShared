/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ITextBlock
*/

#pragma once

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
             * @brief Set the color of the block (background)
             * @param color the color
            */
            virtual void setBackColor(Color color) = 0;
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
             * @brief Get the color of the block (background)
             * @return the color
             */
            virtual Color getBackColor() const = 0;
            /**
             * @brief Get the color of the text
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
