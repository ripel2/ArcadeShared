/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** IGraphicModule
*/

#pragma once

#include <string>
#include <queue>

#include "Block.hpp"
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
            virtual Input getLatestInput() = 0;
            /**
             * @brief Add an input to the queue
             * @param input the input
            */
            virtual void addInput(Input input) = 0;
    };
}
