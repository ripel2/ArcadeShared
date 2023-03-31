/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** ATextBlock
*/

#include "ATextBlock.hpp"

void acd::ATextBlock::setColor(acd::Color color)
{
    _color = color;
}

void acd::ATextBlock::setText(const std::string &text)
{
    _text = text;
}

void acd::ATextBlock::setTextPosition(std::size_t line, std::size_t column)
{
    _line = line;
    _column = column;
}

acd::Color acd::ATextBlock::getColor() const
{
    return (_color);
}

const std::string &acd::ATextBlock::getText() const
{
    return (std::ref(_text));
}

std::pair<std::size_t, std::size_t> acd::ATextBlock::getTextPosition() const
{
    return (std::make_pair(_line, _column));
}
