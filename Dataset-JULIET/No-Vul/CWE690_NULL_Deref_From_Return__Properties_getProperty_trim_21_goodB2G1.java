class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            FileInputStream VAR3 = null;
            String VAR4 = "";
            try
            {
                VAR3 = new FileInputStream(VAR4);
                Properties VAR5 = new Properties();
                VAR5.FUN2(VAR3);
    
                
                VAR2 = VAR5.FUN3("");
            }
            catch (IOException VAR6)
            {
                VAR7.writeLine("" + VAR4);
                VAR2 = ""; 
            }
            finally
            {
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
            }
    
            VAR12 = false;
            FUN4(VAR2 );
        }
};