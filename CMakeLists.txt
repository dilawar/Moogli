CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(moogli)
SET(CMAKE_POLICY CMP0017 ON)


# A phony target to setup correct depedencies. This is always out-of-date.
add_custom_target(_moogli_all ALL)

set(MOOGLI_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/moogli)
add_custom_target(_build_moogli ALL
    DEPENDS ${MOOGLI_SRC_DIR}/core/_moogli.so
    )

# Install using python setup.py
FIND_PACKAGE(PythonInterp REQUIRED)
install(CODE
    "EXECUTE_PROCESS(
    COMMAND ${PYTHON_EXECUTABLE} moogli/cmake_modules/setup.py install
        --prefix=${CMAKE_INSTALL_PREFIX}
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        )
    ")

enable_testing()
add_test(NAME moogli_import 
    COMMAND ${PYTHON_EXECUTABLE} -c "import moogli"
    WORKING_DIRECTORY ${MOOGLI_SRC_DIR}/
    )

