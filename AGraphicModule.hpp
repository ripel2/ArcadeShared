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
            Input getLatestInput() const override final;

            /**
             * @brief Set the Ref Blocks object
             * @param refBlocks the ref blocks
             */
            void setRefBlocks(const std::map<std::string, IBlock> &refBlocks) override final;

            /**
             * @brief Get the ref blocks object
             * @return std::map<std::string, IBlock>& the ref blocks
             */
            virtual std::map<std::string, IBlock> &getRefBlocks() const = 0;
            /**
             * @brief Get the ref block object
             * @param name the name of the block
             * @return IBlock& the block
             */
            virtual IBlock &getRefBlock(const std::string &name) const = 0;
        private:
            std::map<std::string, IBlock> _refBlocks;
            std::queue<Input> _inputs;
    };
}
