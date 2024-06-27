class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                Properties VAR4 = new Properties();
                FileInputStream VAR5 = null;
                try
                {
                    VAR5 = new FileInputStream("");
                    VAR4.FUN3(VAR5);
                    VAR2 = VAR4.FUN4("");
                }
                catch (IOException VAR6)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if(VAR3.FUN2())
            {
                
                Connection VAR10 = null;
                try
                {
                    VAR10 = VAR11.getConnection("", "", VAR2);
                }
                catch (SQLException VAR12)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR12);
                }
                finally
                {
                    try
                    {
                        if (VAR10 != null)
                        {
                            VAR10.close();
                        }
                    }
                    catch (SQLException VAR12)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR12);
                    }
                }
            }
        }
};