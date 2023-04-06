/*
** EPITECH PROJECT, 2023
** Error
** File description:
** Error
*/

#include "Error.hpp"

acd::Error::Error()
{
}

acd::Error::~Error()
{
}

const char *acd::Error::ErrorType::what() const noexcept
{
    return (std::strerror(errno));
}

const char *acd::Error::OutOfRange::what() const noexcept
{
    return ("Out of range.");
}

