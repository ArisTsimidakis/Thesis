class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            Connection VAR6 = null;
            Statement VAR7 = null;
            ResultSet VAR8 = null;
    
            try
            {
                VAR6 = VAR9.FUN2();
                VAR7 = VAR6.createStatement();
    
                
                VAR8 = VAR7.executeQuery(""+VAR4+"");
    
                VAR9.writeLine(VAR8.FUN3()); 
            }
            catch (SQLException VAR10)
            {
                VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
            }
            finally
            {
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (SQLException VAR10)
                {
                    VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                }
    
                try
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
                }
                catch (SQLException VAR10)
                {
                    VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                }
    
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (SQLException VAR10)
                {
                    VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                }
            }
    
        }
};