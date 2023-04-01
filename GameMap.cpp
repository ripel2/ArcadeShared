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

void acd::GameMap::setText(const std::string &name, const ITextBlock &text)
{
    _texts.at(name).get() = text;
}

void acd::GameMap::setSize(std::size_t lines, std::size_t columns)
{
    _lines = lines;
    _columns = columns;
}

const std::vector<std::vector<std::reference_wrapper<acd::IBlock>>> &acd::GameMap::getGrid() const
{
    return _grid;
}

std::pair<std::size_t, std::size_t> acd::GameMap::getSize() const
{
    return std::make_pair(_lines, _columns);
}

acd::IBlock &acd::GameMap::getBlock(std::size_t line, std::size_t column) const
{
    return _grid.at(line).at(column).get();
}

acd::ITextBlock &acd::GameMap::getText(const std::string &name) const
{
    return _texts.at(name).get();
}

void acd::GameMap::removeText(const std::string &name)
{
    _texts.erase(name);
}
