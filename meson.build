project('Empyre', 'cpp')

src = files('src/ctrl/ControllerBase.cpp', 
                                          'src\models\command\HandlerBase.cpp'
                                          'src\ctrl\AppController.cpp'
                                          'src\proc\AppProcessor.cpp')

processors = files('src\proc\AppProcessor.cpp',)
controllers = files('src\ctrl\AppController.cpp')
# lib = static_library(src)
lib = shared_library('dat', src)
objects_to_extract = [processors, controllers]
eo = lib.extract_objects(objects_to_extract)

progs = [['ctrls', ['src/ctrl/AppController.cpp'],
         ['procs', ['src/proc/AppProcessor.cpp']]]

foreach p : progs
  exe = executable(p[0], p[1])
  test(p[0], exe)
endforeach

executable('app', 'src/main.cpp', objects: eo)