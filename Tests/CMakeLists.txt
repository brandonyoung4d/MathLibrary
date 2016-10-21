# Creates a new executable meant for testing from a specified cpp file
add_google_test(BlackBoxMathTest BlackBoxMathTest.cpp)
target_link_libraries(BlackBoxMathTest BlackBoxMathLibrary)
