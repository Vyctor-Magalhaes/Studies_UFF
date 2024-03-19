import numpy as np
import cmath

def soma(self,type1,num1,num2):
    self.type1 = type1
    self.num1 = num1
    self.num2 = num2
    if self.type1 == "Polar":  
        a = cmath.rect(self.num1[0],self.num1[1])
        b = cmath.rect(self.num2[0],self.num2[1])
        c = a + b
        print(c)


    elif self.type1 == "Retangular":
        a = complex(self.num1,self.num2)
        b = complex(self.num1,self.num2)
        c = a + b
        print(c)
        
type1 = input("Digite o tipo de numero que deseja somar: ")
num1 = input("Digite o primeiro numero: ")
num2 = input("Digite o segundo numero: ")
soma(type1,num1,num2)