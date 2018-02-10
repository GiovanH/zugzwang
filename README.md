# zugzwang



## Specification

### PGN Headers
- Respect FEN board setup tags
- Use PGN header tags for localized names

(Cheeze the FEN setup)

### Command syntax
Map standard BF commands to motion on files
TODO: Investigate the possibility of two turing machines, a black machine and a white machine. 

### Piece capture
When a piece is captured, output a localized name of a piece to the tape.
If the square is white, use the capturing piece.
If the square is black, use the captured piece.

### Castling
Castling should be treated as a move by both the rook and the king

### Check
Checks are a special operation. Checks copy the value from the attacker's tape at the attacker's position to the defense's tape at the defense's position.

### Checkmate

### Thrice Repetition

Nb. Closing brackets are always inserted as needed at the end of the file to ensure all chess games are legal code. 