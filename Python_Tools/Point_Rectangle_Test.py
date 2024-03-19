class Point:
  def __init__(self, a, b): #Atributos da classe Point
    self.x = a
    self.y = b

  def __str__(self): #Formato para print
    return f"Posx={self.x}, Posy={self.y}"

class Rectangle (Point):
  
  def __init__(self,width,height,x,y): #Atributos da classe Rectangle, com o corner como atributo da classe rectangle porém como objeto da classe point.
    self.width = width
    self.height = height
    self.corner = Point(x,y)
  
  def __str__(self): #Formato para print
    return f"Width = {self.width}; Height = {self.height}; Corner = ({self.corner.x},{self.corner.y})"

  def check_inside(self,p): #método para checar se o ponto está dentro ou fora, retornando um booleano.
    if (p.x>=self.corner.x) and (p.x<=(self.corner.x + self.width)):  #Se for maior que a coordenada x do canto inferior esquerdo e menor que a soma da coordenada pela largura.
      if(p.y>=self.corner.y) and(p.y<=(self.corner.y + self.height)):  #Se for maior que a coordenada y do canto inferior esquerdo e menor que a soma da coordenada pela altura.
        return True
    else:
      return False

  def output1(self,p2):  #Verifica se o método check inside da função é True or False e cria uma saída de forma organizada, com as coordenadas e propriedades.
    if self.check_inside(p2) == True:
      print(f"Point inside!\nCoord:({p2.x},{p2.y}).\nRectangle properties: {self.__str__()}.")
    else:
      print(f"Poin outside the rectangle!\nCoord:({p2.x},{p2.y}).\nRectangle properties: {self.__str__()}.")

ob = Rectangle(100,200,17,10) # Objeto da classe retângulo com suas propriedades
pnt_os = Point(121,220) #Objeto da classe point, criado fora do retângulo
pnt_is = Point (55,105) #Objeto da classe point, criado dentro do retângulo
print((ob),(pnt_is)) #print com a formatação do método str
print(ob.check_inside(pnt_is)) #chamando o método da classe Rectangle para verificar se o ponto está dento ou fora.
ob.output1(pnt_is) #chamando método da classe Rectangle para a saída formatada.