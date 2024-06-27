static char FUN1(unsigned VAR1) {
 if (VAR1 <= 25) {
 return '' + VAR1;
 } else if (VAR1 <= 51) {
 return '' + VAR1 - 26;
 } else if (VAR1 <= 61) {
 return '' + VAR1 - 52;
 } else if (VAR1 == 62) {
 return '';
 } else {
 return '';
 }
}