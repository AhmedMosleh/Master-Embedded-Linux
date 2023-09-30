headerFile =  open("init.c",'+w')

portConfig =  [0] * 8

for i in range(8):
    pin = input(f'Please enter Bit {i} mode: ')
    if pin == 'out':
        pin = '1'
    elif pin == 'in':
        pin = '0'
    portConfig[-(i+1)] = pin

port = ''.join(portConfig)
port = '0b'+port

# headerFile.write('#define DDRA (*(* volatile int) (0x1234FFF))\n')
headerFile.write('void Init_PORTA_DIR (void)\n')
headerFile.write(f'{{\n\tDDRA = {port};\n}}')
