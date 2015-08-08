incs = include_directories('include')

libadd = static_library('add', 'src/add.c', include_directories : incs)

libadd_dep = declare_dependency(include_directories : incs,
    link_with : libadd)
