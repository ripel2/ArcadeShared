/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu-20.04]
** File description:
** IDisplayModule
*/

#pragma once

#include <cstddef>
#include <utility>
#include "IBlock.hpp"

namespace acd {
    class IDisplayModule {
        public :
            virtual ~IDisplayModule() = 0;
            virtual void init() = 0;
            virtual void stop() = 0;

            virtual void setGridSize(std::size_t lines, std::size_t cols) = 0;
            virtual std::pair<std::size_t, std::size_t> getGridSize() const = 0;
            virtual void setBlocks(IBlock **&blocks) = 0;
            virtual IBlock **&getBlocks() = 0;
            virtual void setBlock(std::size_t line, std::size_t col, IBlock &block) = 0;
            virtual IBlock &getBlock(std::size_t line, std::size_t col) = 0;
    };
}
