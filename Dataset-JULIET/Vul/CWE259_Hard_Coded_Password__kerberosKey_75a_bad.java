class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
            VAR2 = "";
    
            
            ByteArrayOutputStream VAR3 = null;
            ObjectOutput VAR4 = null;
    
            try
            {
                VAR3 = new FUN2() ;
                VAR4 = new FUN3(VAR3) ;
                VAR4.FUN4(VAR2);
                byte[] VAR5 = VAR3.FUN5();
                (new FUN6()).FUN7(VAR5  );
            }
            catch (IOException VAR6)
            {
                VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
            }
            finally
            {
                
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
            }
        }
};