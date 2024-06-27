class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (5==5)
            {
                VAR2 = ""; 
                
                Properties VAR3 = new Properties();
                FileInputStream VAR4 = null;
                try
                {
                    VAR4 = new FileInputStream("");
                    VAR3.FUN2(VAR4);
                    VAR2 = VAR3.FUN3("");
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (5==5)
            {
                
                Connection VAR10 = null;
                try
                {
                    VAR10 = VAR11.getConnection("", "", VAR2);
                }
                catch (SQLException VAR12)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR12);
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
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR12);
                    }
                }
            }
        }
};