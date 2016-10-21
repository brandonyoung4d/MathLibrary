#include "BlackBoxMath.hpp"

bbm::ToDo::ToDo()
{
}

bbm::ToDo::~ToDo()
{
}

size_t bbm::ToDo::size() const
{
    return this_tasks.size();
}

void bbm::ToDo::addTask(const std::string& task)
{
    this_tasks.push_back(task);
}

std::string bbm::ToDo::getTask(size_t index) const
{
    if (index < this_tasks.size())
    {
        return this_tasks[index];
    }
    else
    {
        return "";
    }
}
