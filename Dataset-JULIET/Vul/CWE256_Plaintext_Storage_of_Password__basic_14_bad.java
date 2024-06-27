class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = ""; 
                
                Properties VAR5 = new Properties();
                FileInputStream VAR6 = null;
                try
                {
                    VAR6 = new FileInputStream("");
                    VAR5.FUN2(VAR6);
                    VAR2 = VAR5.FUN3("");
                }
                catch (IOException VAR7)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4==5)
            {
                
                Connection VAR11 = null;
                try
                {
                    VAR11 = VAR12.getConnection("", "", VAR2);
                }
                catch (SQLException VAR13)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR13);
                }
                finally
                {
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR13);
                    }
                }
            }
        }
};