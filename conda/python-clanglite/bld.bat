conda create -n py27 python=2
activate py27
conda install python-scons -c statiskit
scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --toolchain=%TOOLCHAIN%
deactivate py27
python setup.py install
