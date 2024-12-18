.MODEL SMALL
.STACK 100H

.DATA
    DIGIT1 DB '5'   ; First ASCII digit
    DIGIT2 DB '3'   ; Second ASCII digit
    RESULT DB ?     ; To store the result (ASCII)

.CODE
MAIN PROC
    MOV AX, @DATA   ; Initialize data segment
    MOV DS, AX

    ; Load the first ASCII digit into AL
    MOV AL, DIGIT1  ; AL = '5'

    ; Convert ASCII to decimal by subtracting ASCII value of '0'
    SUB AL, '0'     ; Convert from ASCII to decimal (AL = 5)

    ; Load the second ASCII digit into BL
    MOV BL, DIGIT2  ; BL = '3'

    ; Convert ASCII to decimal by subtracting ASCII value of '0'
    SUB BL, '0'     ; Convert from ASCII to decimal (BL = 3)

    ; Add the two decimal values
    ADD AL, BL      ; AL = AL + BL (AL now contains 8)

    ; Convert back to ASCII by adding ASCII value of '0'
    ADD AL, '0'     ; Convert back to ASCII (AL = '8')

    ; Move the result into DL register for output or further use
    MOV DL, AL      ; Store result in DL

    ; Optionally, print the result (for demonstration purposes)
    MOV AH, 02H     ; Function to print character in DL
    INT 21H         ; Call DOS interrupt to print character

    ; Terminate program
    MOV AX, 4C00H   ; Terminate program
    INT 21H         ; DOS interrupt to exit

MAIN ENDP
END MAIN
