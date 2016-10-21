#ifndef BLACKBOXMATH_H
#define BLACKBOXMATH_H

// C++ includes
#include <string>
#include <vector>

namespace bbm
{
    class ToDo
    {
    public:
        ToDo();
        ~ToDo();

        size_t size() const;

        void addTask(const std::string& task);
        std::string getTask(size_t index) const;

    private:
        std::vector< std::string > this_tasks;
    };
}

#endif // BLACKBOXMATH_H
