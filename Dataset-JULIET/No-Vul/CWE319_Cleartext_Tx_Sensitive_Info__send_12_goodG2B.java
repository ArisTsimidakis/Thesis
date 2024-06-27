class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                
                VAR2 = "";
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if(VAR3.FUN2())
            {
                Socket VAR4 = null;
                PrintWriter VAR5 = null;
                try
                {
                    VAR4 = new Socket("", 1337);
                    VAR5 = new FUN3(VAR4.getOutputStream(), true);
                    
                    VAR5.FUN4(VAR2);
                }
                catch (IOException VAR6)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                }
                finally
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                }
            }
            else
            {
    
                Socket VAR4 = null;
                PrintWriter VAR5 = null;
    
                try
                {
                    VAR4 = new Socket("", 1337);
                    VAR5 = new FUN3(VAR4.getOutputStream(), true);
                    
                    VAR5.FUN4(VAR2);
                }
                catch (IOException VAR6)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                }
                finally
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                }
    
            }
        }
};