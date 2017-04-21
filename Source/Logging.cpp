//
///  @file Logging.cpp
///  @author Brandon Young
///  @date 8/22/16
//
///  @brief Example text
//
//   Copyright © 2016 BlackBoxCommittee. All rights reserved.
//

#include "Logging.hpp"

static bool _isPrinting = true;
static bool _isBreaking = true;
static bool _isAsserting = true;
static const std::string _logFileName = "Log.txt";
static std::ofstream _logFile = std::ofstream();

void blackboxmath::Log::Print(Type type, Group group, const std::string& message, const std::string& file, uint32_t line)
{
    std::stringstream finalMessage;
    finalMessage << "[" << ToString(type) << " " << ToString(group) << " ";
    if(!file.empty())
    {
        finalMessage << file.substr(file.find_last_of('/') + 1) << " ";
    }
    finalMessage << line << "] : " << message;

    std::cout << finalMessage.str() << std::endl;
    if(GetLogStream().is_open())
    {
        GetLogStream() << finalMessage.str() << std::endl;
    }
}

bool blackboxmath::Log::IsPrinting()
{
    return _isPrinting;
}

bool blackboxmath::Log::IsBreaking()
{
    return _isBreaking;
}

bool blackboxmath::Log::IsAsserting()
{
    return _isAsserting;
}

const std::string& GetLogFileName()
{
    return _logFileName;
}

std::ofstream& blackboxmath::Log::GetLogStream()
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wexit-time-destructors"
    if(not _logFile.is_open())
    {
        _logFile.open(GetLogFileName());
    }
    return _logFile;
#pragma clang diagnostic pop
}

std::string blackboxmath::Log::ToString(Group group)
{
    switch(group)
    {
    case blackboxmath::Log::Group::Vector:
        return "Vector";
    case blackboxmath::Log::Group::Matrix:
        return "Matrix";
    case blackboxmath::Log::Group::Rectangle:
        return "Rectangle";
    case blackboxmath::Log::Group::Utilities:
        return "Utilities";
    }
    return "";
}

std::string blackboxmath::Log::ToString(Type type)
{
    switch(type)
    {
    case blackboxmath::Log::Type::Debug:
        return "Debug";
    case blackboxmath::Log::Type::Error:
        return "Error";
    case blackboxmath::Log::Type::Assert:
        return "Assert";
    }
    return "";
}
