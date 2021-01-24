import tkinter as tk
from time import strftime

def clock():
    currentHour = strftime("%H:%M:%S")
    hour.config(text=currentHour)
    hour.after(1000, clock)    

# Creates application
digitalClock = tk.Tk()
digitalClock.title("Digital Clock")
digitalClock.resizable(0, 0)
digitalClock.attributes('-topmost', True) # Open app above others

# Creates hour label
hour = tk.Label(digitalClock, font=("FreeMono", 50), background='darkred', foreground='black')
hour.grid(column=0, row=0)

# Start application
clock()
digitalClock.mainloop()


