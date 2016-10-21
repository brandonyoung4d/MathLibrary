#include "Source/BlackBoxMath.hpp"

// C++ includes
#include <string>

// Library includes
#include <gmock/gmock.h>
#include <gtest/gtest.h>

class ToDoTest : public testing::Test
{
protected:
    ToDoTest(){}
    ~ToDoTest(){}

    virtual void SetUp()
    {
    }
    virtual void TearDown()
    {
    }

    bbm::ToDo list;

    static const size_t taskCount = 3;
    static const std::string tasks[taskCount];
};

const std::string ToDoTest::tasks[taskCount] = {"write code", "compile", "test"};

TEST_F(ToDoTest, constructor_createsEmptyList)
{
    EXPECT_THAT(list.size(), testing::Eq(size_t(0)));
}

TEST_F(ToDoTest, addTask_threeTimes_sizeIsThree)
{
    list.addTask(tasks[0]);
    list.addTask(tasks[1]);
    list.addTask(tasks[2]);

    EXPECT_THAT(list.size(), testing::Eq(taskCount));
}

TEST_F(ToDoTest, getTask_withOneTask_returnsCorrectString)
{
    list.addTask(tasks[0]);

    ASSERT_THAT(list.size(),     testing::Eq(size_t(1)));
    EXPECT_THAT(list.getTask(0), testing::Eq(tasks[0]));
}

TEST_F(ToDoTest, getTask_withThreeTasts_returnsCorrectStringForEachIndex)
{
    list.addTask(tasks[0]);
    list.addTask(tasks[1]);
    list.addTask(tasks[2]);

    ASSERT_THAT(list.size(),     testing::Eq(taskCount));
    EXPECT_THAT(list.getTask(0), testing::Eq(tasks[0]));
    EXPECT_THAT(list.getTask(1), testing::Eq(tasks[1]));
    EXPECT_THAT(list.getTask(2), testing::Eq(tasks[2]));
}
