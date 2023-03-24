/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu-20.04]
** File description:
** Block
*/

#pragma once

#include <string>

#include "Colors.hpp"

namespace acd {
    class Block {
        public:
            /**
             * @brief Construct a new Block object
             * @param foreColor The color of the block foreground
             * @param backColor The color of the block background
             * @param text The text of the block (for terminal display)
             * @param texturePath The path of the texture to display (for graphical display)
            */
            Block(Color foreColor = Color::WHITE, Color backColor = Color::BLACK, const char *text = "  ", const std::string &texturePath = "");
            /**
             * @brief Destructor of the block
            */
            ~Block();
            /**
             * @brief Set the color of the block foreground
            */
            void setForeColor(Color color);
            /**
             * @brief Get the color of the block foreground
             * @return The color of the block
            */
            Color getForeColor() const;
            /**
             * @brief Set the color of the block background
            */
            void setBackColor(Color color);
            /**
             * @brief Get the color of the block background
             * @return The color of the block
            */
            Color getBackColor() const;
            /**
             * @brief Set the text of the block (for terminal display)
            */
            void setText(const char *text);
            /**
             * @brief Get the text of the block (for terminal display)
             * @return The text of the block
            */
            const char *getText() const;
            /**
             * @brief Set the path of the texture to display (for graphical display)
             * @param path The path of the texture
            */
            void setTexturePath(const std::string &path);
            /**
             * @brief Get the path of the texture to display (for graphical display)
             * @return The path of the texture
            */
            const std::string &getTexturePath() const;
        protected:
        private:
            Color _foreColor;
            Color _backColor;
            const char _text[2];
            std::string _texturePath;
    };
}
