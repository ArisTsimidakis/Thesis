class VAR1{
    public void FUN1(LinkedList<String> VAR2 ) throws Throwable
        {
            String VAR3 = VAR2.remove(2);
    
            Connection VAR4 = null;
            Statement VAR5 = null;
    
            try
            {
                VAR4 = VAR6.FUN2();
                VAR5 = VAR4.createStatement();
    
                
                int VAR7 = VAR5.executeUpdate(""+VAR3+"");
    
                VAR6.writeLine("" + VAR7 + "");
            }
            catch (SQLException VAR8)
            {
                VAR6.VAR9.log(VAR10.VAR11, "", VAR8);
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
                catch (SQLException VAR8)
                {
                    VAR6.VAR9.log(VAR10.VAR11, "", VAR8);
                }
    
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (SQLException VAR8)
                {
                    VAR6.VAR9.log(VAR10.VAR11, "", VAR8);
                }
            }
    
        }
};