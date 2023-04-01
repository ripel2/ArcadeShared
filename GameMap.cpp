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

void acd::GameMap::setBlock(std::size_t line, std::size_t column, const IBlock &block)
{
    std::pair<std::size_t, std::size_t> pos = std::make_pair(line, column);

    if (_grid.find(pos) == _grid.end()) {
        _grid.insert(std::make_pair(pos, std::ref(const_cast<IBlock &>(block))));
    } else {
        _grid.at(pos).get() = block;
    }
}

void acd::GameMap::setText(const std::string &name, const ITextBlock &text)
{
    if (_texts.find(name) == _texts.end()) {
        _texts.insert(std::make_pair(name, std::ref(const_cast<ITextBlock &>(text))));
    } else {
        _texts.at(name).get() = text;
    }
}

void acd::GameMap::setSize(std::size_t lines, std::size_t columns)
{
    _lines = lines;
    _columns = columns;
}

const std::map<std::string, std::reference_wrapper<acd::ITextBlock>> &acd::GameMap::getTexts() const
{
    return _texts;
}

const std::map<std::pair<std::size_t, std::size_t>, std::reference_wrapper<acd::IBlock>> &acd::GameMap::getGrid() const
{
    return _grid;
}

std::pair<std::size_t, std::size_t> acd::GameMap::getSize() const
{
    return std::make_pair(_lines, _columns);
}

acd::IBlock &acd::GameMap::getBlock(std::size_t line, std::size_t column) const
{
    std::pair<std::size_t, std::size_t> pos = std::make_pair(line, column);

    return _grid.at(pos).get();
}

acd::ITextBlock &acd::GameMap::getText(const std::string &name) const
{
    return _texts.at(name).get();
}

void acd::GameMap::removeText(const std::string &name)
{
    _texts.erase(name);
}
