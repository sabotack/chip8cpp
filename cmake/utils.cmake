include_guard()

##########################################

function(silence_deprecation_warnings)
    set(CMAKE_WARN_DEPRECATED_OLD ${CMAKE_WARN_DEPRECATED} PARENT_SCOPE)
    set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "" FORCE)
endfunction()

##########################################

function(restore_deprecation_warnings)
    set(CMAKE_WARN_DEPRECATED ${CMAKE_WARN_DEPRECATED_OLD} CACHE BOOL "" FORCE)
endfunction()

##########################################