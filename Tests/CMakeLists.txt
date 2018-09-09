# Creates a new executable meant for testing from a specified cpp file
add_google_test(Vector2fTest Vector2fTest.cpp)
target_link_libraries(Vector2fTest BlackBoxMathLibrary)
set_property(TARGET Vector2fTest PROPERTY CXX_STANDARD 14)

add_google_test(Vector3fTest Vector3fTest.cpp)
target_link_libraries(Vector3fTest BlackBoxMathLibrary)
set_property(TARGET Vector3fTest PROPERTY CXX_STANDARD 14)

add_google_test(Vector4fTest Vector4fTest.cpp)
target_link_libraries(Vector4fTest BlackBoxMathLibrary)
set_property(TARGET Vector4fTest PROPERTY CXX_STANDARD 14)

add_google_test(Vector4bTest Vector4bTest.cpp)
target_link_libraries(Vector4bTest BlackBoxMathLibrary)
set_property(TARGET Vector4bTest PROPERTY CXX_STANDARD 14)
