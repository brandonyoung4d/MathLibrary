//
///  @file Logging.cpp
///  @author Brandon Young
///  @date 8/22/16
//
///  @brief Example text
//
//   Copyright © 2016 BlackBoxCommittee. All rights reserved.
//

// Header include.
#include "LogSystem.hpp"

#define CASE(ENUM)    \
    case bbm::ENUM:   \
    {                 \
        return #ENUM; \
        break;        \
    }

namespace bbm
{
std::string ToString(LogGroup group)
{
    switch(group)
    {
        CASE(LogGroup::Vector);
        CASE(LogGroup::Matrix);
        CASE(LogGroup::Rectangle);
        CASE(LogGroup::Utilities);
    }
    return "";
}

std::string ToString(LogType type)
{
    switch(type)
    {
        CASE(LogType::Debug);
        CASE(LogType::Error);
        CASE(LogType::Assert);
    }
    return "";
}

LogSystem::LogSystem() { _logFile.open(_logFileName); }

LogSystem& LogSystem::Get()
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wexit-time-destructors"
    static LogSystem logSystem;
    return logSystem;
#pragma clang diagnostic pop
}

void LogSystem::Print(LogType type, LogGroup group, const std::string& message,
    const std::string& fileName, uint32_t line)
{
    // Format the output message.
    std::stringstream formattedMessage;
    formattedMessage << "[" << ToString(type) << " " << ToString(group) << " ";
    if(not fileName.empty())
    {
        formattedMessage << fileName.substr(fileName.find_last_of('/') + 1) << " ";
    }
    formattedMessage << line << "] : " << message;

    // Send formatted message to the console and file.
    std::cout << formattedMessage.str() << std::endl;
    if(_logFile.is_open())
    {
        _logFile << formattedMessage.str() << std::endl;
    }
}

bool LogSystem::IsPrinting() const { return _isPrinting; }

bool LogSystem::IsBreaking() const { return _isBreaking; }

bool LogSystem::IsAsserting() const { return _isAsserting; }
}
