class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                ServerSocket VAR3 = null;
                Socket VAR4 = null;
                OutputStream VAR5 = null;
                int VAR6 = 20000;
                try
                {
                    VAR3 = new FUN2(VAR6);
                    VAR4 = VAR3.accept();
                    VAR5 = VAR4.getOutputStream();
                    
                    VAR5.write(("" + VAR4.FUN3().FUN4()).getBytes(""));
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "" + VAR12.FUN5(VAR6), VAR7);
                }
                finally
                {
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                }
            }
        }
};