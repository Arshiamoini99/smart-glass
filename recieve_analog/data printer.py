import serial.tools.list_ports

# pip install pyserial

ports = serial.tools.list_ports.comports()
serialInst = serial.Serial()

portlist = []

for onePort in ports:
    portlist.append(str(onePort))
    print(str(onePort))

serialInst.baudrate = 9600
serialInst.port = "COM3"
serialInst.open()
while True:
    if serialInst.in_waiting:
        packet = serialInst.readline()
        print(packet.decode("utf"))
