.MODEL SMALL
.STACK 100H

.DATA
    Value1 DB 5          ; First byte value (5)
    Value2 DB 10         ; Second byte value (10)

.CODE
MAIN PROC
    ; Initialize data segment
    MOV AX, @DATA
    MOV DS, AX

    ; Load the first value into AL
    MOV AL, Value1       ; AL = Value1 (5)

    ; Load the second value into BL
    MOV BL, Value2       ; BL = Value2 (10)

    ; Multiply AL by BL
    MUL BL                ; AX = AL * BL; result is in AX (AL:AH)

    ; Move the result to AH register (the high byte of the result)
    MOV AH, AL           ; Move low byte of result to AH (if needed, otherwise it stays in AL)

    ; Optional: Store the result back to memory if needed
    ; MOV Result, AX      ; If you want to store the result somewhere

    ; Terminate program
    MOV AX, 4C00H        ; Terminate program
    INT 21H              ; DOS interrupt to exit

MAIN ENDP
END MAIN
