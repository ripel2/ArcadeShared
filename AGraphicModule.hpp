/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu]
** File description:
** AGraphicModule
*/

#pragma once

#include "IGraphicModule.hpp"

namespace acd {
    class AGraphicModule : public IGraphicModule {
        public:
            /**
             * @brief Construct a new AGraphicModule object
             */
            AGraphicModule();
            /**
             * @brief Destroy the AGraphicModule object
             */
            virtual ~AGraphicModule() = default;

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
            Input getLatestInput() override;
            /**
             * @brief Add an input to the queue
             * @param input the input
            */
            void addInput(Input input) override;
        private:
            std::queue<Input> _inputs;
    };
}
