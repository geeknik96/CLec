% копипаста с http://mech.math.msu.su/~zubr/asm.html
% программа выводит Hello world на ассемблере.


.section .data
hello:
        .ascii  "Hello  world!\n"
hellolen:
        .long   . - hello
.section .text
.global _start

_start:
        xorl %ebx, %ebx #помещаем 0 в регистр ebx
        movl $4, %eax #помещаем номер системного вызова write в регистр eax
        incl %ebx #увеличиваем значение регистра ebx на 1, номер файлового десккриптора stdout теперь в регистре ebx
        leal hello, %ecx #помещаем в регистр ecx адрес данного hello
        movl hellolen, %edx #помещаем в регистр edx  значение данного hellolen
        int $0x80 #системный вызов write



        xorl %eax, %eax #помещаем 0 в регистр eax
        incl %eax  #увеличиваем значение регистра eax на 1, номер системного вызова exit теперь в регистре eax
        xorl %ebx, %ebx #помещаем 0 в регистр ebx
        int $0x80 #системный вызов exit
