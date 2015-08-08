incs = include_directories('include')

libsub = static_library('sub', 'src/sub.c', include_directories : incs)

libsub_dep = declare_dependency(include_directories : incs,
    link_with : libsub)
