//  Curso Arduino - Asociación de Robótica Aplicada y Ciencias de la Tecnología.
//  Primer Programa: -Hola Mundo-
//  El objetivo de este programa es entender los conceptos básicos de la programación
//    de Arduino. Especificamente ocuparemos la impresión de mensajes en pantalla.

//  Created by Claudio Ibáñez Garduño on 20/08/15.
//  Copyright (c) 2015 Claudio Ibáñez Garduño. All rights reserved.
//  Proyectos, Cursos, Asesorias: 6643-6200 ó 55-6255-7612
//  robotica.unam@gmail.com

/*Esto es un comentario*/


//El ciclo setup se ejecuta una sola vez.
void setup() 
{
  Serial.begin(9600); //Iniciamos Comunicación Computadora-Tarjeta Arduino.
                      // 9600 bits por Segundos (Batios).
} 

//El ciclo loop se ejecuta infinitamente.
void loop() {
  

  Serial.print("hola:\n\tTienen que \n\tEstudiar arduino\n Atte:ARACT ");
  Serial.println("los quiero");
 
  delay(3000);
    
}
