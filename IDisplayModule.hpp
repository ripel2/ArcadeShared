/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu-20.04]
** File description:
** IDisplayModule
*/

#pragma once

#include <cstddef>
#include <utility>
#include <string>

#include "Block.hpp"
#include "TextBlock.hpp"
#include "Inputs.hpp"

namespace acd {
    class IDisplayModule {
        public :
            /**
             * @brief Destructor of the display module
            */
            virtual ~IDisplayModule() = 0;
            /**
             * @brief Initialize the display module
            */
            virtual void init() = 0;
            /**
             * @brief Stop the display module
            */
            virtual void stop() = 0;
            /**
             * @brief Set the grid size of the display module
             * @param lines The number of lines
             * @param cols The number of columns
            */
            virtual void setGridSize(std::size_t lines, std::size_t cols) = 0;
            /**
             * @brief Get the grid size of the display module
             * @return A pair containing the number of lines and the number of columns
            */
            virtual std::pair<std::size_t, std::size_t> getGridSize() const = 0;
            /**
             * @brief Set the list of blocks of the display module
             * @param blocks The list of blocks
            */
            virtual void setBlocks(Block **&blocks) = 0;
            /**
             * @brief Get the list of blocks of the display module
             * @return The list of blocks
            */
            virtual Block **&getBlocks() = 0;
            /**
             * @brief Set all the blocks of the display module to black
            */
            virtual void clearBlocks() = 0;
            /**
             * @brief Remove all the blocks of the display module
            */
            virtual void removeBlocks() = 0;
            /**
             * @brief Set a block of the display module
             * @param line The line of the block
             * @param col The column of the block
             * @param block The block
            */
            virtual void setBlock(std::size_t line, std::size_t col, Block &block) = 0;
            /**
             * @brief Get a block of the display module
             * @param line The line of the block
             * @param col The column of the block
             * @return The block
            */
            virtual Block &getBlock(std::size_t line, std::size_t col) = 0;
            /**
             * @brief Clears a block of the display module
             * @param line The line of the block
             * @param col The column of the block
            */
            virtual void clearBlock(std::size_t line, std::size_t col) = 0;
            /**
             * @brief Adds a text block to the display module
             * @param name The name of the text block
             * @param textBlock The text block to add
            */
            virtual void addTextBlock(const std::string &name, TextBlock &textBlock) = 0;
            /**
             * @brief Gets a text block from the display module
             * @param name The name of the text block to get
            */
            virtual TextBlock &getTextBlock(const std::string &name) = 0;
            /**
             * @brief Removes a text block from the display module
             * @param name The name of the text block to remove
            */
            virtual void removeTextBlock(const std::string &name) = 0;
            /**
             * @brief Removes all the text blocks of the display module
            */
            virtual void removeTextBlocks() = 0;
            /**
             * @brief Get the input of the display module
             * @return The input of the display module
            */
            virtual Input getInput() = 0;
            /**
             * @brief Display the display module
            */
            virtual void display() = 0;
            /**
             * @brief Get latest keyboard input
             * @return The latest keyboard input
             */
            virtual Input getLatestKeyboardInput() = 0;
    };
}
