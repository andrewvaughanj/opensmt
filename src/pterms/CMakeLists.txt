add_library(pterms OBJECT "")

target_sources(pterms
PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/PtStructs.h"
PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/PtStore.h"
PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Pterm.h"
PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/PTRef.h"
PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/PtStore.cc"
PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/Pterm.cc"
PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/PtStructs.cc"
)

install(FILES Pterm.h PtStore.h PTRef.h PtStructs.h DESTINATION ${INSTALL_HEADERS_DIR})

