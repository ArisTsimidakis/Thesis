class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                ServerSocket VAR3 = null;
                Socket VAR4 = null;
                OutputStream VAR5 = null;
                int VAR6 = 20000;
                try
                {
                    VAR3 = new FUN3(VAR6);
                    VAR4 = VAR3.accept(); 
                    
                    if (VAR4.FUN4().FUN5().equals(""))
                    {
                        VAR5 = VAR4.getOutputStream();
                        VAR5.write("".getBytes(""));
                    }
                    else
                    {
                        VAR5 = VAR4.getOutputStream();
                        VAR5.write("".getBytes(""));
                    }
                }
                catch (IOException VAR7)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "" + VAR11.FUN6(VAR6), VAR7);
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
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                }
            }
            else
            {
    
                ServerSocket VAR3 = null;
                Socket VAR4 = null;
                OutputStream VAR5 = null;
    
                int VAR6 = 20000;
    
                try
                {
                    VAR3 = new FUN3(VAR6);
                    VAR4 = VAR3.accept();
                    VAR5 = VAR4.getOutputStream();
                    
                    VAR5.write(("" + VAR4.FUN4().FUN5()).getBytes(""));
                }
                catch (IOException VAR7)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "" + VAR11.FUN6(VAR6), VAR7);
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
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                }
    
            }
        }
};