zephyr_library()
zephyr_library_sources(trackball.c)
zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
zephyr_library_include_directories(${ZEPHYR_BASE}/drivers)
