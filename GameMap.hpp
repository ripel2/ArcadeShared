/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** GameMap
*/

#pragma once

#include <pair>

#include "IBlock.hpp"
#include "ITextBlock.hpp"

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
             * @brief Set the grid
             * @param grid the grid
             */
            void setGrid(const std::vector<std::vector<std::reference_wrapper<IBlock>>> &grid);
            /**
             * @brief Set one block of the grid
             * @param line the line
             * @param column the column
             * @param block the block
            */
            void setBlock(std::size_t line, std::size_t column, const IBlock &block);
            /**
             * @brief Set the texts
             * @param texts the texts
             */
            void setTexts(const std::map<std::string, ITextBlock> &texts);
            /**
             * @brief Set one text
             * @param name the name of the text
             * @param text the text
             */
            void setText(const std::string &name, const ITextBlock &text);
            /**
             * @brief Set the grid size
             * @param lines the number of lines
             * @param columns the number of columns
             */
            void setSize(std::size_t lines, std::size_t columns);

            /**
             * @brief Get the grid
             * @return std::vector<std::vector<std::reference_wrapper<IBlock>>> & the grid
             */
            std::vector<std::vector<std::reference_wrapper<IBlock>>> &getGrid() const;
            /**
             * @brief Get one block of the grid
             * @param line the line
             * @param column the column
             * @return IBlock & the block
             */
            IBlock &getBlock(std::size_t line, std::size_t column) const;
            /**
             * @brief Get the texts
             * @return std::map<std::string, ITextBlock> & the texts
             */
            std::map<std::string, ITextBlock> &getTexts() const;
            /**
             * @brief Get one text
             * @param name the name of the text
             * @return ITextBlock & the text
             */
            ITextBlock &getText(const std::string &name) const;
            /**
             * @brief Get the grid size
             * @return std::pair<std::size_t, std::size_t> & the size
             */
            std::pair<std::size_t, std::size_t> &getSize() const;

            /**
             * @brief Remove one text
             * @param name the name of the text
             */
            void removeText(const std::string &name);
        private:
            std::vector<std::vector<std::reference_wrapper<IBlock>>> _grid;
            std::map<std::string, ITextBlock> _texts;
            std::size_t _lines;
            std::size_t _columns;
    };
}
