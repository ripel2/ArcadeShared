/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** GameMap
*/

#pragma once

#include <utility>
#include <map>
#include <functional>

#include "Block.hpp"
#include "TextBlock.hpp"

namespace acd {
    class GameMap {
        public:
            /**
             * @brief Construct a new Game Map object
             *
             * @param lines the number of lines
             * @param columns the number of columns
             */
            GameMap(std::size_t lines, std::size_t columns);
            /**
             * @brief Destroy the Game Map object
             *
             */
            ~GameMap() = default;

            /**
             * @brief Set one block of the grid
             * @param line the line
             * @param column the column
             * @param block the block
            */
            void setBlock(std::size_t line, std::size_t column, const Block &block);
            /**
             * @brief Set one text
             * @param name the name of the text
             * @param text the text
             */
            void setText(const std::string &name, const TextBlock &text);
            /**
             * @brief Set the grid size
             * @param lines the number of lines
             * @param columns the number of columns
             */
            void setSize(std::size_t lines, std::size_t columns);

            /**
             * @brief Get the texts
             * @return std::map<std::string, std::reference_wrapper<TextBlock>> & the texts
            */
            const std::map<std::string, std::reference_wrapper<TextBlock>> &getTexts() const;
            /**
             * @brief Get the grid
             * @return std::map<std::pair<std::size_t, std::size_t>, std::reference_wrapper<Block>> & the grid
             */
            const std::map<std::pair<std::size_t, std::size_t>, std::reference_wrapper<Block>> &getGrid() const;
            /**
             * @brief Get one block of the grid
             * @param line the line
             * @param column the column
             * @return Block & the block
             */
            Block &getBlock(std::size_t line, std::size_t column) const;
            /**
             * @brief Get one text
             * @param name the name of the text
             * @return TextBlock & the text
             */
            TextBlock &getText(const std::string &name) const;
            /**
             * @brief Get the grid size
             * @return std::pair<std::size_t, std::size_t> & the size
             */
            std::pair<std::size_t, std::size_t> getSize() const;
            /**
             * @brief Remove one block of the grid
             * @param line the line
             * @param column the column
             */
            void removeBlock(std::size_t line, std::size_t column);
            /**
             * @brief Remove one text
             * @param name the name of the text
             */
            void removeText(const std::string &name);
        private:
            std::map<std::pair<std::size_t, std::size_t>, std::reference_wrapper<Block>> _grid;
            std::map<std::string, std::reference_wrapper<TextBlock>> _texts;
            std::size_t _lines;
            std::size_t _columns;
    };
}
