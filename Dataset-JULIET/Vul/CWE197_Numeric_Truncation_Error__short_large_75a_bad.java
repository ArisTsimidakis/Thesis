class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
    
            
            VAR2 = VAR3.VAR4 + 5;
    
            
            ByteArrayOutputStream VAR5 = null;
            ObjectOutput VAR6 = null;
    
            try
            {
                VAR5 = new FUN2() ;
                VAR6 = new FUN3(VAR5) ;
                VAR6.FUN4(VAR2);
                byte[] VAR7 = VAR5.FUN5();
                (new FUN6()).FUN7(VAR7  );
            }
            catch (IOException VAR8)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
    
                try
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
            }
        }
};