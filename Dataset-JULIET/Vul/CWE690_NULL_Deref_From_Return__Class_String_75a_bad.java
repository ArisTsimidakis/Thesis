class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
            VAR2 = VAR3.FUN2();
    
            
            ByteArrayOutputStream VAR4 = null;
            ObjectOutput VAR5 = null;
    
            try
            {
                VAR4 = new FUN3() ;
                VAR5 = new FUN4(VAR4) ;
                VAR5.FUN5(VAR2);
                byte[] VAR6 = VAR4.FUN6();
                (new FUN7()).FUN8(VAR6  );
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