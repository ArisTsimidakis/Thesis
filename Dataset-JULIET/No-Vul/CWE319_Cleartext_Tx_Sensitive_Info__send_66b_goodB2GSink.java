class VAR1{
    public void FUN1(String VAR2[] ) throws Throwable
        {
            String VAR3 = VAR2[2];
    
            SSLSocketFactory VAR4 = null;
            SSLSocket VAR5 = null;
            PrintWriter VAR6 = null;
    
            try
            {
                VAR4 = (VAR7) VAR7.FUN2();
                VAR5 = (VAR8) VAR4.FUN3("", 1337);
                VAR6 = new FUN4(VAR5.getOutputStream(), true);
                
                VAR6.FUN5(VAR3);
            }
            catch (IOException VAR9)
            {
                VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
            }
            finally
            {
                if (VAR6 != null)
                {
                    VAR6.close();
                }
    
                try
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
                }
                catch (IOException VAR9)
                {
                    VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                }
            }
    
        }
};