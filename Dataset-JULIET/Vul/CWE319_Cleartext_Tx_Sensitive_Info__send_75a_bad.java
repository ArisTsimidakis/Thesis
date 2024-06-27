class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
            PasswordAuthentication VAR3 = new FUN2("", "".FUN3());
    
            
            VAR2 = new String(VAR3.FUN4());
    
            
            ByteArrayOutputStream VAR4 = null;
            ObjectOutput VAR5 = null;
    
            try
            {
                VAR4 = new FUN5() ;
                VAR5 = new FUN6(VAR4) ;
                VAR5.FUN7(VAR2);
                byte[] VAR6 = VAR4.FUN8();
                (new FUN9()).FUN10(VAR6  );
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