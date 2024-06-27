class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
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
    
            
    
            LinkedList<String> VAR10 = new LinkedList<String>();
            VAR10.add(0, VAR2);
            VAR10.add(1, VAR2);
            VAR10.add(2, VAR2);
            (new FUN4()).FUN5(VAR10  );
        }
};