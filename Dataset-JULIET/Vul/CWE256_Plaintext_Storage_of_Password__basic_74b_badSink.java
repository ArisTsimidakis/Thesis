class VAR1{
    public void FUN1(HashMap<VAR2,String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.get(2);
    
            
    
            Connection VAR5 = null;
            try
            {
                VAR5 = VAR6.getConnection("", "", VAR4);
            }
            catch (SQLException VAR7)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                catch (SQLException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
            }
    
        }
};