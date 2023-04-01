/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** IGraphicModule
*/

#pragma once

#include <string>
#include <queue>

#include "IBlock.hpp"
#include "Inputs.hpp"
#include "GameMap.hpp"

namespace acd {
    class IGraphicModule {
        public:
            /**
             * @brief Destroy the IGraphicModule object
             */
            virtual ~IGraphicModule() = default;

            /**
             * @brief Display the game
             * @param map the map
             */
            virtual void display(GameMap const &map) = 0;
            /**
             * @brief Get the Users Inputs
             */
            virtual void getInputs() = 0;
            /**
             * @brief Get the Latest Input object
             * @return Input the latest input
             */
            virtual Input getLatestInput() const = 0;

            /**
             * @brief Set the Ref Blocks object
             * @param refBlocks the ref blocks
             */
            virtual void setRefBlocks(const std::map<std::string, std::reference_wrapper<IBlock>> &refBlocks) = 0;

            /**
             * @brief Get the ref blocks object
             * @return std::map<std::string, IBlock>& the ref blocks
             */
            virtual const std::map<std::string, std::reference_wrapper<IBlock>> &getRefBlocks() const = 0;
            /**
             * @brief Get the ref block object
             * @param name the name of the block
             * @return IBlock& the block
             */
            virtual IBlock &getRefBlock(const std::string &name) const = 0;
    };
}
