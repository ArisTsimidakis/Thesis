class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                
                PasswordAuthentication VAR4 = new FUN2("", "".FUN3());
                
                VAR2 = new String(VAR4.FUN4());
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3!=5)
            {
                
                VAR5.writeLine("");
            }
            else
            {
    
                SSLSocketFactory VAR6 = null;
                SSLSocket VAR7 = null;
                PrintWriter VAR8 = null;
    
                try
                {
                    VAR6 = (VAR9) VAR9.FUN5();
                    VAR7 = (VAR10) VAR6.FUN6("", 1337);
                    VAR8 = new FUN7(VAR7.getOutputStream(), true);
                    
                    VAR8.FUN8(VAR2);
                }
                catch (IOException VAR11)
                {
                    VAR5.VAR12.log(VAR13.VAR14, "", VAR11);
                }
                finally
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR5.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
                }
    
            }
        }
};