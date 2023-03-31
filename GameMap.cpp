/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** GameMap
*/

#include "GameMap.hpp"

acd::GameMap::GameMap(std::size_t lines, std::size_t columns)
    : _grid(), _texts(), _lines(lines), _columns(columns)
{

}

void acd::GameMap::setGrid(const std::vector<std::vector<std::reference_wrapper<IBlock>>> &grid)
{
    _grid = grid;
}

void acd::GameMap::setBlock(std::size_t line, std::size_t column, const IBlock &block)
{
    _grid.at(line).at(column).get() = block;
}

void acd::GameMap::setTexts(const std::map<std::string, ITextBlock> &texts)
{
    _texts = texts;
}

void acd::GameMap::setText(const std::string &name, const ITextBlock &text)
{
    _texts[name] = text;
}
