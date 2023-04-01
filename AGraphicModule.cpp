/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** AGraphicModule
*/

#include "AGraphicModule.hpp"

acd::AGraphicModule::AGraphicModule()
    : _refBlocks(), _inputs()
{

}

acd::Input acd::AGraphicModule::getLatestInput() const
{
    if (_inputs.empty()) {
        return (acd::KEY_NONE);
    }
    return (_inputs.back());
}

void acd::AGraphicModule::setRefBlocks(const std::map<std::string, std::reference_wrapper<IBlock>> &refBlocks)
{
    _refBlocks = refBlocks;
}
