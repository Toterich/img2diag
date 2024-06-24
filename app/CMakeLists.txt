project(img2diagapp)

add_executable(img2diag
    main.cpp
)

target_link_libraries(img2diag PRIVATE opencv_core)