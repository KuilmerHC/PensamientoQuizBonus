- Instructions to run the program (Windows, Linux, MacOS
    - MacOs
        - **Step 1**:  Check if you have a C++ compiler
        
        Open your terminal and you will put this: 
        
        ```cpp
        clang --version
        ```
        
        - **Step 2:** If you do not have a C++ compiler, you will see how you can install that.
            1. Option 1: You can install Xcode Comand Line Tools, in your terminal you will put:
                
                ```cpp
                xcode-select --install
                ```
                
            
            A pop-up window will appear. Click **"Install"** and wait for the installation to finish and you can verify the installation with this command.
            
            ```cpp
            clang --version
            ```
            
            1. Option 2: you can install GCC using Homebrew. 
            
            if you do not have homebrew, you can install it like this:
            
            ```cpp
            /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
            
            ```
            
            Install GCC using Homebrew, the command is: 
            
            ```cpp
            brew install gcc
            ```
            
            If you have questions, you can corroborate with this command in your terminal: 
            
            ```cpp
            g++ --version
            ```
            
        - **Step 3:** Finally, if you want to use VSC, it is so easy, you have VSC only you have to install the Extnsion  C/C++ by microsoft and create a file but you have to write “cpp” at the end.
    - Windows
        - **Step 1**: You need to install a C++ compiler.
            1. Option 1: Install MinGW-w64, this is recommended for beginners, you can install from the official website, select and download the vertion more recommended.
                
               ![image_1](https://github.com/KuilmerHC/PensamientoQuizBonus/blob/927c49d8787641c442d41298990600b9060ad7a6/imagenes/img%201.png?raw=true)
                
                - Open **File Explorer**, right-click on **This PC** → **Properties**.
                - Go to **Advanced system settings** → **Environment Variables**.
                - Under **System Variables**, select `Path` and click **Edit**.
                - Click **New** and add the path where you installed MinGW, for example:
                    
                    ```cpp
                    C:\mingw-w64\bin
                    ```
                    
                
                Finally you need to verify the installation, when you open your terminal you enter this command: 
                
                ```cpp
                g++ --version
                ```
                
                if you see a GCC version, the compiler was correctly install.
                
        - **Step 2:** If you do not have VSC you can install whit this process:
            1. You need to search VSC in google and click on “download for windows”
            
           link
            
            d. After that you are going to go to your files and choose download and click on it.
            
            ![image_2](https://github.com/user-attachments/assets/229afedc-2d13-4aa3-8cef-669fd66f13b8)

            
            c. Next to do that, we run it and the app will open, when the app will be opening, it  show the main panel. (like this)
            
            ![image_3](https://github.com/user-attachments/assets/7fd57eff-7234-40ce-8238-630f246a0bb5)

            
        - **Step 3:** you have to go to extensions, search C/C++and install by microsoft.
            
            ![image_4](https://github.com/user-attachments/assets/5fa88cd8-c832-4fee-a9bb-cbf3389cbaf1)

            
        - **Step 4: C**onfigure C++ in VS Code. To do that you need to open VS Code and press `Ctrl + ~` to open the integrated terminal. Select the compiler pressing `Ctrl + Shift + P` to open the command:
            
            ```cpp
            C/C++: Edit Configurations (UI)}
            ```
            
            ✅ **Done!** You can now write and compile **C++ programs in Windows** using **VS Code**. 🚀
            
    - Linux
        - **Step 1:** Check if you have C++ compiler. For that, you got to open your terminal and put this code:
            
            ```cpp
            g++ --version
            ```
            
            if you have information about g++, you have a c++ compiler, but you dont have g++ information, you have to install a c++ compiler. 
            
        - **Step 2:** You can install in diferents operational systems for each one has diferent commands.  Run this commands in your terminal.
            
            a. Ubuntu: 
            
            ```cpp
            sudo apt update && sudo apt install g++ -y
            ```
            
            b. Fedora: 
            
            ```cpp
            sudo dnf install gcc-c++
            ```
            
            c. Arch Linux:
            
            ```cpp
            sudo pacman -s gcc 
            ```
            
            d. OpenSUSE:
            
            ```cpp
            sudo zypper install gcc-c++
            ```
            
            Verify if it is install and it running.
            
            ```cpp
            g++ --version
            ```
            
        - **Step 3: Install VS code to run** **C++**
            1. Ubuntu / Debian
                
                ```cpp
                sudo apt install code
                ```
                
            2. Fedora
                
                ```cpp
                sudo dnf install code
                ```
                
            3. Arch Linux
                
                ```cpp
                
                sudo pacman -S code
                ```
                
            
            Finally you have to install the extension.
            
            ![image_5](attachment:04ede5f2-faa4-4b55-80fa-013406e11d99:image.png)
            
            ✅ **Done!** You can now write and compile **C++ programs on Linux** easily. 🚀

