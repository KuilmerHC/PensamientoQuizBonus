# instructions to run the program (windows, Linux and MacOS)
---
# C++
---
## - MacOs
 ---
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
---
 ## - Windows
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
          ---     
 ##  - Linux
   ---
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
            
            ![image_5](https://github.com/user-attachments/assets/c11169ad-9469-4d6d-93a3-9cd5c7c49d73)

            
            ✅ **Done!** You can now write and compile **C++ programs on Linux** easily. 🚀

----
# Python
___

- ## MacOs
    
    **How to Install Python on macOS Using VS Code**
    
    ---
    
     You can use a lot of methods to install Python. In this case with VS Code.
    
    - **Step 1:** In this part you have two options to install python:
        1. Install Python using homebrew, remember it is optional. the command is: 
            
            ```python
            brew install python
            ```
            
            check if python is installed whit this:
            
            ```python
            python3 --version
            ```
            
        2. Install from the official website 
            
            ![image.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image1.png?raw=true)
            
    - **Step 2:** Install VSC.
        1. Search VSC in google and click on “download for Mac”
        
        ![image.png](attachment:d917bbb6-b250-4de6-91da-990e60b24f0f:image.png)
        
        1. After that, go to files and choose download and click on it.
            
            ![image.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image12.png?raw=true)
            
        2. Next to do that, run it and the app will open, when the app will be opening, it  show the main panel. (like this)
            
            ![ZHzst.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image13.png?raw=true)
            
    - **Step 4:** After to open VSC you are going to go to “extensions”, you search Python by microsoft and you clikc on it.
        
        ![image.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image5.png?raw=true)
        
    
    ✅ That’s all, you have Python in your MacOS.
    
- ## Windows
    
    🐍 **Install Python in Windows Using VS Code**
    
    - **Step 1:**  Go to microsoft store and search “Python” or dowload it from the official website.
    
    ![image.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image6.png?raw=true)
    
    - Step 2: Search VSC in google and click “download for windows”
    
    ![image.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image7.png?raw=true)
    
    1. After that, go to your files and choose download and click on it.
        
        ![image.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image8.png?raw=true)
        
    2. Next to do that, you have to run it and the app will open, when the app will be opening, it  show the main panel. (like this)
        
        ![ZHzst.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/ZHzst4.png?raw=true)
        
    3. When you enter to VSC, go to “extensions” and find Python
        
        ![image.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image5.png?raw=true)
        
    4. Finally, install the Microsoft vertion due to that is certiified.
        
        ![image.png](https://github.com/KuilmerHC/Pensamiento_Algoritmico/blob/main/Images/image9.png?raw=true)
        
    
     If you use python in VSC, is necesary to put “.py” at the end.
    
    ✅ Great, you already have python in Windows.
    
- ## Linux
    
    🐍 **How to Install Python on Linux** 
    
    Most Linux distributions come with **Python preinstalled**. However, if you need a newer version or it's missing, follow these steps based on your distribution.
    
    - Step 1: open the terminal you can open with (ctrl+alt+t )
    
    ```python
    python3 --version
    ```
    
    If you see something like `Python 3.x.x`, Python is already installed. If not, proceed to the next step.
    
    - Step 2:  you can install Python on Debian, Ubuntu, and Derivatives (Linux Mint, Pop!_OS, etc.)
    
    for that action that is downdoald python on Linux you need to put this in your terminal.
    
    1. This is for update package lists 
    
    ```python
    sudo apt update && sudo apt upgrade -y
    ```
    
    1. This is for installing python: 
        
        ```python
        sudo apt install python3 -y
        ```
        
    2. In this step you will install the Python packege manager.
        
        ```python
        sudo apt install python3-pip -y
        ```
        
    3. And finally you need to verify that it has been installed correctly.
        
        ```python
        python3 --version
        ```
        
    - Step 3: If you have more than one vertion of python and you want “python” to be the same as “python3” you will do that:
        
        ```python
        sudo update-alternatives --install /usr/bin/python python /usr/bin/python3 1
        
        ```
        
    
    Check if this install you need to put this in your terminal:
    
    ```python
    pip3 install virtualenv
    ```
    
    ✅ Great, you already have python in Linux, you can now program. 
----
---
# Code explanation:
---
## Python Code:
---
- First we define the menu as a function that we can call later

  ```python
  def menu ():
  print ("""
  ------------------------------------------------------------------------- 
  |  1. Ingrese la cantidad de vertices.                                  |
  |  2. Ingrese las coordenadas de los vértices.                          |
  |  3. Ingrese la cantidad de caras.                                     |
  |  4. Ingrese los indices de las caras.       |
  |  5. Imprimir el programa.                                             |
  |  6. Salir del programa.                                               |   
  ------------------------------------------------------------------------- 
         """)
  ```
  the first output that gives the program is the menu askin for an input. (for example, if you want to enter the vertex quantity you must writte "1")
 
 ```python
while True:
    seleccion_usr = int(input("Seleccione una opción para acceder al menu: "))
    print("---------------------------------------------------------------------")

  #input = 1
 ```
- if the input is "1", this will be the output
```python
if seleccion_usr == 1:   
        while True:
            try:
                vertices_totales = int(input("Ingrese la cantidad de vértices: "))
                break
            except ValueError:
                print("Error: Ingrese un valor numerico entero")
        menu()       
```
- With an "if" we make that the program do the things that are define in the menu
  for example:

```python
if seleccion_usr == 2:
        vertices = [] # Guardar todos los vertices
        for i in range(vertices_totales):
            while True:
                coordenadas_vertice = input(f"Ingrese las coordenas del vértice {i+1} (x y z): ")
                try:
                    x, y, z = map(int, coordenadas_vertice.split())
                    vertices.append((x, y, z))
                    break
                except ValueError:
                    print("Error: Ingresa unicamente valores numericos enteros separados por un espacio")
```
- to conclude the menu explanation, we use and the end of every condition the calling of the function
  ```python
  menu()
  ```
  for ask one more time to the user what they want to do.
----
- with the help of while true we creat loops that repet until the input is correct
  for the quantity of vertex we first ask the user for the number of vertex
  ```python
  while True:
            try:
                vertices_totales = int(input("Ingrese la cantidad de vértices: "))
  ```
- for the coords of the vertex we first define an empty array. then use an ```i in range``` of the number of vertex entered previously, then the program ask for a coord for each vertex usin in the strin the function ```{i+1}``` that sum un number for each output "vertex 1, vertex 2, vertex 3...". using the map function we transform each value in a integer and add them to the list with the .append function

```python
vertices = [] # Guardar todos los vertices
        for i in range(vertices_totales):
            while True:
                coordenadas_vertice = input(f"Ingrese las coordenas del vértice {i+1} (x y z): ")
                try:
                    x, y, z = map(int, coordenadas_vertice.split())
                    vertices.append((x, y, z))
                    break
                except ValueError:
                    print("Error: Ingresa unicamente valores numericos enteros separados por un espacio")
        menu()
```
---
The same structure is used for faces, vertex of faces, and index of faces

```python
 while True:
            try:
                caras_totales = int(input("Ingrese la cantidad de caras: "))
                break
            except ValueError:
                print("Error: Ingrese un valor numerico entero")
        menu()
caras = []
        for i in range(caras_totales):
            while True:
                try:
                    caras_vertices = int(input(f"Ingrese la cantidad de vertices para la cara {i+1}: "))
                    caras_indices = input("Ingrese los indices de lo vertices (separados por espacio): ")
                    
                    indices_lista = list(map(int, caras_indices.split()))
                    caras.append(indices_lista)
                    break
                except ValueError:
                    print("Eror: Ingresa un valor numerico entero o las caras separados por un espacio")
        menu()
```
---

- For this output, we organize the values that were entered during the program and take them out giving them and especific order.
- in the faces we define a new variable, take each value of the array and transform the in strings for sum them with an other string ```"f"```


```python
 print("# Salida en formato .obj: \n")
        for v in vertices:
                print("v", v[0], v[1], v[2])
    
        for cara in caras:
            indices = " ".join(map(str, cara))
            print("f", indices)
```
