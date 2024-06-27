class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2 = (new FUN2()).FUN3();
    
            SSLSocketFactory VAR3 = null;
            SSLSocket VAR4 = null;
            PrintWriter VAR5 = null;
    
            try
            {
                VAR3 = (VAR6) VAR6.FUN4();
                VAR4 = (VAR7) VAR3.FUN5("", 1337);
                VAR5 = new FUN6(VAR4.getOutputStream(), true);
                
                VAR5.FUN7(VAR2);
            }
            catch (IOException VAR8)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
            }
            finally
            {
                if (VAR5 != null)
                {
                    VAR5.close();
                }
    
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
            }
    
        }
};