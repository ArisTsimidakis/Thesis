class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                VAR2 = ""; 
                
                Properties VAR4 = new Properties();
                FileInputStream VAR5 = null;
                try
                {
                    VAR5 = new FileInputStream("");
                    VAR4.FUN2(VAR5);
                    VAR2 = VAR4.FUN3("");
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3==5)
            {
                
                Connection VAR11 = null;
                try
                {
                    VAR11 = VAR12.getConnection("", "", VAR2);
                }
                catch (SQLException VAR13)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR13);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR13);
                    }
                }
            }
        }
};