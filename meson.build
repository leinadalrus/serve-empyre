project('Empyre', 'cpp')

processors = files('src\proc\NLPClassificationProcessor.cpp', 'src\proc\SampleTensorInject.cpp')
controllers = files('src\ctrl\ModuleRoutingComponent.cpp', 'src\ctrl\IndexController.cpp')

src = files(controllers, processors)

# lib = static_library(src)
lib = shared_library('dat', src)
objects_to_extract = [processors, controllers]
eo = lib.extract_objects(objects_to_extract)

progs = [['ctrls', [controllers],
         ['procs', [processors]]]

foreach p : progs
  exe = executable(p[0], p[1])
  test(p[0], exe)
endforeach

executable('app', progs, objects: eo)