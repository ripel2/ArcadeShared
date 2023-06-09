/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** AGraphicModule
*/

#include "AGraphicModule.hpp"

acd::AGraphicModule::AGraphicModule()
    : _inputs()
{

}

void acd::AGraphicModule::addInput(acd::Input input)
{
    _inputs.push(input);
}

acd::Input acd::AGraphicModule::getLatestInput()
{
    if (_inputs.empty()) {
        return (acd::KEY__NONE);
    }
    Input input = _inputs.front();
    _inputs.pop();
    return (input);
}
