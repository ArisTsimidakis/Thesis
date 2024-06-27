class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
    
            
            SecureRandom VAR3 = new FUN2();
            VAR2 = VAR3.FUN3();
    
            
            ByteArrayOutputStream VAR4 = null;
            ObjectOutput VAR5 = null;
    
            try
            {
                VAR4 = new FUN4() ;
                VAR5 = new FUN5(VAR4) ;
                VAR5.FUN6(VAR2);
                byte[] VAR6 = VAR4.FUN7();
                (new FUN8()).FUN9(VAR6  );
            }
            catch (IOException VAR7)
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
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
    
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                }
            }
        }
};