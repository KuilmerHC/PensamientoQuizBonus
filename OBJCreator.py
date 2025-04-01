print("Este programa es para crear formatos .obj para gráficar objetos 3D definiendo los vertices y las caras. ")

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

menu()
while True:
    seleccion_usr = int(input("Seleccione una opción para acceder al menu: "))
    print("---------------------------------------------------------------------")

    if seleccion_usr == 1:   
        while True:
            try:
                vertices_totales = int(input("Ingrese la cantidad de vértices: "))
                break
            except ValueError:
                print("Error: Ingrese un valor numerico entero")
        menu()       
        
    elif seleccion_usr == 2:
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
        
    elif seleccion_usr == 3: 
        while True:
            try:
                caras_totales = int(input("Ingrese la cantidad de caras: "))
                break
            except ValueError:
                print("Error: Ingrese un valor numerico entero")
        menu()
        
    elif seleccion_usr == 4:
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
        
    elif seleccion_usr == 5:
        print("# Salida en formato .obj: \n")
        for v in vertices:
                print("v", v[0], v[1], v[2])
    
        for cara in caras:
            indices = " ".join(map(str, cara))
            print("f", indices)
        
        print("""
              
# FIn del archivo .obj
              """)
        menu()
        
    elif seleccion_usr ==6:
        print("Saliendo del programa...")
        break
    else:
        print("Error: Seleccione una opción válida")
