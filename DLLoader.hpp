/*
** EPITECH PROJECT, 2023
** ArcadeShared [WSL : Ubuntu-20.04]
** File description:
** DLLoader
*/

#pragma once

#include <dlfcn.h>
#include <iostream>
#include <memory>
#include <exception>

namespace acd {
    template<typename T>
    class DLLoader {
        public:
            DLLoader(const std::string &path)
            : _handle(dlopen(path.c_str(), RTLD_LAZY)) {
            if (!_handle) {
                throw Error("Cannot load library: " + std::string(dlerror()));
            }
            _entrypoint = reinterpret_cast<std::unique_ptr<T> (*)()>(dlsym(_handle, "entrypoint"));
            if (!_entrypoint) {
                dlclose(_handle);
                throw Error("Cannot load symbol entrypoint: " + std::string(dlerror()));
            }
        }
            ~DLLoader() {dlclose(_handle);};
            std::unique_ptr<T> getInstance() const {return _entrypoint();};
            class Error : public std::exception {
                public:
                    Error(const std::string &message) : _message(message) {};
                    const char *what() const noexcept override {return _message.c_str();};
                private:
                    std::string _message;
            };
        private:
            void *_handle;
            std::unique_ptr<T> (*_entrypoint)(void);
    };
}

