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

namespace bbm {
enum class LogGroup {
  Vector,
  Matrix,
  Rectangle,
  Utilities,
};

enum class LogType {
  Debug,
  Error,
  Assert,
};

std::string ToString(LogGroup group);
std::string ToString(LogType type);

/// Basic logging system that uses a static instance to allow global project
/// logging.
class LogSystem {
public: // Functions.
  // Singleton functions.
  static LogSystem &Get();

  // Print functions.
  void Print(LogType type, LogGroup group, const std::string &message,
             const std::string &fileName, uint32_t line);

  // Question functions.
  bool IsPrinting() const;
  bool IsBreaking() const;
  bool IsAsserting() const;

private: // Functions
  // Constructors.
  LogSystem();
  LogSystem(const LogSystem &logSystem) = delete;

  // Operators.
  void operator=(const LogSystem &logSystem) = delete;

private: // Variables.
  bool _isPrinting = true;
  bool _isBreaking = true;
  bool _isAsserting = true;
  std::string _logFileName = "Log.txt";
  std::ofstream _logFile = std::ofstream();
};

} // namespace bbm

#define bbmLog(t, g, m)                                                        \
  do {                                                                         \
    if (bbm::LogSystem::Get().IsPrinting()) {                                  \
      std::stringstream ss;                                                    \
      ss << m;                                                                 \
      bbm::LogSystem::Get().Print(bbm::LogType::t, bbm::LogGroup::g, ss.str(), \
                                  __FILE__, __LINE__);                         \
    }                                                                          \
    if (bbm::LogSystem::Get().IsBreaking()) {                                  \
      if (bbm::LogType::t == bbm::LogType::Error ||                            \
          bbm::LogType::t == bbm::LogType::Assert) {                           \
        __asm("int $3");                                                       \
      }                                                                        \
    }                                                                          \
    if (bbm::LogSystem::Get().IsAsserting()) {                                 \
      if (bbm::LogType::t == bbm::LogType::Assert) {                           \
        assert(0);                                                             \
      }                                                                        \
    }                                                                          \
  } while (0);
