//
///  @file Logging.hpp
///  @author Brandon Young
///  @date 8/22/16
//
//   Copyright © 2016 BlackBoxCommittee. All rights reserved.
//

#pragma once

// C++ includes
#include <cassert>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <sstream>

namespace blackboxmath
{
    namespace Log
    {
        enum class Group
        {
            Vector,
            Matrix,
            Rectangle,
            Utilities
        };

        enum class Type
        {
            Debug,
            Error,
            Assert
        };

        void Print(Type type, Group group, const std::string& message, const std::string& file, uint32_t line);
        bool IsPrinting();
        bool IsBreaking();
        bool IsAsserting();
        const std::string& GetLogFileName();
        std::ofstream& GetLogStream();
        std::string ToString(Group group);
        std::string ToString(Type type);
    }
}

#define bbmLog(t, g, m)                                                                                                                       \
    do                                                                                                                                        \
    {                                                                                                                                         \
        if(blackboxmath::Log::IsPrinting())                                                                                                   \
        {                                                                                                                                     \
            std::stringstream ss;                                                                                                             \
            ss << m;                                                                                                                          \
            blackboxmath::Log::Print(blackboxmath::Log::Type::t, blackboxmath::Log::Group::g, ss.str(), __FILE__, __LINE__);                  \
        }                                                                                                                                     \
        if(blackboxmath::Log::IsBreaking())                                                                                                   \
        {                                                                                                                                     \
            if(blackboxmath::Log::Type::t == blackboxmath::Log::Type::Error || blackboxmath::Log::Type::t == blackboxmath::Log::Type::Assert) \
            {                                                                                                                                 \
                __asm("int $3");                                                                                                              \
            }                                                                                                                                 \
        }                                                                                                                                     \
        if(blackboxmath::Log::IsAsserting())                                                                                                  \
        {                                                                                                                                     \
            if(blackboxmath::Log::Type::t == blackboxmath::Log::Type::Assert)                                                                 \
            {                                                                                                                                 \
                assert(0);                                                                                                                    \
            }                                                                                                                                 \
        }                                                                                                                                     \
    } while(0);
