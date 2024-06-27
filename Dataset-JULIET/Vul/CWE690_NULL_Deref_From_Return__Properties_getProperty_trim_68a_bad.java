class VAR1{
    public void FUN1() throws Throwable
        {
    
            FileInputStream VAR2 = null;
            String VAR3 = "";
            try
            {
                VAR2 = new FileInputStream(VAR3);
                Properties VAR4 = new Properties();
                VAR4.FUN2(VAR2);
    
                
                VAR5 = VAR4.FUN3("");
            }
            catch (IOException VAR6)
            {
                VAR7.writeLine("" + VAR3);
                VAR5 = ""; 
            }
            finally
            {
                try
                {
                    if (VAR2 != null)
                    {
                        VAR2.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
            }
    
            (new FUN4()).FUN5();
        }
};