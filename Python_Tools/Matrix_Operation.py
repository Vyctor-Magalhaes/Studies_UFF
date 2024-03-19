import random
import numpy as np

with open('MComplex','tw+', encoding= "utf-8") as file1: #Criando o primeiro arquivo para escrita 
  linhas = 3
  colunas = 3
  file1.writelines(["Numero de linhas:", str(linhas), "\n","Numero de Colunas:", str(colunas), "\n"]) #Escrevendo as dimensões que a matriz terá
  file1.write("Matriz 1:\n")
  for i in range(0,9): #Criando elementos de uma matriz1 de números complexos 
    a=random.randint(0,10)
    a1= random.randint(0,10)
    file1.write(f"{a}+{a1}j\n")
  file1.write("Matriz 2:\n") 
  for j in range(0,9): #Criando elementos de uma matriz2 de números complexos
    b=random.randint(0,10)
    b1= random.randint(0,10)
    file1.write(f"{b}+{b1}j\n")
with open('MComplex2','tw+', encoding= "utf-8") as file2: #Criando outro arquivo para escrita
  file2.write("Matriz 1:\n")
  for i in range(0,9): #Criando elementos de uma matriz3 de números complexos
    c=random.randint(0,10)
    c1= random.randint(0,10)
    file2.write(f"{c}+{c1}j\n") 
  file2.write("Matriz 2:\n")
  for j in range(0,9): #Criando elementos de uma matriz4 de números complexos
    d=random.randint(0,10)
    d1= random.randint(0,10)
    file2.write(f"{d}+{d1}j\n") 
with open('MComplex','r+', encoding= "utf-8") as file3: #abrindo arquivo do item 1 para leitura criado anteriormente
  creat = file3.readlines() # Lendo as linhas do arquivo e armazenando em uma lista
  p1 = []
  for linha in creat:
    if "j" in linha: #Colocando em uma nova lista apenas os números complexos
      p1.append(complex(linha)) 
  print(f"Lista com os números complexos do arquivo MComplex:\n{p1}")
  mat1 = [[0,0,0],[0,0,0],[0,0,0]]
  mat2 = [[0,0,0],[0,0,0],[0,0,0]]  # Criando duas matrizes que receberão os elementos escritos anteriormente
  c=0
  for i in range(0,3):
    for k in range(0,3): #Colocando os elementos na primeira matriz
      mat1[i][k] = p1[c]
      c+=1
  for i in range(0,3): #Colocando os elementos na segunda matriz
    for k in range(0,3):
      mat2[i][k] = p1[c]
      c+=1
  print(f"Matriz criada com os 9 primeiros números complexos:\n{mat1}") #printando as matrizes
  print(f"Matriz criada com os 9 últimos números complexos:\n{mat2}")

  name = str(input("Digite o nome do arquivo de entrada:")) # O nome do arquivo de entrada será inputado pelo usuário
  with open(name,"tw+", encoding= "utf-8") as file4: #criando novo arquivo para salvar o resultado da multiplicação
    result = np.dot(np.array(mat1),np.array(mat2)) #multiplicação de matriz através da blibioteca numpy
    for i in range(0,3): #
      for k in range(0,3):
        file4.write(str(result[i][k])) #Escrevendo no novo arquivo o resultado da multiplicação 
    print(f"Multiplicação da matriz1 pela Matriz2:\n{result}")
with open('MComplex2','r+', encoding= "utf-8") as file5: #abrindo arquivo do item 1 para leitura criado anteriormente
  creat1 = file5.readlines() # Lendo as linhas do arquivo e armazenando em uma lista
  p2 = []
  for linha in creat1:
    if "j" in linha: #Colocando em uma nova lista apenas os números complexos
      p2.append(complex(linha)) 
  print(f"Lista com os números complexos do arquivo MComplex:\n{p2}")
  mat3 = [[0,0,0],[0,0,0],[0,0,0]]
  mat4 = [[0,0,0],[0,0,0],[0,0,0]]  # Criando duas matrizes que receberão os elementos escritos anteriormente
  c=0
  for i in range(0,3):
    for k in range(0,3): #Colocando os elementos na primeira matriz
      mat3[i][k] = p2[c]
      c+=1
  for i in range(0,3): #Colocando os elementos na segunda matriz
    for k in range(0,3):
      mat4[i][k] = p2[c]
      c+=1
  print(f"Matriz criada com os 9 primeiros números complexos:\n{mat3}") #printando as matrizes
  print(f"Matriz criada com os 9 últimos números complexos:\n{mat4}")

  name1 = str(input("Digite o nome do arquivo de entrada:")) # O nome do arquivo de entrada será inputado pelo usuário
  with open(name1,"tw+", encoding= "utf-8") as file6: #criando novo arquivo para salvar o resultado da multiplicação
    result1 = np.dot(np.array(mat3),np.array(mat4)) #multiplicação de matriz através da blibioteca numpy
    for i in range(0,3): #
      for k in range(0,3):
        file6.write(str(result1[i][k])) #Escrevendo no novo arquivo o resultado da multiplicação 
    print(f"Multiplicação da matriz3 pela Matriz4:\n{result1}")