class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                
                PasswordAuthentication VAR3 = new FUN2("", "".FUN3());
                
                VAR2 = new String(VAR3.FUN4());
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (8)
            {
            case 7:
                
                VAR4.writeLine("");
                break;
            default:
                SSLSocketFactory VAR5 = null;
                SSLSocket VAR6 = null;
                PrintWriter VAR7 = null;
                try
                {
                    VAR5 = (VAR8) VAR8.FUN5();
                    VAR6 = (VAR9) VAR5.FUN6("", 1337);
                    VAR7 = new FUN7(VAR6.getOutputStream(), true);
                    
                    VAR7.FUN8(VAR2);
                }
                catch (IOException VAR10)
                {
                    VAR4.VAR11.log(VAR12.VAR13, "", VAR10);
                }
                finally
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR10)
                    {
                        VAR4.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
                }
                break;
            }
        }
};