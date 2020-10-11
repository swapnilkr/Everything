#https://www.facebook.com/permalink.php?story_fbid=112138427332566&id=100056092276949
#Subscribed by Yash Gupta

   global  _main
    extern  _printf

    section .text
_main:
    push    message
    call    _printf
    add     esp, 4
    ret
message:
    db  'Hello, World', 10, 0
