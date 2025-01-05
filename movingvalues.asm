.MODEL SMALL
.STACK 100H

.DATA
FIRST DB 5       ; First 8-bit number
SECOND DB 10     ; Second 8-bit number
RESULT DW ?      ; To store the result (16 bits)

.CODE
MAIN PROC
    MOV AX, @DATA      ; Initialize data segment
    MOV DS, AX

    ; Load the first number into AL
    MOV AL, FIRST      ; AL = FIRST
    ; Load the second number into BL
    MOV BL, SECOND     ; BL = SECOND

    ; Multiply AL by BL (result in AX)
    MUL BL             ; AX = AL * BL

    ; Move the result from AX to CX
    MOV CX, AX         ; CX = AX (result of multiplication)

    ; End of program (you can add a return or exit routine here)
    MOV AX, 4C00H      ; Terminate program
    INT 21H

MAIN ENDP
END MAIN
