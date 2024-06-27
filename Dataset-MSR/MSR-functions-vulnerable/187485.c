bool FUN1(int VAR1, int VAR2)
{
 if (VAR1 < 0 || VAR1 >= VAR3)
 {
        FUN2("", VAR4, VAR1);
 return false;
 }
 if (VAR2 == -1)
 {
        FUN2("", VAR4);
 return false;

     }
 
     sock_cmd_t VAR5 = {VAR6, VAR2, 0, 0, 0};

    return send(VAR7[VAR1].VAR8, &VAR5, sizeof(VAR5), 0) == sizeof(VAR5);


 }