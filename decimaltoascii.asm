.MODEL SMALL
.STACK 100H

.DATA
    DecimalValue DB 5       ; Single-digit decimal value (0-9)
    ASCIIValue DB ?         ; Memory location to store the ASCII character

.CODE
MAIN PROC
    ; Initialize data segment
    MOV AX, @DATA
    MOV DS, AX

    ; Load the decimal value into AL
    MOV AL, DecimalValue     ; AL = DecimalValue (e.g., 5)

    ; Convert the decimal value to ASCII
    ADD AL, '0'              ; Convert to ASCII by adding ASCII value of '0' (48)

    ; Store the result in ASCIIValue
    MOV ASCIIValue, AL       ; Store the ASCII character in memory

    ; Terminate program
    MOV AX, 4C00H            ; Terminate program
    INT 21H                  ; DOS interrupt to exit

MAIN ENDP
END MAIN
