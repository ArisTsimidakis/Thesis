class VAR1{
    public void FUN1() throws Throwable
        {
            switch (7)
            {
            case 7:
                ServerSocket VAR2 = null;
                Socket VAR3 = null;
                OutputStream VAR4 = null;
                int VAR5 = 20000;
                try
                {
                    VAR2 = new FUN2(VAR5);
                    VAR3 = VAR2.accept(); 
                    
                    if (VAR3.FUN3().FUN4().equals(""))
                    {
                        VAR4 = VAR3.getOutputStream();
                        VAR4.write("".getBytes(""));
                    }
                    else
                    {
                        VAR4 = VAR3.getOutputStream();
                        VAR4.write("".getBytes(""));
                    }
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "" + VAR11.FUN5(VAR5), VAR6);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    try
                    {
                        if (VAR2 != null)
                        {
                            VAR2.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                }
                break;
            default:
                
                VAR7.writeLine("");
                break;
            }
        }
};