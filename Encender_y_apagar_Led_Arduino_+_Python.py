import serial
import tkinter

arduinoData = serial.Serial('COM4', 9600)

def led_on():
    arduinoData.write(b'1') 

def led_off():
    arduinoData.write(b'0')

def led_on2():
    arduinoData.write(b'3') 

def led_off2():
    arduinoData.write(b'2')

def led_on3():
    arduinoData.write(b'5') 

def led_off3():
    arduinoData.write(b'4')

def led_on4():
    arduinoData.write(b'7') 

def led_off4():
    arduinoData.write(b'6')

def led_on5():
    arduinoData.write(b'9') 

def led_off5():
    arduinoData.write(b'8')

def led_on6():
    arduinoData.write(b'H') 

def led_off6():
    arduinoData.write(b'L')

led_control_window = tkinter.Tk()

Button = tkinter.Button

btn = Button(led_control_window, text="ON ", command=led_on)
btn2 = Button(led_control_window, text="OFF", command=led_off)

btn3 = Button(led_control_window, text="ON ", command=led_on2)
btn4 = Button(led_control_window, text="OFF", command=led_off2)

btn5 = Button(led_control_window, text="ON ", command=led_on3)
btn6 = Button(led_control_window, text="OFF", command=led_off3)

btn7 = Button(led_control_window, text="ON ", command=led_on4)
btn8 = Button(led_control_window, text="OFF", command=led_off4)

btn9 = Button(led_control_window, text="ON ", command=led_on5)
btn10 = Button(led_control_window, text="OFF", command=led_off5)

btn11 = Button(led_control_window, text="ON ", command=led_on6)
btn12 = Button(led_control_window, text="OFF", command=led_off6)

btn.grid(row=0,column=1)
btn2.grid(row=1,column=1)

btn3.grid(row=0,column=2)
btn4.grid(row=1,column=2)

btn5.grid(row=0,column=3)
btn6.grid(row=1,column=3)

btn7.grid(row=0,column=4)
btn8.grid(row=1,column=4)

btn9.grid(row=0,column=5)
btn10.grid(row=1,column=5)

btn11.grid(row=3,column=2)
btn12.grid(row=3,column=4)

led_control_window.mainloop()

input("preciona enter para salir")