class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            SSLSocketFactory VAR6 = null;
            SSLSocket VAR7 = null;
            PrintWriter VAR8 = null;
    
            try
            {
                VAR6 = (VAR9) VAR9.FUN2();
                VAR7 = (VAR10) VAR6.FUN3("", 1337);
                VAR8 = new FUN4(VAR7.getOutputStream(), true);
                
                VAR8.FUN5(VAR4);
            }
            catch (IOException VAR11)
            {
                VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
            }
            finally
            {
                if (VAR8 != null)
                {
                    VAR8.close();
                }
    
                try
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
            }
    
        }
};