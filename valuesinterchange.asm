.MODEL SMALL
.STACK 100H

.DATA
    MemoryValue DB 25h   ; Memory location with initial value (25h = 0010 0101)
    TempValue DB ?        ; Temporary variable for interchange
    DHValue DB 10h        ; Value to add from DH register (10h = 0000 1010)

.CODE
MAIN PROC
    ; Initialize data segment
    MOV AX, @DATA
    MOV DS, AX

    ; Load initial values into registers
    MOV AL, MemoryValue   ; Load AL with the value from memory (25h)
    
    ; Interchange AL with MemoryValue using TempValue
    MOV TempValue, AL     ; Store AL in TempValue
    MOV AL, MemoryValue    ; Load MemoryValue into AL
    MOV MemoryValue, TempValue ; Store TempValue back to MemoryValue

    ; Load DH with an immediate value
    MOV DH, DHValue       ; Load DH with the value to add (10h)

    ; Add DH to AL
    ADD AL, DH            ; AL = AL + DH

    ; Store the result back to MemoryValue (optional)
    MOV MemoryValue, AL   ; Store modified value back to MemoryValue

    ; Terminate program
    MOV AX, 4C00H        ; Terminate program
    INT 21H              ; DOS interrupt to exit

MAIN ENDP
END MAIN
