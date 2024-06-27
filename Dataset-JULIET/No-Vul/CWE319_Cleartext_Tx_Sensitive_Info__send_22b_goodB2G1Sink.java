class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3.VAR4)
            {
                
                VAR2 = null;
            }
            else
            {
    
                SSLSocketFactory VAR5 = null;
                SSLSocket VAR6 = null;
                PrintWriter VAR7 = null;
    
                try
                {
                    VAR5 = (VAR8) VAR8.FUN2();
                    VAR6 = (VAR9) VAR5.FUN3("", 1337);
                    VAR7 = new FUN4(VAR6.getOutputStream(), true);
                    
                    VAR7.FUN5(VAR2);
                }
                catch (IOException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
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
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                    }
                }
    
            }
        }
};