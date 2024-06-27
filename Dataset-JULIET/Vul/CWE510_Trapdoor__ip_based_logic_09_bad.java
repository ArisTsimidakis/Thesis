class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                ServerSocket VAR4 = null;
                Socket VAR5 = null;
                OutputStream VAR6 = null;
                int VAR7 = 20000;
                try
                {
                    VAR4 = new FUN2(VAR7);
                    VAR5 = VAR4.accept(); 
                    
                    if (VAR5.FUN3().FUN4().equals(""))
                    {
                        VAR6 = VAR5.getOutputStream();
                        VAR6.write("".getBytes(""));
                    }
                    else
                    {
                        VAR6 = VAR5.getOutputStream();
                        VAR6.write("".getBytes(""));
                    }
                }
                catch (IOException VAR8)
                {
                    VAR2.VAR9.log(VAR10.VAR11, "" + VAR12.FUN5(VAR7), VAR8);
                }
                finally
                {
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};