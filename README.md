Python Installation (MacOS, Windows, Linux)
MacOs
How to Install Python on macOS Using VS Code

You can use a lot of methods to install Python. In this case with VS Code.

Step 1: In this part you have two options to install python:

Install Python using homebrew, remember it is optional. the command is:

brew install python
check if python is installed whit this:

python3 --version
Install from the official website

image.png

Step 2: Install VSC.

Search VSC in google and click on “download for Mac”
image.png

After that, go to files and choose download and click on it.

image.png

Next to do that, run it and the app will open, when the app will be opening, it show the main panel. (like this)

ZHzst.png

Step 4: After to open VSC you are going to go to “extensions”, you search Python by microsoft and you clikc on it.

image.png

✅ That’s all, you have Python in your MacOS.

Windows
🐍 Install Python in Windows Using VS Code

Step 1: Go to microsoft store and search “Python” or dowload it from the official website.
image.png

Step 2: Search VSC in google and click “download for windows”
image.png

After that, go to your files and choose download and click on it.

image.png

Next to do that, you have to run it and the app will open, when the app will be opening, it show the main panel. (like this)

ZHzst.png

When you enter to VSC, go to “extensions” and find Python

image.png

Finally, install the Microsoft vertion due to that is certiified.

image.png

If you use python in VSC, is necesary to put “.py” at the end.

✅ Great, you already have python in Windows.

Linux
🐍 How to Install Python on Linux

Most Linux distributions come with Python preinstalled. However, if you need a newer version or it's missing, follow these steps based on your distribution.

Step 1: open the terminal you can open with (ctrl+alt+t )
python3 --version
If you see something like Python 3.x.x, Python is already installed. If not, proceed to the next step.

Step 2: you can install Python on Debian, Ubuntu, and Derivatives (Linux Mint, Pop!_OS, etc.)
for that action that is downdoald python on Linux you need to put this in your terminal.

This is for update package lists
sudo apt update && sudo apt upgrade -y
This is for installing python:

sudo apt install python3 -y
In this step you will install the Python packege manager.

sudo apt install python3-pip -y
And finally you need to verify that it has been installed correctly.

python3 --version
Step 3: If you have more than one vertion of python and you want “python” to be the same as “python3” you will do that:

sudo update-alternatives --install /usr/bin/python python /usr/bin/python3 1
Check if this install you need to put this in your terminal:

pip3 install virtualenv
✅ Great, you already have python in Linux, you can now program.

C++ Installation (MacOS, Windows, Linux)
MacOs
Step 1: Check if you have a C++ compiler
Open your terminal and you will put this:

clang --version
Step 2: If you do not have a C++ compiler, you will see how you can install that.

Option 1: You can install Xcode Comand Line Tools, in your terminal you will put:

xcode-select --install
A pop-up window will appear. Click "Install" and wait for the installation to finish and you can verify the installation with this command.

clang --version
Option 2: you can install GCC using Homebrew.
if you do not have homebrew, you can install it like this:

/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
You will install GCC using Homebrew, the command is:

brew install gcc
If you have questions, you can corroborate with this command in your terminal:

g++ --version
Step 3: Finally, if you want to use VSC, it is so easy, you have VSC only you have to install the Extnsion C/C++ by microsoft and create a file but you have to write “cpp” at the end.

Windows
Step 1: You need to install a C++ compiler.

Option 1: Install MinGW-w64, this is recommended for beginners, you can install from the official website, select and download the vertion more recommended.

image.png

Open File Explorer, right-click on This PC → Properties.

Go to Advanced system settings → Environment Variables.

Under System Variables, select Path and click Edit.

Click New and add the path where you installed MinGW, for example:

C:\mingw-w64\bin
Finally you need to verify the installation, when you open your terminal you enter this command:

g++ --version
if you see a GCC version, the compiler was correctly install.

Step 2: If you do not have VSC you can install whit this process:

You need to search VSC in google and click on “download for windows”
image.png

d. After that you are going to go to your files and choose download and click on it.

image.png

c. Next to do that, we run it and the app will open, when the app will be opening, it show the main panel. (like this)

ZHzst.png

Step 3: you have to go to extensions, search C/C++and install by microsoft.

image.png

Step 4: Configure C++ in VS Code. To do that you need to open VS Code and press Ctrl + ~ to open the integrated terminal. Select the compiler pressing Ctrl + Shift + P to open the command:

C/C++: Edit Configurations (UI)}
✅ Done! You can now write and compile C++ programs in Windows using VS Code. 🚀

Linux
Step 1: Check if you have C++ compiler. For that, you got to open your terminal and put this code:

g++ --version
if you have information about g++, you have a c++ compiler, but you dont have g++ information, you have to install a c++ compiler.

Step 2: You can install in diferents operational systems for each one has diferent commands. Run this commands in your terminal.

a. Ubuntu:

sudo apt update && sudo apt install g++ -y
b. Fedora:

sudo dnf install gcc-c++
c. Arch Linux:

sudo pacman -s gcc 
d. OpenSUSE:

sudo zypper install gcc-c++
Verify if it is install and it running.

g++ --version
Step 3: Install VS code to run C++

Ubuntu / Debian

sudo apt install code
Fedora

sudo dnf install code
Arch Linux

sudo pacman -S code
Finally you have to install the extension.

image.png

✅ Done! You can now write and compile C++ programs on Linux easily. 🚀


