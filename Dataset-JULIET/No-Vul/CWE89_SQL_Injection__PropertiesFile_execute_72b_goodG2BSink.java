class VAR1{
    public void FUN1(VAR2<String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.remove(2);
    
            Connection VAR5 = null;
            Statement VAR6 = null;
    
            try
            {
                VAR5 = VAR7.FUN2();
                VAR6 = VAR5.createStatement();
    
                
                Boolean VAR8 = VAR6.execute(""+VAR4+"");
    
                if(VAR8)
                {
                    VAR7.writeLine("" + VAR4 + "");
                }
                else
                {
                    VAR7.writeLine("" + VAR4);
                }
            }
            catch (SQLException VAR9)
            {
                VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
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
                catch (SQLException VAR9)
                {
                    VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
                }
    
                try
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
                }
                catch (SQLException VAR9)
                {
                    VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
                }
            }
    
        }
};