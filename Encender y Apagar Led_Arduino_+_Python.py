import serial
import tkinter

arduinoData = serial.Serial('COM4', 9600)

def led_on():
    arduinoData.write(b'1') 

def led_off():
    arduinoData.write(b'0')

led_control_window = tkinter.Tk()

Button = tkinter.Button

btn = Button(led_control_window, text="ON ", command=led_on)
btn2 = Button(led_control_window, text="OFF", command=led_off)

btn.grid(row=0,column=1)
btn2.grid(row=1,column=1)

led_control_window.mainloop()

input("preciona enter para salir")