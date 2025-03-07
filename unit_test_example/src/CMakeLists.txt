target_sources (sort_lib
    PRIVATE
        main.cpp
        shellsort_functions.cpp
    PUBLIC  
        shellsort_functions.hpp
)
target_include_directories (sort_lib PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)
