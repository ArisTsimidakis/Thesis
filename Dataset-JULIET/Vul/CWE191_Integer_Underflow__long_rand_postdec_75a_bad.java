class VAR1{
    public void FUN1() throws Throwable
        {
            long VAR2;
    
            
            VAR2 = (new VAR3.VAR4.FUN2()).FUN3();
    
            
            ByteArrayOutputStream VAR5 = null;
            ObjectOutput VAR6 = null;
    
            try
            {
                VAR5 = new FUN4() ;
                VAR6 = new FUN5(VAR5) ;
                VAR6.FUN6(VAR2);
                byte[] VAR7 = VAR5.FUN7();
                (new FUN8()).FUN9(VAR7  );
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