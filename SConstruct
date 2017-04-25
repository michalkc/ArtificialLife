import os
import platform

MSVC14_path = "C:\\Program Files (x86)\\Microsoft Visual Studio 14.0\\VC\\bin\\amd64\\vcvars64.bat"
QT_win_path = "C:\\Qt\\5.8\\msvc2015_64"
if not os.name == "nt":
	QT_linux_path = os.environ['HOME'] + "/Qt5.8.0/5.8/gcc_64"

excluded_files = []
flags_msvc = ["/W4", "/EHsc"]
flags_gcc = ["-Wall", "-std=c++14"]

output_path=""
debug = ARGUMENTS.get('debug', 0)
env = Environment()
env.Append(tools = ["default", "qt5"])
if os.name == "nt":
	if os.path.exists(MSVC14_path) :
		env = Environment(MSVC_USE_SCRIPT = MSVC14_path)
		if int(debug):
			flags_msvc.append("/Debug")
			output_path = "windows/debug/"
		else:
			output_path = "windows/release/"
			
		env.Append(CXXFLAGS = flags_msvc)
		env["QT5DIR"] = QT_win_path
	
elif os.name == "posix":
	if platform.system() == "Linux" or platform.system() == "linux":
		env = Environment(ENV = {'PATH' : os.environ['PATH'], 'HOME' : os.environ['HOME']})
		if int(debug):
			flags_gcc.append("-g")
			output_path = "linux/debug/"
		else:
			output_path = "linux/release/"
		env.Append(CXXFLAGS = flags_gcc)
		env["QT5DIR"] = QT_linux_path
		env['ENV']['PKG_CONFIG_PATH'] = QT_linux_path + "/lib/pkgconfig"
		env.Append(CXXFLAGS=['-fPIC'])
		
env.Append(CPPPATH='include')
env.Append(OBJPREFIX = "../" + output_path)

env.Tool('qt5')
env.EnableQt5Modules(['QtGui', 'QtCore', 'QtWidgets'])

sources = [x for x in Glob('src/*.cc') if str(x) not in excluded_files]
env.Program(target = output_path+'life', source = sources)
env.Ignore(".", excluded_files)