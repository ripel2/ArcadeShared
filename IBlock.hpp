/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu-20.04]
** File description:
** IBlock
*/

#pragma once

#include "Colors.hpp"

namespace acd {
    class IBlock {
        public:
            /**
             * @brief Destructor of the block
            */
            virtual ~IBlock() = 0;
            /**
             * @brief Set the color of the block foreground
            */
            virtual void setForeColor(Color color) = 0;
            /**
             * @brief Get the color of the block foreground
             * @return The color of the block
            */
            virtual Color getForeColor() const = 0;
            /**
             * @brief Set the color of the block background
            */
            virtual void setBackColor(Color color) = 0;
            /**
             * @brief Get the color of the block background
             * @return The color of the block
            */
            virtual Color getBackColor() const = 0;
            /**
             * @brief Set the text of the block (for terminal display)
            */
            virtual void setText(const char *text) = 0;
            /**
             * @brief Get the text of the block (for terminal display)
             * @return The text of the block
            */
            virtual const char *getText() const = 0;
            /**
             * @brief Set the path of the texture to display (for graphical display)
             * @param path The path of the texture
            */
            virtual void setTexturePath(const char *path) = 0;
            /**
             * @brief Get the path of the texture to display (for graphical display)
             * @return The path of the texture
            */
            virtual const char *getTexturePath() const = 0;
        protected:
        private:
    };
}
