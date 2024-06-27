class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                PasswordAuthentication VAR5 = new FUN2("", "".FUN3());
                
                VAR2 = new String(VAR5.FUN4());
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR6)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                SSLSocketFactory VAR7 = null;
                SSLSocket VAR8 = null;
                PrintWriter VAR9 = null;
    
                try
                {
                    VAR7 = (VAR10) VAR10.FUN5();
                    VAR8 = (VAR11) VAR7.FUN6("", 1337);
                    VAR9 = new FUN7(VAR8.getOutputStream(), true);
                    
                    VAR9.FUN8(VAR2);
                }
                catch (IOException VAR12)
                {
                    VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                }
                finally
                {
                    if (VAR9 != null)
                    {
                        VAR9.close();
                    }
    
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (IOException VAR12)
                    {
                        VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                    }
                }
    
            }
        }
};