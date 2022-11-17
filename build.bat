@echo off

set opts=-FC -GR- -EHa- -nologo -Zi
set code=%cd%
pushd output\
cl %opts% %code%\serve_empyre -Feserve_empyre
popd
